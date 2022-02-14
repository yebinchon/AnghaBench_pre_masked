
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {size_t wpos; void* buf; } ;



void *
FUNC_0(struct ibuf *VAR_0, size_t VAR_1, size_t VAR_2)
{

 if (VAR_1 + VAR_2 > VAR_0->wpos)
  return (((void*)0));

 return (VAR_0->buf + VAR_1);
}
