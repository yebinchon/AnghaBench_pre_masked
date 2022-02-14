
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _nv {char const* n; int v; } ;



const char *
FUNC_0(struct _nv *VAR_0, int VAR_1)
{
 for (; VAR_0->n != ((void*)0); VAR_0++)
  if (VAR_0->v == VAR_1)
   return (VAR_0->n);
 return (((void*)0));
}
