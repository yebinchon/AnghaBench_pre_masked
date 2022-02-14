
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int mode; int (* predicate ) (int ,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static rtx
FUNC_7 (enum insn_code VAR_2,
     unsigned int VAR_3, tree *VAR_4)
{
  rtx VAR_5;
  enum machine_mode VAR_6;

  VAR_5 = FUNC_4 (FUNC_1 (*VAR_4));
  VAR_6 = VAR_1[VAR_2].operand[VAR_3].mode;
  if (!VAR_1[VAR_2].operand[VAR_3].predicate (VAR_5, VAR_6))
    {
      VAR_5 = FUNC_2 (VAR_6, VAR_5);

      if (!VAR_1[VAR_2].operand[VAR_3].predicate (VAR_5, VAR_6))
 {
   FUNC_3 ("invalid argument to builtin function");
   return VAR_0;
 }
    }

  *VAR_4 = FUNC_0 (*VAR_4);
  return VAR_5;
}
