
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,char*,char const*,char const*) ;
 char* FUNC_1 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_time_t VAR_0,
                        const char *VAR_1,
                        apr_pool_t *VAR_2)
{
  const char *VAR_3;

  VAR_3 = FUNC_1(VAR_0, VAR_2);
  return FUNC_0(VAR_2, "%s: %s\n", VAR_1, VAR_3);
}
