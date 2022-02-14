
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_branch__state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int **,int*,int const*,int *) ;
 char* FUNC_2 (int *,int,int *) ;

const char *
FUNC_3(const svn_branch__state_t *VAR_0,
                            apr_pool_t *VAR_1)
{
  svn_branch__state_t *VAR_2;
  int VAR_3;
  const char *VAR_4;

  FUNC_1(&VAR_2, &VAR_3, VAR_0,
                                       VAR_1);
  if (VAR_2)
    {
      VAR_4
        = FUNC_2(VAR_2, VAR_3, VAR_1);
    }
  else
    {
      VAR_4 = "";
    }

  FUNC_0(VAR_4);
  return VAR_4;
}
