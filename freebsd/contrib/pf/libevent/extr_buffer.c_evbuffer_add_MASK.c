
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {size_t off; size_t totallen; size_t buffer; int cbarg; int (* cb ) (struct evbuffer*,size_t,size_t,int ) ;int misalign; } ;


 int FUNC_0 (struct evbuffer*,size_t) ;
 int FUNC_1 (size_t,void const*,size_t) ;
 int FUNC_2 (struct evbuffer*,size_t,size_t,int ) ;

int
FUNC_3(struct evbuffer *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->misalign + VAR_0->off + VAR_2;
 size_t VAR_4 = VAR_0->off;

 if (VAR_0->totallen < VAR_3) {
  if (FUNC_0(VAR_0, VAR_2) == -1)
   return (-1);
 }

 FUNC_1(VAR_0->buffer + VAR_0->off, VAR_1, VAR_2);
 VAR_0->off += VAR_2;

 if (VAR_2 && VAR_0->cb != ((void*)0))
  (*VAR_0->cb)(VAR_0, VAR_4, VAR_0->off, VAR_0->cbarg);

 return (0);
}
