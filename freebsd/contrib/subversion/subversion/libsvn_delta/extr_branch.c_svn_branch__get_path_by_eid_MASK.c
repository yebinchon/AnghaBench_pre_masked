
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_element__tree_t ;
typedef int svn_branch__state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int **,int *) ;
 char const* FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int ) ;

const char *
FUNC_5(const svn_branch__state_t *VAR_0,
                            int VAR_1,
                            apr_pool_t *VAR_2)
{
  svn_element__tree_t *VAR_3;

  FUNC_1(FUNC_0(VAR_0, VAR_1));


  FUNC_4(FUNC_2(VAR_0, &VAR_3, VAR_2));
  return FUNC_3(VAR_3, VAR_1, VAR_2);
}
