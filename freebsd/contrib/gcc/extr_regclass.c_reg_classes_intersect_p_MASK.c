
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef int HARD_REG_SET ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

int
FUNC_3 (enum reg_class VAR_4, enum reg_class VAR_5)
{
  HARD_REG_SET VAR_6;

  if (VAR_4 == VAR_5) return 1;

  if (VAR_4 == VAR_0 || VAR_5 == VAR_0)
    return 1;

  FUNC_1 (VAR_6, VAR_3[(int) VAR_4]);
  FUNC_0 (VAR_6, VAR_3[(int) VAR_5]);

  FUNC_2 (VAR_6, VAR_3[(int) VAR_1], VAR_2);
  return 1;

 lose:
  return 0;
}
