
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_3,
                     const char *VAR_4,
                     const char *VAR_5,
                     apr_pool_t *VAR_6)
{
  if (VAR_4)
    {
      svn_error_t *VAR_7 = FUNC_1(VAR_4, VAR_0,
                                             VAR_6);
      if (VAR_7)
        FUNC_0(VAR_7);
      else
        *VAR_3 = VAR_2;
    }

  return VAR_1;
}
