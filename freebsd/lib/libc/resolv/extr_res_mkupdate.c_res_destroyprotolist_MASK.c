
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct valuelist {struct valuelist* name; struct valuelist* next; } ;


 int FUNC_0 (struct valuelist*) ;
 struct valuelist* VAR_0 ;

void
FUNC_1(void) {
 struct valuelist *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1);
 }
 VAR_0 = (struct valuelist *)0;
}
