
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mips_cl_insn {TYPE_1__* insn_mo; } ;
struct TYPE_6__ {scalar_t__ X_op; } ;
typedef TYPE_2__ expressionS ;
struct TYPE_5__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3 (struct mips_cl_insn *VAR_3, expressionS *VAR_4)
{
  if (VAR_4->X_op == VAR_1)
    FUNC_1 (FUNC_0("unsupported large constant"));
  else if (VAR_4->X_op != VAR_2)
    FUNC_1 (FUNC_0("Instruction %s requires absolute expression"),
     VAR_3->insn_mo->name);

  if (VAR_0)
    FUNC_2 (VAR_4);
}
