
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int use_operand_p ;
struct TYPE_7__ {scalar_t__ iter_type; int done; TYPE_3__* mustkills; TYPE_5__* mayuses; } ;
typedef TYPE_1__ ssa_op_iter ;
typedef int def_operand_p ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_8__ {struct TYPE_8__* next; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_5 (use_operand_p *VAR_3, def_operand_p *VAR_4,
    ssa_op_iter *VAR_5)
{



  if (VAR_5->mayuses)
    {
      *VAR_4 = FUNC_1 (VAR_5->mayuses);
      *VAR_3 = FUNC_0 (VAR_5->mayuses);
      VAR_5->mayuses = VAR_5->mayuses->next;
      return;
    }

  if (VAR_5->mustkills)
    {
      *VAR_4 = FUNC_3 (VAR_5->mustkills);
      *VAR_3 = FUNC_2 (VAR_5->mustkills);
      VAR_5->mustkills = VAR_5->mustkills->next;
      return;
    }

  *VAR_4 = VAR_0;
  *VAR_3 = VAR_1;
  VAR_5->done = 1;
  return;
}
