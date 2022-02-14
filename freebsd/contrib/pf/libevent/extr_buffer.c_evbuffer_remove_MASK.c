
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {size_t off; int buffer; } ;


 int FUNC_0 (struct evbuffer*,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

int
FUNC_2(struct evbuffer *VAR_0, void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;
 if (VAR_3 >= VAR_0->off)
  VAR_3 = VAR_0->off;

 FUNC_1(VAR_1, VAR_0->buffer, VAR_3);
 FUNC_0(VAR_0, VAR_3);

 return (VAR_3);
}
