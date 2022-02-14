
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {int kind; int k; int reg; } ;


 int FUNC_0 (int ) ;




__attribute__((used)) static int
FUNC_1 (struct prologue_value *VAR_0,
                 struct prologue_value *VAR_1)
{
  if (VAR_0->kind != VAR_1->kind)
    return 0;

  switch (VAR_0->kind)
    {
    case 128:
      return 1;
    case 130:
      return (VAR_0->k == VAR_1->k);
    case 129:
      return (VAR_0->reg == VAR_1->reg && VAR_0->k == VAR_1->k);
    default:
      FUNC_0 (0);
    }
}
