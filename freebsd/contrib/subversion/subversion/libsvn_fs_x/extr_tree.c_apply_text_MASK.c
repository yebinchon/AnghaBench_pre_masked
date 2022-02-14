
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int path; TYPE_4__* root; int stream; int pool; int node; int file_stream; } ;
typedef TYPE_1__ text_baton_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_10__ {int node; } ;
typedef TYPE_2__ svn_fs_x__dag_path_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int txn_flags; int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_2__**,TYPE_4__*,int ,int ,int ,int *,int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int ,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_8,
           apr_pool_t *VAR_9)
{
  text_baton_t *VAR_10 = VAR_8;
  svn_fs_x__dag_path_t *VAR_11;
  svn_fs_x__txn_id_t VAR_12 = FUNC_7(VAR_10->root);



  FUNC_0(FUNC_5(&VAR_11, VAR_10->root, VAR_10->path, 0, VAR_3,
                                 VAR_9, VAR_9));



  if (VAR_10->root->txn_flags & VAR_1)
    FUNC_0(FUNC_2(VAR_10->path, VAR_10->root->fs,
                                             VAR_0, VAR_0, VAR_9));


  FUNC_0(FUNC_6(VAR_10->root, VAR_11, VAR_10->path,
                                      VAR_9, VAR_9));
  VAR_10->node = FUNC_3(VAR_11->node, VAR_10->pool);


  FUNC_0(FUNC_4(&(VAR_10->file_stream), VAR_10->node,
                                        VAR_10->pool));


  VAR_10->stream = FUNC_8(VAR_10, VAR_10->pool);
  FUNC_10(VAR_10->stream, VAR_7);
  FUNC_9(VAR_10->stream, VAR_6);


  return FUNC_1(VAR_10->root->fs, VAR_12, VAR_10->path,
                    VAR_4, VAR_3, VAR_0, VAR_0,
                    VAR_5, VAR_2, ((void*)0), VAR_9);
}
