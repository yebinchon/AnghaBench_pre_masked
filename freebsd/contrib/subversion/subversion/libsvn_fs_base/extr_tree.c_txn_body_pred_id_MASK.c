
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool; int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct txn_pred_id_args {int * pred_id; int pool; int id; } ;
struct TYPE_7__ {scalar_t__ predecessor_id; } ;
typedef TYPE_2__ node_revision_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__**,int ,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1, trail_t *VAR_2)
{
  node_revision_t *VAR_3;
  struct txn_pred_id_args *VAR_4 = VAR_1;

  FUNC_0(FUNC_2(&VAR_3, VAR_2->fs, VAR_4->id,
                                        VAR_2, VAR_2->pool));
  if (VAR_3->predecessor_id)
    VAR_4->pred_id = FUNC_1(VAR_3->predecessor_id, VAR_4->pool);
  else
    VAR_4->pred_id = ((void*)0);

  return VAR_0;
}
