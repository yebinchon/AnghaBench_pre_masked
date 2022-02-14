
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int e_map; } ;
typedef TYPE_1__ svn_element__tree_t ;
typedef int svn_element__content_t ;
typedef int svn_branch__state_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_branch__state_t *VAR_1,
                            const svn_element__tree_t *VAR_2,
                            apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;

  for (VAR_4 = FUNC_1(VAR_3, VAR_2->e_map);
       VAR_4; VAR_4 = FUNC_2(VAR_4))
    {
      int VAR_5 = FUNC_5(VAR_4);
      svn_element__content_t *VAR_6 = FUNC_3(VAR_4);

      FUNC_0(FUNC_4(VAR_1, VAR_5,
                                            VAR_6, VAR_3));
    }

  return VAR_0;
}
