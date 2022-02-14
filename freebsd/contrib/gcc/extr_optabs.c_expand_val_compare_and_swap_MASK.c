
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int* VAR_2 ;

rtx
FUNC_2 (rtx VAR_3, rtx VAR_4, rtx VAR_5, rtx VAR_6)
{
  enum machine_mode VAR_7 = FUNC_0 (VAR_3);
  enum insn_code VAR_8 = VAR_2[VAR_7];

  if (VAR_8 == VAR_0)
    return VAR_1;

  return FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
}
