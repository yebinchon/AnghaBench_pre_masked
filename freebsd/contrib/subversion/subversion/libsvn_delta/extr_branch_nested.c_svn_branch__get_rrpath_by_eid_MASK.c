
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_branch__state_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int const*,int,int *) ;
 int FUNC_1 (int const*,int *) ;
 char* FUNC_2 (int ,char const*,int *) ;

const char *
FUNC_3(const svn_branch__state_t *VAR_0,
                              int VAR_1,
                              apr_pool_t *VAR_2)
{
  const char *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  const char *VAR_4 = ((void*)0);

  if (VAR_3)
    {
      VAR_4 = FUNC_2(FUNC_1(VAR_0, VAR_2),
                                VAR_3, VAR_2);
    }
  return VAR_4;
}
