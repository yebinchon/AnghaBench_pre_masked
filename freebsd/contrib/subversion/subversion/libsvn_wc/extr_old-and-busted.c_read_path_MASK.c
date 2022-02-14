
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,char**,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
          char **VAR_3, const char *VAR_4,
          apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5));
  if (*VAR_2 && **VAR_2 && !FUNC_4(*VAR_2))
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("Entry contains non-canonical path '%s'"),
                             *VAR_2);
  return VAR_1;
}
