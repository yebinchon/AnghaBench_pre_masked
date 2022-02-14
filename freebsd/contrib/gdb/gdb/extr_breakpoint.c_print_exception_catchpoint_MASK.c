
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {int number; int addr_string; } ;
typedef enum print_stop_action { ____Placeholder_print_stop_action } print_stop_action ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int * FUNC_2 (int ,char*) ;

__attribute__((used)) static enum print_stop_action
FUNC_3 (struct breakpoint *VAR_1)
{
  FUNC_0 (VAR_1->number);

  if (FUNC_2 (VAR_1->addr_string, "throw") != ((void*)0))
    FUNC_1 ("\nCatchpoint %d (exception thrown)\n",
       VAR_1->number);
  else
    FUNC_1 ("\nCatchpoint %d (exception caught)\n",
       VAR_1->number);

  return VAR_0;
}
