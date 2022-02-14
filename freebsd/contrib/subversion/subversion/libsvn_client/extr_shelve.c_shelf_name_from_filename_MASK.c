
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (char**,char*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(char **VAR_1,
                         const char *VAR_2,
                         apr_pool_t *VAR_3)
{
  size_t VAR_4 = FUNC_4(VAR_2);

  if (VAR_4 > 6 && FUNC_3(VAR_2 + VAR_4 - 6, ".patch") == 0)
    {
      char *VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4 - 6);
      FUNC_0(FUNC_2(VAR_1, VAR_5, VAR_3));
    }
  return VAR_0;
}
