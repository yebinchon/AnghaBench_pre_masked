
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quick_exit_handler {void (* cleanup ) () ;struct quick_exit_handler* next; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct quick_exit_handler* VAR_1 ;
 struct quick_exit_handler* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(void (*VAR_2)(void))
{
 struct quick_exit_handler *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));

 if (((void*)0) == VAR_3)
  return (1);
 VAR_3->cleanup = VAR_2;
 FUNC_2(&VAR_0);
 VAR_3->next = VAR_1;
 FUNC_0();
 VAR_1 = VAR_3;
 FUNC_3(&VAR_0);
 return (0);
}
