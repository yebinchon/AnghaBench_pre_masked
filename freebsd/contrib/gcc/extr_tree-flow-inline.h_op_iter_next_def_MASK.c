
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iter_type; int done; TYPE_4__* maydefs; TYPE_3__* mustdefs; TYPE_5__* defs; } ;
typedef TYPE_1__ ssa_op_iter ;
typedef int def_operand_p ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline def_operand_p
FUNC_4 (ssa_op_iter *VAR_2)
{
  def_operand_p VAR_3;



  if (VAR_2->defs)
    {
      VAR_3 = FUNC_0 (VAR_2->defs);
      VAR_2->defs = VAR_2->defs->next;
      return VAR_3;
    }
  if (VAR_2->mustdefs)
    {
      VAR_3 = FUNC_2 (VAR_2->mustdefs);
      VAR_2->mustdefs = VAR_2->mustdefs->next;
      return VAR_3;
    }
  if (VAR_2->maydefs)
    {
      VAR_3 = FUNC_1 (VAR_2->maydefs);
      VAR_2->maydefs = VAR_2->maydefs->next;
      return VAR_3;
    }
  VAR_2->done = 1;
  return VAR_0;
}
