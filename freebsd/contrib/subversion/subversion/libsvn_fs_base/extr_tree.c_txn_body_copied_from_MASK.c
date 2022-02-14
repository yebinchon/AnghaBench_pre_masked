
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct copied_from_args {int result_rev; int * result_path; int path; TYPE_8__* root; } ;
typedef int dag_node_t ;
struct TYPE_11__ {scalar_t__ kind; int src_txn_id; int * src_path; int dst_noderev_id; } ;
typedef TYPE_2__ copy_t ;
struct TYPE_12__ {int * fs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int **,TYPE_8__*,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int const**,int *,TYPE_1__*,int ) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int ,int const*) ;
 int FUNC_7 (int *,int *,int ,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_2__**,int *,int ,TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_3, trail_t *VAR_4)
{
  struct copied_from_args *VAR_5 = VAR_3;
  const svn_fs_id_t *VAR_6, *VAR_7;
  dag_node_t *VAR_8;
  svn_fs_t *VAR_9 = VAR_5->root->fs;


  VAR_5->result_path = ((void*)0);
  VAR_5->result_rev = VAR_0;


  FUNC_0(FUNC_1(&VAR_8, VAR_5->root, VAR_5->path, VAR_4, VAR_4->pool));
  VAR_6 = FUNC_3(VAR_8);



  FUNC_0(FUNC_4(&VAR_7, VAR_8,
                                              VAR_4, VAR_4->pool));
  if (! VAR_7)
    return VAR_1;


  if (FUNC_2(FUNC_5(VAR_6),
             FUNC_5(VAR_7)) != 0)
    {



      copy_t *VAR_10;
      FUNC_0(FUNC_8(&VAR_10, VAR_9,
                                   FUNC_5(VAR_6),
                                   VAR_4, VAR_4->pool));
      if ((VAR_10->kind == VAR_2)
          && FUNC_6(VAR_10->dst_noderev_id, VAR_6))
        {
          VAR_5->result_path = VAR_10->src_path;
          FUNC_0(FUNC_7(&(VAR_5->result_rev), VAR_9,
                                                VAR_10->src_txn_id,
                                                VAR_4, VAR_4->pool));
        }
    }
  return VAR_1;
}
