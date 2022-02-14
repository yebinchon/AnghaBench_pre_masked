
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int node; int path; TYPE_5__* root; int interpreter_baton; int interpreter; int pool; int target_stream; int source_stream; TYPE_3__* base_checksum; } ;
typedef TYPE_1__ txdelta_baton_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct TYPE_11__ {int node; } ;
typedef TYPE_2__ parent_path_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int txn_flags; int fs; } ;
struct TYPE_12__ {int kind; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int const*,int ,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__**,TYPE_5__*,int ,int ,int ,int *) ;
 int * FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int * FUNC_7 (TYPE_3__*,int *,int *,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;
 int FUNC_9 (int **,int ,int ,int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int ,int ,int *,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(void *VAR_6, apr_pool_t *VAR_7)
{
  txdelta_baton_t *VAR_8 = (txdelta_baton_t *) VAR_6;
  parent_path_t *VAR_9;
  const svn_fs_fs__id_part_t *VAR_10 = FUNC_5(VAR_8->root);



  FUNC_0(FUNC_4(&VAR_9, VAR_8->root, VAR_8->path, 0, VAR_3, VAR_7));



  if (VAR_8->root->txn_flags & VAR_1)
    FUNC_0(FUNC_8(VAR_8->path, VAR_8->root->fs,
                                              VAR_0, VAR_0, VAR_7));


  FUNC_0(FUNC_3(VAR_8->root, VAR_9, VAR_8->path, VAR_7));
  VAR_8->node = VAR_9->node;

  if (VAR_8->base_checksum)
    {
      svn_checksum_t *VAR_11;



      FUNC_0(FUNC_9(&VAR_11, VAR_8->node,
                                           VAR_8->base_checksum->kind, VAR_7));
      if (!FUNC_6(VAR_8->base_checksum, VAR_11))
        return FUNC_7(VAR_8->base_checksum, VAR_11, VAR_7,
                                         FUNC_1("Base checksum mismatch on '%s'"),
                                         VAR_8->path);
    }




  FUNC_0(FUNC_10(&(VAR_8->source_stream),
                                      VAR_8->node, VAR_8->pool));


  FUNC_0(FUNC_11(&(VAR_8->target_stream), VAR_8->node,
                                         VAR_8->pool));


  FUNC_13(VAR_8->source_stream,
                    VAR_8->target_stream,
                    ((void*)0),
                    VAR_8->path,
                    VAR_8->pool,
                    &(VAR_8->interpreter),
                    &(VAR_8->interpreter_baton));


  return FUNC_2(VAR_8->root->fs, VAR_10, VAR_8->path,
                    FUNC_12(VAR_8->node),
                    VAR_4, VAR_3, VAR_0, VAR_0,
                    VAR_5, VAR_2, ((void*)0), VAR_7);
}
