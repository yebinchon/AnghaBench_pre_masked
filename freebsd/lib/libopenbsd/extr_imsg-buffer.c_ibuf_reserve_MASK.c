
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {scalar_t__ wpos; scalar_t__ size; void* buf; } ;


 int FUNC_0 (struct ibuf*,size_t) ;

void *
FUNC_1(struct ibuf *VAR_0, size_t VAR_1)
{
 void *VAR_2;

 if (VAR_0->wpos + VAR_1 > VAR_0->size)
  if (FUNC_0(VAR_0, VAR_1) == -1)
   return (((void*)0));

 VAR_2 = VAR_0->buf + VAR_0->wpos;
 VAR_0->wpos += VAR_1;
 return (VAR_2);
}
