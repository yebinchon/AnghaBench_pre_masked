
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {scalar_t__ kind; int reg; scalar_t__ k; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0 (struct prologue_value *VAR_1, int VAR_2, CORE_ADDR VAR_3)
{
  return (VAR_1->kind == VAR_0
          && VAR_1->reg == VAR_2
          && VAR_1->k == VAR_3);
}
