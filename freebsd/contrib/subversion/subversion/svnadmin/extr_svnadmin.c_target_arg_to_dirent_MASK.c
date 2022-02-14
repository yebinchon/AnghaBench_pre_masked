
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int *) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_2,
                     const char *VAR_3,
                     apr_pool_t *VAR_4)
{
  if (FUNC_3(VAR_3))
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("Path '%s' is not a local path"), VAR_3);
  *VAR_2 = FUNC_1(VAR_3, VAR_4);
  return VAR_1;
}
