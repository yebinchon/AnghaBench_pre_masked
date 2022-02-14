
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum cgen_operand_type { ____Placeholder_cgen_operand_type } cgen_operand_type ;
struct TYPE_9__ {int (* get_int_operand ) (TYPE_3__*,int,int const*) ;} ;
struct TYPE_8__ {TYPE_1__* opinst; } ;
struct TYPE_7__ {scalar_t__ type; int op_type; int index; } ;
typedef TYPE_1__ CGEN_OPINST ;
typedef TYPE_2__ CGEN_INSN ;
typedef int CGEN_FIELDS ;
typedef TYPE_3__* CGEN_CPU_DESC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int,int const*) ;

void
FUNC_2 (CGEN_CPU_DESC VAR_2,
   const CGEN_INSN *VAR_3,
   const CGEN_FIELDS *VAR_4,
   int *VAR_5)
{
  const CGEN_OPINST *VAR_6;
  int VAR_7;

  if (VAR_3->opinst == ((void*)0))
    FUNC_0 ();
  for (VAR_7 = 0, VAR_6 = VAR_3->opinst; VAR_6->type != VAR_1; ++VAR_7, ++VAR_6)
    {
      enum cgen_operand_type VAR_8 = VAR_6->op_type;
      if (VAR_8 == VAR_0)
 VAR_5[VAR_7] = VAR_6->index;
      else
 VAR_5[VAR_7] = (*VAR_2->get_int_operand) (VAR_2, VAR_8, VAR_4);
    }
}
