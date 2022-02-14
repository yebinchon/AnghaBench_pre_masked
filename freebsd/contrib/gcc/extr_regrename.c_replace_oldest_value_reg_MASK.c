
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int dummy; } ;
typedef scalar_t__ rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int,scalar_t__,struct value_data*) ;
 int FUNC_3 (scalar_t__,char*,int,int,int) ;
 int FUNC_4 (scalar_t__,scalar_t__*,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_5 (rtx *VAR_1, enum reg_class VAR_2, rtx VAR_3,
     struct value_data *VAR_4)
{
  rtx VAR_5 = FUNC_2 (VAR_2, *VAR_1, VAR_4);
  if (VAR_5)
    {
      if (VAR_0)
 FUNC_3 (VAR_0, "insn %u: replaced reg %u with %u\n",
   FUNC_0 (VAR_3), FUNC_1 (*VAR_1), FUNC_1 (VAR_5));

      FUNC_4 (VAR_3, VAR_1, VAR_5, 1);
      return 1;
    }
  return 0;
}
