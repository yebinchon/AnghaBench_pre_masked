
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e_map; } ;
typedef TYPE_1__ svn_element__tree_t ;
typedef int svn_branch__state_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int const*,TYPE_1__**,int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (TYPE_1__*,int,int *) ;
 int FUNC_6 (int ) ;

int
FUNC_7(const svn_branch__state_t *VAR_0,
                            const char *VAR_1,
                            apr_pool_t *VAR_2)
{
  svn_element__tree_t *VAR_3;
  apr_hash_index_t *VAR_4;




  FUNC_6(FUNC_3(VAR_0, &VAR_3, VAR_2));
  for (VAR_4 = FUNC_0(VAR_2, VAR_3->e_map);
       VAR_4; VAR_4 = FUNC_1(VAR_4))
    {
      int VAR_5 = FUNC_4(VAR_4);
      const char *VAR_6 = FUNC_5(VAR_3, VAR_5,
                                                                VAR_2);

      if (! VAR_6)
        {

          continue;
        }
      if (FUNC_2(VAR_1, VAR_6) == 0)
        {
          return VAR_5;
        }
    }

  return -1;
}
