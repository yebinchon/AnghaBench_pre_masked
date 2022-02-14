
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pool; TYPE_5__* fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct txn_deltify_args {int txn_id; int is_dir; scalar_t__ base_id; scalar_t__ tgt_id; } ;
typedef int dag_node_t ;
struct TYPE_9__ {scalar_t__ format; } ;
typedef TYPE_2__ base_fs_data_t ;
struct TYPE_10__ {TYPE_2__* fsap_data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int **,TYPE_5__*,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2, trail_t *VAR_3)
{
  struct txn_deltify_args *VAR_4 = VAR_2;
  dag_node_t *VAR_5, *VAR_6;
  base_fs_data_t *VAR_7 = VAR_3->fs->fsap_data;

  FUNC_0(FUNC_2(&VAR_5, VAR_3->fs, VAR_4->tgt_id,
                                    VAR_3, VAR_3->pool));

  if (VAR_4->base_id)
    {
      FUNC_0(FUNC_2(&VAR_6, VAR_3->fs, VAR_4->base_id,
                                        VAR_3, VAR_3->pool));
      FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_4->is_dir,
                                       VAR_4->txn_id, VAR_3, VAR_3->pool));
    }



  if (VAR_7->format >= VAR_0)
    FUNC_0(FUNC_3(VAR_5, VAR_3, VAR_3->pool));

  return VAR_1;
}
