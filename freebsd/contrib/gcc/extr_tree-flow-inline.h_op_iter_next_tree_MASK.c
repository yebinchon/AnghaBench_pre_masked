
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
struct TYPE_10__ {scalar_t__ iter_type; int done; TYPE_7__* maydefs; TYPE_5__* mustdefs; TYPE_9__* defs; TYPE_6__* mustkills; TYPE_8__* mayuses; TYPE_3__* vuses; TYPE_4__* uses; } ;
typedef TYPE_1__ ssa_op_iter ;
struct TYPE_17__ {struct TYPE_17__* next; } ;
struct TYPE_16__ {struct TYPE_16__* next; } ;
struct TYPE_15__ {struct TYPE_15__* next; } ;
struct TYPE_14__ {struct TYPE_14__* next; } ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
struct TYPE_12__ {struct TYPE_12__* next; } ;
struct TYPE_11__ {struct TYPE_11__* next; } ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline tree
FUNC_8 (ssa_op_iter *VAR_2)
{
  tree VAR_3;



  if (VAR_2->uses)
    {
      VAR_3 = FUNC_5 (VAR_2->uses);
      VAR_2->uses = VAR_2->uses->next;
      return VAR_3;
    }
  if (VAR_2->vuses)
    {
      VAR_3 = FUNC_6 (VAR_2->vuses);
      VAR_2->vuses = VAR_2->vuses->next;
      return VAR_3;
    }
  if (VAR_2->mayuses)
    {
      VAR_3 = FUNC_1 (VAR_2->mayuses);
      VAR_2->mayuses = VAR_2->mayuses->next;
      return VAR_3;
    }
  if (VAR_2->mustkills)
    {
      VAR_3 = FUNC_3 (VAR_2->mustkills);
      VAR_2->mustkills = VAR_2->mustkills->next;
      return VAR_3;
    }
  if (VAR_2->defs)
    {
      VAR_3 = FUNC_0 (VAR_2->defs);
      VAR_2->defs = VAR_2->defs->next;
      return VAR_3;
    }
  if (VAR_2->mustdefs)
    {
      VAR_3 = FUNC_4 (VAR_2->mustdefs);
      VAR_2->mustdefs = VAR_2->mustdefs->next;
      return VAR_3;
    }
  if (VAR_2->maydefs)
    {
      VAR_3 = FUNC_2 (VAR_2->maydefs);
      VAR_2->maydefs = VAR_2->maydefs->next;
      return VAR_3;
    }

  VAR_2->done = 1;
  return VAR_0;

}
