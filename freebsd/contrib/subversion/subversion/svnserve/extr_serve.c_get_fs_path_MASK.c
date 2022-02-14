
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int * FUNC_2 (int ,int *,char*,char const*,char const*) ;

__attribute__((used)) static svn_error_t *FUNC_3(const char *VAR_2, const char *VAR_3,
                                const char **VAR_4)
{
  apr_size_t VAR_5;

  VAR_5 = FUNC_0(VAR_2);
  if (FUNC_1(VAR_3, VAR_2, VAR_5) != 0)
    return FUNC_2(VAR_0, ((void*)0),
                             "'%s' is not the same repository as '%s'",
                             VAR_3, VAR_2);
  *VAR_4 = VAR_3 + VAR_5;
  if (! **VAR_4)
    *VAR_4 = "/";

  return VAR_1;
}
