
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum print_stop_action { ____Placeholder_print_stop_action } print_stop_action ;
typedef TYPE_1__* bpstat ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

enum print_stop_action
FUNC_1 (bpstat VAR_4)
{
  int VAR_5;





  for (; VAR_4; VAR_4 = VAR_4->next)
    {
      VAR_5 = FUNC_0 (VAR_4);
      if (VAR_5 == VAR_2
   || VAR_5 == VAR_1
   || VAR_5 == VAR_0)
 return VAR_5;
    }



  return VAR_3;
}
