
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int predecessor_count; int predecessor_id; } ;
typedef TYPE_1__ node_revision_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const**,int *,int const*,TYPE_1__*,char const*,char const*,int *,int *) ;
 int * FUNC_2 (int **,int *,int const*,int *,int *) ;
 int FUNC_3 (int const**,int const**,int *,char const*,int *,int *) ;
 int FUNC_4 (int const*,int *) ;
 char* FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*,int const*) ;
 int FUNC_7 (int *,char const*,int const*,int *,int *) ;
 int FUNC_8 (TYPE_1__**,int *,int const*,int *,int *) ;

svn_error_t *
FUNC_9(dag_node_t **VAR_0,
                            svn_fs_t *VAR_1,
                            const char *VAR_2,
                            trail_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  const svn_fs_id_t *VAR_5, *VAR_6;
  node_revision_t *VAR_7;



  FUNC_0(FUNC_3(&VAR_6, &VAR_5, VAR_1, VAR_2,
                                   VAR_3, VAR_4));




  if (FUNC_6(VAR_6, VAR_5))
    {
      const char *VAR_8 = FUNC_5(VAR_5);




      FUNC_0(FUNC_8(&VAR_7, VAR_1, VAR_5,
                                            VAR_3, VAR_4));






      VAR_7->predecessor_id = FUNC_4(VAR_5, VAR_4);
      if (VAR_7->predecessor_count != -1)
        VAR_7->predecessor_count++;
      FUNC_0(FUNC_1(&VAR_6, VAR_1, VAR_5,
                                            VAR_7, VAR_8,
                                            VAR_2, VAR_3, VAR_4));





      FUNC_0(FUNC_7(VAR_1, VAR_2, VAR_6, VAR_3, VAR_4));
    }







  return FUNC_2(VAR_0, VAR_1, VAR_6, VAR_3, VAR_4);
}
