
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (scalar_t__*,int *) ;
 int * FUNC_3 (char const**,char const*,int *) ;

svn_error_t *
FUNC_4(const char **VAR_1,
                           const char *VAR_2,
                           apr_pool_t *VAR_3)
{

  svn_boolean_t VAR_4;
  FUNC_0(FUNC_2(&VAR_4, VAR_3));
  if (VAR_4)

    {
      *VAR_1 = FUNC_1(VAR_3, VAR_2);
      return VAR_0;
    }

  else
    return FUNC_3(VAR_1, VAR_2, VAR_3);

}
