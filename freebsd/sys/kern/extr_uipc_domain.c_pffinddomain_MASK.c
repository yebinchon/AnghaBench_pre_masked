
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain {int dom_family; struct domain* dom_next; } ;


 struct domain* VAR_0 ;

struct domain *
FUNC_0(int VAR_1)
{
 struct domain *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->dom_next)
  if (VAR_2->dom_family == VAR_1)
   return (VAR_2);
 return (((void*)0));
}
