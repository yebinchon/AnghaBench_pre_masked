
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dialog_list {struct dialog_list* next; } ;


 int FUNC_0 (struct dialog_list*) ;
 int * VAR_0 ;
 struct dialog_list* VAR_1 ;
 int VAR_2 ;

void FUNC_1(void)
{
 struct dialog_list *VAR_3, *VAR_4;

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3);
 }
 VAR_1 = ((void*)0);
 VAR_0 = &VAR_2;
}
