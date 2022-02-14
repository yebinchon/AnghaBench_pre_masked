
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0 (struct breakpoint *VAR_2)
{
  return
    (VAR_2->type == VAR_0)
    || (VAR_2->type == VAR_1);
}
