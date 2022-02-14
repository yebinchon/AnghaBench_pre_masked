
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,char const**,char const*,char const*,int *) ;
 int * FUNC_1 (int *,char const*,int ,int ,int) ;

svn_error_t *
FUNC_2(svn_config_t *VAR_3,
                     apr_int64_t *VAR_4,
                     const char *VAR_5,
                     const char *VAR_6,
                     apr_int64_t VAR_7)
{
  const char *VAR_8;
  FUNC_0(VAR_3, &VAR_8, VAR_5, VAR_6, ((void*)0));
  if (VAR_8)
    return FUNC_1(VAR_4, VAR_8,
                                VAR_1, VAR_0, 10);

  *VAR_4 = VAR_7;
  return VAR_2;
}
