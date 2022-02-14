
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline enum insn_code
FUNC_2 (tree VAR_3, enum machine_mode VAR_4)
{
  enum insn_code VAR_5 = VAR_0;

  if (FUNC_1 (FUNC_0 (VAR_3)))
    VAR_5 = VAR_2[VAR_4];
  else
    VAR_5 = VAR_1[VAR_4];
  return VAR_5;
}
