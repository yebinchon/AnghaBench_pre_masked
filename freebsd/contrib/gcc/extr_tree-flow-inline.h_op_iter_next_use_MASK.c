
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int use_operand_p ;
struct TYPE_7__ {scalar_t__ iter_type; scalar_t__ phi_i; scalar_t__ num_phi; int done; int phi_stmt; TYPE_5__* mustkills; TYPE_6__* mayuses; TYPE_3__* vuses; TYPE_4__* uses; } ;
typedef TYPE_1__ ssa_op_iter ;
struct TYPE_11__ {struct TYPE_11__* next; } ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_8__ {struct TYPE_8__* next; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline use_operand_p
FUNC_6 (ssa_op_iter *VAR_2)
{
  use_operand_p VAR_3;



  if (VAR_2->uses)
    {
      VAR_3 = FUNC_3 (VAR_2->uses);
      VAR_2->uses = VAR_2->uses->next;
      return VAR_3;
    }
  if (VAR_2->vuses)
    {
      VAR_3 = FUNC_4 (VAR_2->vuses);
      VAR_2->vuses = VAR_2->vuses->next;
      return VAR_3;
    }
  if (VAR_2->mayuses)
    {
      VAR_3 = FUNC_0 (VAR_2->mayuses);
      VAR_2->mayuses = VAR_2->mayuses->next;
      return VAR_3;
    }
  if (VAR_2->mustkills)
    {
      VAR_3 = FUNC_1 (VAR_2->mustkills);
      VAR_2->mustkills = VAR_2->mustkills->next;
      return VAR_3;
    }
  if (VAR_2->phi_i < VAR_2->num_phi)
    {
      return FUNC_2 (VAR_2->phi_stmt, (VAR_2->phi_i)++);
    }
  VAR_2->done = 1;
  return VAR_0;
}
