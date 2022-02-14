
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_13__ {TYPE_6__* parent; int entry; int node; } ;
typedef TYPE_1__ svn_fs_x__dag_path_t ;
struct TYPE_14__ {int txn_flags; int fs; int is_txn_root; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_15__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char const*,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_6__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (int ,int *,int ) ;
 int VAR_6 ;
 int FUNC_7 (char const*,int ,int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__**,TYPE_2__*,char const*,int ,int ,int *,int *) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,TYPE_6__*,char const*,int *,int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_fs_root_t *VAR_7,
              const char *VAR_8,
              apr_pool_t *VAR_9)
{
  svn_fs_x__dag_path_t *VAR_10;
  svn_fs_x__txn_id_t VAR_11;
  apr_int64_t VAR_12 = 0;
  svn_node_kind_t VAR_13;
  apr_pool_t *VAR_14 = FUNC_15(VAR_9);

  if (! VAR_7->is_txn_root)
    return FUNC_1(VAR_7);

  VAR_11 = FUNC_14(VAR_7);
  FUNC_0(FUNC_11(&VAR_10, VAR_7, VAR_8, 0, VAR_5, VAR_14,
                                 VAR_14));
  VAR_13 = FUNC_10(VAR_10->node);


  if (! VAR_10->parent)
    return FUNC_6(VAR_1, ((void*)0),
                            FUNC_2("The root directory cannot be deleted"));



  if (VAR_7->txn_flags & VAR_2)
    FUNC_0(FUNC_7(VAR_8, VAR_7->fs, VAR_5, VAR_0,
                                             VAR_14));


  FUNC_0(FUNC_13(VAR_7, VAR_10->parent, VAR_8, VAR_14,
                                      VAR_14));
  VAR_12 = FUNC_9(VAR_10->node);
  FUNC_0(FUNC_8(VAR_10->parent->node,
                               VAR_10->entry,
                               VAR_11, VAR_14));


  FUNC_12(VAR_7, FUNC_5(VAR_10, VAR_14));


  if (VAR_12 > 0)
    FUNC_0(FUNC_4(VAR_10->parent,
                                        -VAR_12,
                                        VAR_14));


  FUNC_0(FUNC_3(VAR_7->fs, VAR_11, VAR_8,
                     VAR_6, VAR_0, VAR_0, VAR_0, VAR_13,
                     VAR_3, ((void*)0), VAR_14));

  FUNC_16(VAR_14);
  return VAR_4;
}
