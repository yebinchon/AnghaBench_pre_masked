
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {size_t off; size_t buffer; size_t orig_buffer; int cbarg; int (* cb ) (struct evbuffer*,size_t,size_t,int ) ;scalar_t__ misalign; } ;


 int FUNC_0 (struct evbuffer*,size_t,size_t,int ) ;

void
FUNC_1(struct evbuffer *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = VAR_0->off;

 if (VAR_1 >= VAR_0->off) {
  VAR_0->off = 0;
  VAR_0->buffer = VAR_0->orig_buffer;
  VAR_0->misalign = 0;
  goto done;
 }

 VAR_0->buffer += VAR_1;
 VAR_0->misalign += VAR_1;

 VAR_0->off -= VAR_1;

 done:

 if (VAR_0->off != VAR_2 && VAR_0->cb != ((void*)0))
  (*VAR_0->cb)(VAR_0, VAR_2, VAR_0->off, VAR_0->cbarg);

}
