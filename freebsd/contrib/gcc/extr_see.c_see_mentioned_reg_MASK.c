
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_mentioned_reg_data {int mentioned; int reg; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1 (rtx *VAR_0, void *VAR_1)
{
  struct see_mentioned_reg_data *VAR_2
    = (struct see_mentioned_reg_data *) VAR_1;

  if (FUNC_0 (VAR_2->reg, *VAR_0))
    VAR_2->mentioned = 1;
}
