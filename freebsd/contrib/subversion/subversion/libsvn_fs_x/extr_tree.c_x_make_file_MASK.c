
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_11__ {int entry; TYPE_6__* parent; scalar_t__ node; } ;
typedef TYPE_1__ svn_fs_x__dag_path_t ;
struct TYPE_12__ {int txn_flags; int fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_2__*,char const*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char const*,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int VAR_5 ;
 int FUNC_4 (char const*,int ,int ,int ,int *) ;
 int FUNC_5 (int **,int ,int ,int ,int ,int *,int *) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__**,TYPE_2__*,char const*,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_6__*,char const*,int *,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_fs_root_t *VAR_8,
            const char *VAR_9,
            apr_pool_t *VAR_10)
{
  svn_fs_x__dag_path_t *VAR_11;
  dag_node_t *VAR_12;
  svn_fs_x__txn_id_t VAR_13 = FUNC_8(VAR_8);
  apr_pool_t *VAR_14 = FUNC_10(VAR_10);

  FUNC_0(FUNC_6(&VAR_11, VAR_8, VAR_9,
                                 VAR_6,
                                 VAR_4, VAR_14, VAR_14));



  if (VAR_11->node)
    return FUNC_1(VAR_8, VAR_9);



  if (VAR_8->txn_flags & VAR_1)
    FUNC_0(FUNC_4(VAR_9, VAR_8->fs, VAR_0, VAR_0,
                                             VAR_14));


  FUNC_0(FUNC_7(VAR_8, VAR_11->parent, VAR_9, VAR_14,
                                      VAR_14));
  FUNC_0(FUNC_5(&VAR_12,
                                  VAR_11->parent->node,
                                  FUNC_3(VAR_11->parent,
                                                   VAR_14),
                                  VAR_11->entry,
                                  VAR_13,
                                  VAR_14, VAR_14));


  FUNC_9(VAR_12);


  FUNC_0(FUNC_2(VAR_8->fs, VAR_13, VAR_9,
                     VAR_5, VAR_4, VAR_0, VAR_0,
                     VAR_7, VAR_2, ((void*)0), VAR_14));

  FUNC_11(VAR_14);
  return VAR_3;
}
