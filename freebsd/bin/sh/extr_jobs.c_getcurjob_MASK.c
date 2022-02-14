
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {scalar_t__ state; scalar_t__ used; struct job* next; } ;


 scalar_t__ VAR_0 ;
 struct job* VAR_1 ;

__attribute__((used)) static struct job *
FUNC_0(struct job *VAR_2)
{
 struct job *VAR_3;


 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (VAR_3->used && VAR_3 != VAR_2 && VAR_3->state == VAR_0)
   return (VAR_3);

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (VAR_3->used && VAR_3 != VAR_2)
   return (VAR_3);

 return (((void*)0));
}
