
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_13__ {int kind; int noderev_id; int copy_id; int created_path; int predecessor_count; int predecessor_id; int copyfrom_rev; int * copyfrom_path; int copyroot_path; int copyroot_rev; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,char const*,int const*,int ,int ,int *) ;
 int * FUNC_3 (int ,int *,char*,...) ;
 int FUNC_4 (int *,TYPE_1__*,int const*,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (TYPE_2__**,int *,int const*,int *,int *) ;
 int FUNC_9 (TYPE_2__**,TYPE_2__*,char const*,int *,int *) ;
 int FUNC_10 (char const*,char const*,int *) ;
 int FUNC_11 (char const*) ;

svn_error_t *
FUNC_12(dag_node_t **VAR_4,
                          dag_node_t *VAR_5,
                          const char *VAR_6,
                          const char *VAR_7,
                          const svn_fs_x__id_t *VAR_8,
                          svn_fs_x__txn_id_t VAR_9,
                          svn_boolean_t VAR_10,
                          apr_pool_t *VAR_11,
                          apr_pool_t *VAR_12)
{
  dag_node_t *VAR_13;
  const svn_fs_x__id_t *VAR_14;
  svn_fs_t *VAR_15 = FUNC_6(VAR_5);


  if (! FUNC_5(VAR_5))
    return FUNC_3
      (VAR_1, ((void*)0),
       "Attempted to clone child of non-mutable node");


  if (! FUNC_11(VAR_7))
    return FUNC_3
      (VAR_2, ((void*)0),
       "Attempted to make a child clone with an illegal name '%s'", VAR_7);


  FUNC_0(FUNC_9(&VAR_13, VAR_5, VAR_7, VAR_12,
                             VAR_12));
  if (! VAR_13)
    return FUNC_3
      (VAR_0, ((void*)0),
       "Attempted to open non-existent child node '%s'", VAR_7);



  if (FUNC_5(VAR_13))
    {

      VAR_14 = FUNC_7(VAR_13);
    }
  else
    {
      svn_fs_x__noderev_t *VAR_16 = VAR_13->node_revision;

      if (VAR_10)
        {
          svn_fs_x__noderev_t *VAR_17 = VAR_5->node_revision;
          VAR_16->copyroot_rev = VAR_17->copyroot_rev;
          VAR_16->copyroot_path = FUNC_1(VAR_12,
                                               VAR_17->copyroot_path);
        }

      VAR_16->copyfrom_path = ((void*)0);
      VAR_16->copyfrom_rev = VAR_3;

      VAR_16->predecessor_id = VAR_16->noderev_id;
      VAR_16->predecessor_count++;
      VAR_16->created_path = FUNC_10(VAR_6, VAR_7,
                                               VAR_12);

      if (VAR_8 == ((void*)0))
        VAR_8 = &VAR_16->copy_id;

      FUNC_0(FUNC_4(VAR_15, VAR_16, VAR_8, VAR_9,
                                         VAR_12));
      VAR_14 = &VAR_16->noderev_id;



      FUNC_0(FUNC_2(VAR_5, VAR_7, VAR_14, VAR_16->kind, VAR_9,
                        VAR_12));
    }


  return FUNC_8(VAR_4, VAR_15, VAR_14, VAR_11,
                                VAR_12);
}
