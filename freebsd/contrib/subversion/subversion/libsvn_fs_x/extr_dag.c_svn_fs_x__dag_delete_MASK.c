
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
struct TYPE_10__ {int id; } ;
typedef TYPE_2__ svn_fs_x__dirent_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int * fs; int hint; TYPE_1__* node_revision; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (TYPE_3__*,char const*,int *,int ,int ,int *) ;
 int * FUNC_3 (int ,int *,char*,char const*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__**,int *,TYPE_1__*,char const*,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

svn_error_t *
FUNC_9(dag_node_t *VAR_7,
                     const char *VAR_8,
                     svn_fs_x__txn_id_t VAR_9,
                     apr_pool_t *VAR_10)
{
  svn_fs_x__noderev_t *VAR_11 = VAR_7->node_revision;
  svn_fs_t *VAR_12 = VAR_7->fs;
  svn_fs_x__dirent_t *VAR_13;
  apr_pool_t *VAR_14;


  if (VAR_11->kind != VAR_5)
    return FUNC_3
      (VAR_0, ((void*)0),
       "Attempted to delete entry '%s' from *non*-directory node", VAR_8);


  if (! FUNC_4(VAR_7))
    return FUNC_3
      (VAR_1, ((void*)0),
       "Attempted to delete entry '%s' from immutable directory node", VAR_8);


  if (! FUNC_6(VAR_8))
    return FUNC_3
      (VAR_2, ((void*)0),
       "Attempted to delete a node with an illegal name '%s'", VAR_8);




  VAR_14 = FUNC_7(VAR_10);


  FUNC_0(FUNC_5(&VAR_13, VAR_12, VAR_11,
                                           VAR_8, &VAR_7->hint,
                                           VAR_14, VAR_14));




  if (! VAR_13)
    return FUNC_3
      (VAR_3, ((void*)0),
       "Delete failed--directory has no entry '%s'", VAR_8);


  FUNC_0(FUNC_1(VAR_7->fs, &VAR_13->id, VAR_14));


  FUNC_0(FUNC_2(VAR_7, VAR_8, ((void*)0), VAR_6, VAR_9, VAR_14));

  FUNC_8(VAR_14);
  return VAR_4;
}
