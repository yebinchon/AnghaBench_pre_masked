
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {struct prison* pr_parent; } ;



int
FUNC_0(struct prison *VAR_0, struct prison *VAR_1)
{

 for (VAR_1 = VAR_1->pr_parent; VAR_1 != ((void*)0); VAR_1 = VAR_1->pr_parent)
  if (VAR_0 == VAR_1)
   return (1);
 return (0);
}
