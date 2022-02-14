
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {struct objfile* next; } ;


 struct objfile* VAR_0 ;

void
FUNC_0 (struct objfile *VAR_1)
{
  struct objfile **VAR_2;
  for (VAR_2 = &VAR_0; *VAR_2 != ((void*)0); VAR_2 = &((*VAR_2)->next))
    {
      if (*VAR_2 == VAR_1)
 {

   *VAR_2 = VAR_1->next;

   VAR_1->next = VAR_0;
   VAR_0 = VAR_1;
   break;
 }
    }
}
