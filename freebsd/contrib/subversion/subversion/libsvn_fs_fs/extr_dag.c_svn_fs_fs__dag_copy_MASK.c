
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {int * copyroot_path; int copyfrom_rev; int copyfrom_path; int created_path; int predecessor_count; int predecessor_id; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_15__ {int kind; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__**,TYPE_2__*) ;
 int FUNC_4 (int const**,int *,int const*,TYPE_1__*,int *,int const*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (TYPE_2__*,char const*,int const*,int ,int const*,int *) ;
 int FUNC_9 (int const*,int *) ;
 int FUNC_10 (int *,int *,int const*,int *) ;
 int FUNC_11 (int ,char const*,int *) ;

svn_error_t *
FUNC_12(dag_node_t *VAR_0,
                    const char *VAR_1,
                    dag_node_t *VAR_2,
                    svn_boolean_t VAR_3,
                    svn_revnum_t VAR_4,
                    const char *VAR_5,
                    const svn_fs_fs__id_part_t *VAR_6,
                    apr_pool_t *VAR_7)
{
  const svn_fs_id_t *VAR_8;

  if (VAR_3)
    {
      node_revision_t *VAR_9, *VAR_10;
      svn_fs_fs__id_part_t VAR_11;
      const svn_fs_id_t *VAR_12 = FUNC_7(VAR_2);
      svn_fs_t *VAR_13 = FUNC_6(VAR_2);


      FUNC_0(FUNC_3(&VAR_9, VAR_2));
      VAR_10 = FUNC_2(VAR_9, VAR_7);


      FUNC_0(FUNC_10(&VAR_11, VAR_13, VAR_6, VAR_7));



      VAR_10->predecessor_id = FUNC_9(VAR_12, VAR_7);
      VAR_10->predecessor_count++;
      VAR_10->created_path =
        FUNC_11(FUNC_5(VAR_0), VAR_1,
                     VAR_7);
      VAR_10->copyfrom_path = FUNC_1(VAR_7, VAR_5);
      VAR_10->copyfrom_rev = VAR_4;


      VAR_10->copyroot_path = ((void*)0);

      FUNC_0(FUNC_4(&VAR_8, VAR_13, VAR_12, VAR_10,
                                          &VAR_11, VAR_6, VAR_7));

    }
  else
    {
      VAR_8 = FUNC_7(VAR_2);
    }


  return FUNC_8(VAR_0, VAR_1, VAR_8, VAR_2->kind,
                                  VAR_6, VAR_7);
}
