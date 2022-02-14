
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {int predecessor_count; int created_path; int predecessor_id; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_12__ {int id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,char const*,char const*,int *,int *) ;
 int FUNC_3 (int const**,int *,int const*,TYPE_1__*,char const*,char const*,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__*,char const*,int const*,char const*,int *,int *) ;
 int FUNC_8 (int const*,int *) ;
 int FUNC_9 (char const**,int *,int ,int *,int *) ;
 int FUNC_10 (int *,char const*,int ,char const*,int const*,int ,int *,int *) ;
 int FUNC_11 (TYPE_1__**,int *,int ,int *,int *) ;
 int FUNC_12 (char const**,int *,int *,int *) ;
 int FUNC_13 (int ,char const*,int *) ;

svn_error_t *
FUNC_14(dag_node_t *VAR_1,
                      const char *VAR_2,
                      dag_node_t *VAR_3,
                      svn_boolean_t VAR_4,
                      svn_revnum_t VAR_5,
                      const char *VAR_6,
                      const char *VAR_7,
                      trail_t *VAR_8,
                      apr_pool_t *VAR_9)
{
  const svn_fs_id_t *VAR_10;

  if (VAR_4)
    {
      node_revision_t *VAR_11;
      const char *VAR_12;
      svn_fs_t *VAR_13 = FUNC_5(VAR_3);
      const svn_fs_id_t *VAR_14 = FUNC_6(VAR_3);
      const char *VAR_15 = ((void*)0);


      FUNC_0(FUNC_11(&VAR_11, VAR_13, VAR_3->id,
                                            VAR_8, VAR_9));


      FUNC_0(FUNC_12(&VAR_12, VAR_13, VAR_8, VAR_9));



      VAR_11->predecessor_id = FUNC_8(VAR_14, VAR_9);
      if (VAR_11->predecessor_count != -1)
        VAR_11->predecessor_count++;
      VAR_11->created_path = FUNC_13
        (FUNC_4(VAR_1), VAR_2, VAR_9);
      FUNC_0(FUNC_3(&VAR_10, VAR_13, VAR_14, VAR_11,
                                            VAR_12, VAR_7, VAR_8, VAR_9));


      FUNC_0(FUNC_9(&VAR_15, VAR_13, VAR_5,
                                          VAR_8, VAR_9));




      FUNC_0(FUNC_10
              (VAR_13, VAR_12,
               FUNC_1(VAR_6, VAR_9),
               VAR_15, VAR_10, VAR_0, VAR_8, VAR_9));




      FUNC_0(FUNC_2(VAR_13, VAR_7, VAR_12, VAR_8, VAR_9));
    }
  else
    {
      VAR_10 = FUNC_6(VAR_3);
    }


  return FUNC_7(VAR_1, VAR_2, VAR_10, VAR_7,
                                    VAR_8, VAR_9);
}
