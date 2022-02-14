
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*,size_t) ;
 int * FUNC_2 (int ,int ,int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char **VAR_2, const char *VAR_3, apr_pool_t *VAR_4)
{
  apr_size_t VAR_5;

  for (VAR_5 = 0; VAR_3[VAR_5] && VAR_3[VAR_5] != ':'; ++VAR_5)
    if (VAR_3[VAR_5] == '/')
      goto error;

  if (VAR_5 > 0 && VAR_3[VAR_5] == ':' && VAR_3[VAR_5+1] == '/' && VAR_3[VAR_5+2] == '/')
    {
      *VAR_2 = FUNC_1(VAR_4, VAR_3, VAR_5);
      return VAR_1;
    }

error:
  return FUNC_2(VAR_0, 0,
                           FUNC_0("URL '%s' does not begin with a scheme"),
                           VAR_3);
}
