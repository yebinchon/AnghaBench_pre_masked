
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_4__ {int n_operands; TYPE_1__* operand; } ;
struct TYPE_3__ {char* constraint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,char const*) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;

enum reg_class
FUNC_2 (enum insn_code VAR_3)
{
  const char *VAR_4;
  char VAR_5;
  enum reg_class VAR_6;

  FUNC_1 (VAR_2[(int) VAR_3].n_operands == 3);
  VAR_4 = VAR_2[(int) VAR_3].operand[2].constraint;
  FUNC_1 (*VAR_4 == '=');
  VAR_4++;
  if (*VAR_4 == '&')
    VAR_4++;
  VAR_5 = *VAR_4;
  if (VAR_5 == 'r')
    return VAR_0;
  VAR_6 = FUNC_0 ((unsigned char) VAR_5,
         VAR_4);
  FUNC_1 (VAR_6 != VAR_1);
  return VAR_6;
}
