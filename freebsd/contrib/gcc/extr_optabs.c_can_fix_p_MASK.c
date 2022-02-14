
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
typedef TYPE_3__* convert_optab ;
struct TYPE_12__ {TYPE_1__* handlers; } ;
struct TYPE_11__ {TYPE_2__** handlers; } ;
struct TYPE_10__ {int insn_code; } ;
struct TYPE_9__ {int insn_code; } ;


 int VAR_0 ;
 TYPE_8__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static enum insn_code
FUNC_0 (enum machine_mode VAR_6, enum machine_mode VAR_7,
    int VAR_8, int *VAR_9)
{
  convert_optab VAR_10;
  enum insn_code VAR_11;

  VAR_10 = VAR_8 ? VAR_5 : VAR_3;
  VAR_11 = VAR_10->handlers[VAR_6][VAR_7].insn_code;
  if (VAR_11 != VAR_0)
    {
      *VAR_9 = 0;
      return VAR_11;
    }




  VAR_10 = VAR_8 ? VAR_4 : VAR_2;
  VAR_11 = VAR_10->handlers[VAR_6][VAR_7].insn_code;
  if (VAR_11 != VAR_0
      && VAR_1->handlers[VAR_7].insn_code != VAR_0)
    {
      *VAR_9 = 1;
      return VAR_11;
    }

  *VAR_9 = 0;
  return VAR_0;
}
