
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_7__ {int id; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int node_revision_t ;
struct TYPE_8__ {scalar_t__ kind; int * fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,TYPE_2__*) ;
 int * FUNC_2 (int ,int *,char*,char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__**,int *,int *,char const*,int *,int *) ;
 int * FUNC_7 (int *,int const*,int *,char const*,int *,int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char const*) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

svn_error_t *
FUNC_11(dag_node_t *VAR_6,
                      const char *VAR_7,
                      const svn_fs_fs__id_part_t *VAR_8,
                      apr_pool_t *VAR_9)
{
  node_revision_t *VAR_10;
  svn_fs_t *VAR_11 = VAR_6->fs;
  svn_fs_dirent_t *VAR_12;
  svn_fs_id_t *VAR_13;
  apr_pool_t *VAR_14;


  if (VAR_6->kind != VAR_4)
    return FUNC_2
      (VAR_0, ((void*)0),
       "Attempted to delete entry '%s' from *non*-directory node", VAR_7);


  if (! FUNC_3(VAR_6))
    return FUNC_2
      (VAR_1, ((void*)0),
       "Attempted to delete entry '%s' from immutable directory node", VAR_7);


  if (! FUNC_8(VAR_7))
    return FUNC_2
      (VAR_2, ((void*)0),
       "Attempted to delete a node with an illegal name '%s'", VAR_7);


  FUNC_0(FUNC_1(&VAR_10, VAR_6));

  VAR_14 = FUNC_9(VAR_9);


  FUNC_0(FUNC_6(&VAR_12, VAR_11, VAR_10,
                                            VAR_7, VAR_14, VAR_14));




  if (! VAR_12)
    return FUNC_2
      (VAR_3, ((void*)0),
       "Delete failed--directory has no entry '%s'", VAR_7);



  VAR_13 = FUNC_5(VAR_12->id, VAR_9);
  FUNC_10(VAR_14);


  FUNC_0(FUNC_4(VAR_6->fs, VAR_13, VAR_9));


  return FUNC_7(VAR_6->fs, VAR_8, VAR_10, VAR_7,
                              ((void*)0), VAR_5, VAR_9);
}
