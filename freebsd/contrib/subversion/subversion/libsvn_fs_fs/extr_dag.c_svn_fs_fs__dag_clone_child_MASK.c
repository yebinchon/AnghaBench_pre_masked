
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {int kind; int created_path; int predecessor_count; int predecessor_id; int copyfrom_rev; int * copyfrom_path; int copyroot_path; int copyroot_rev; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_15__ {int * id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__**,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,int const*,int ,int const*,int *) ;
 int * FUNC_4 (int ,int *,char*,...) ;
 int FUNC_5 (int const**,int *,int *,TYPE_1__*,int const*,int const*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (TYPE_2__**,int *,int const*,int *) ;
 int FUNC_9 (TYPE_2__**,TYPE_2__*,char const*,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char const*,char const*,int *) ;
 int FUNC_12 (char const*) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

svn_error_t *
FUNC_15(dag_node_t **VAR_4,
                           dag_node_t *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7,
                           const svn_fs_fs__id_part_t *VAR_8,
                           const svn_fs_fs__id_part_t *VAR_9,
                           svn_boolean_t VAR_10,
                           apr_pool_t *VAR_11)
{
  dag_node_t *VAR_12;
  const svn_fs_id_t *VAR_13;
  svn_fs_t *VAR_14 = FUNC_7(VAR_5);
  apr_pool_t *VAR_15 = FUNC_13(VAR_11);


  if (! FUNC_6(VAR_5))
    return FUNC_4
      (VAR_1, ((void*)0),
       "Attempted to clone child of non-mutable node");


  if (! FUNC_12(VAR_7))
    return FUNC_4
      (VAR_2, ((void*)0),
       "Attempted to make a child clone with an illegal name '%s'", VAR_7);


  FUNC_0(FUNC_9(&VAR_12, VAR_5, VAR_7, VAR_11, VAR_15));
  if (! VAR_12)
    return FUNC_4
      (VAR_0, ((void*)0),
       "Attempted to open non-existent child node '%s'", VAR_7);



  if (FUNC_6(VAR_12))
    {

      VAR_13 = VAR_12->id;
    }
  else
    {
      node_revision_t *VAR_16, *VAR_17;


      FUNC_0(FUNC_2(&VAR_16, VAR_12));

      if (VAR_10)
        {
          FUNC_0(FUNC_2(&VAR_17, VAR_5));
          VAR_16->copyroot_rev = VAR_17->copyroot_rev;
          VAR_16->copyroot_path = FUNC_1(VAR_11,
                                               VAR_17->copyroot_path);
        }

      VAR_16->copyfrom_path = ((void*)0);
      VAR_16->copyfrom_rev = VAR_3;

      VAR_16->predecessor_id = FUNC_10(VAR_12->id, VAR_11);
      VAR_16->predecessor_count++;
      VAR_16->created_path = FUNC_11(VAR_6, VAR_7, VAR_11);

      FUNC_0(FUNC_5(&VAR_13, VAR_14, VAR_12->id,
                                          VAR_16, VAR_8, VAR_9, VAR_11));



      FUNC_0(FUNC_3(VAR_5, VAR_7, VAR_13, VAR_16->kind, VAR_9,
                        VAR_11));
    }


  FUNC_14(VAR_15);
  return FUNC_8(VAR_4, VAR_14, VAR_13, VAR_11);
}
