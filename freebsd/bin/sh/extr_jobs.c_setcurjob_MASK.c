
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {struct job* next; } ;


 struct job* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct job *VAR_1)
{
 struct job *VAR_2, *VAR_3;

 for (VAR_3 = ((void*)0), VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_3 = VAR_2, VAR_2 = VAR_2->next) {
  if (VAR_2 == VAR_1) {
   if (VAR_3 != ((void*)0))
    VAR_3->next = VAR_2->next;
   else
    VAR_0 = VAR_2->next;
   VAR_2->next = VAR_0;
   VAR_0 = VAR_1;
   return;
  }
 }
 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;
}
