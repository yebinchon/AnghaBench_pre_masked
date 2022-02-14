
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quick_exit_handler {int (* cleanup ) () ;struct quick_exit_handler* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct quick_exit_handler* VAR_0 ;
 int FUNC_2 () ;

void
FUNC_3(int VAR_1)
{
 struct quick_exit_handler *VAR_2;





 for (VAR_2 = VAR_0; ((void*)0) != VAR_2; VAR_2 = VAR_2->next) {
  FUNC_1();
  VAR_2->cleanup();
 }
 FUNC_0(VAR_1);
}
