
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ type; scalar_t__ enable_state; int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct breakpoint*) ;
 int FUNC_2 (struct breakpoint*) ;

void
FUNC_3 (struct breakpoint *VAR_3)
{



  if (VAR_3->type == VAR_2)
    return;


  if (VAR_3->enable_state == VAR_1)
    return;

  VAR_3->enable_state = VAR_0;

  FUNC_1 (VAR_3);

  if (&FUNC_2)
    FUNC_2 (VAR_3);
  FUNC_0 (VAR_3->number);
}
