
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int mode; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2 (rtx *VAR_1, rtx VAR_2,
        enum insn_code VAR_3)

{
  enum reg_class VAR_4 = FUNC_1 (VAR_3);
  enum machine_mode VAR_5 = VAR_0[(int) VAR_3].operand[2].mode;

  return FUNC_0 (VAR_1, VAR_2,
         VAR_4, VAR_5);
}
