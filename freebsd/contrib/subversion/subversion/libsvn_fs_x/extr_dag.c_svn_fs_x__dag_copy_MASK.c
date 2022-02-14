
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_13__ {int noderev_id; int * copyroot_path; int copyfrom_rev; int copyfrom_path; int created_path; int predecessor_count; int predecessor_id; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {TYPE_11__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int kind; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;
 TYPE_1__* FUNC_2 (TYPE_11__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__*,char const*,int const*,int ,int ,int *) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (int ,char const*,int *) ;

svn_error_t *
FUNC_10(dag_node_t *VAR_0,
                   const char *VAR_1,
                   dag_node_t *VAR_2,
                   svn_boolean_t VAR_3,
                   svn_revnum_t VAR_4,
                   const char *VAR_5,
                   svn_fs_x__txn_id_t VAR_6,
                   apr_pool_t *VAR_7)
{
  const svn_fs_x__id_t *VAR_8;

  if (VAR_3)
    {
      svn_fs_x__noderev_t *VAR_9;
      svn_fs_x__id_t VAR_10;
      svn_fs_t *VAR_11 = FUNC_5(VAR_2);


      VAR_9 = FUNC_2(VAR_2->node_revision, VAR_7);


      FUNC_0(FUNC_8(&VAR_10, VAR_11, VAR_6, VAR_7));



      VAR_9->predecessor_id = VAR_9->noderev_id;
      VAR_9->predecessor_count++;
      VAR_9->created_path =
        FUNC_9(FUNC_4(VAR_0), VAR_1,
                         VAR_7);
      VAR_9->copyfrom_path = FUNC_1(VAR_7, VAR_5);
      VAR_9->copyfrom_rev = VAR_4;


      VAR_9->copyroot_path = ((void*)0);

      FUNC_0(FUNC_3(VAR_11, VAR_9,
                                         &VAR_10, VAR_6, VAR_7));
      VAR_8 = &VAR_9->noderev_id;
    }
  else
    {
      VAR_8 = FUNC_6(VAR_2);
    }


  return FUNC_7(VAR_0, VAR_1, VAR_8,
                                 VAR_2->node_revision->kind,
                                 VAR_6, VAR_7);
}
