
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char const* VAR_2 ;

 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;

svn_error_t *
FUNC_4(const char *VAR_3, apr_pool_t *VAR_4)
{
  static const char *VAR_5[] = {
    128,
    "_svn",
    ((void*)0)
  };

  const char **VAR_6;
  for (VAR_6 = VAR_5; *VAR_6; ++VAR_6)
    if (0 == FUNC_1(VAR_3, *VAR_6))
      {


        VAR_2 = *VAR_6;
        return VAR_1;
      }
  return FUNC_3(VAR_0, ((void*)0),
                           FUNC_0("'%s' is not a valid administrative "
                             "directory name"),
                           FUNC_2(VAR_3, VAR_4));
}
