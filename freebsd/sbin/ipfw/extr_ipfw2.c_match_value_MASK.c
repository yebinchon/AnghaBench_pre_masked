
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _s_x {char const* s; int x; } ;



char const *
FUNC_0(struct _s_x *VAR_0, int VAR_1)
{
 for (; VAR_0->s != ((void*)0); VAR_0++)
  if (VAR_0->x == VAR_1)
   return VAR_0->s;
 return ((void*)0);
}
