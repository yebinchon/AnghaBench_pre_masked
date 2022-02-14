
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ enable_state; int pending; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0 (struct breakpoint *VAR_1)
{
  return (VAR_1->enable_state == VAR_0 && !VAR_1->pending);
}
