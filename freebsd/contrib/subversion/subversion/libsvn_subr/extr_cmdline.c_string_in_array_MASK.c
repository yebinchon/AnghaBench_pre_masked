
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
 char* FUNC_1 (char const*,char const**,size_t,int *) ;
 int FUNC_2 (char const*,char const*) ;
 int * FUNC_3 (int ,int *,int ,char const*,...) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_2,
                const char **VAR_3,
                apr_size_t VAR_4,
                apr_pool_t *VAR_5)
{
  const char *VAR_6;
  apr_size_t VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
      if (!FUNC_2(VAR_2, VAR_3[VAR_7]))
        return VAR_1;
    }


  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_6)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_0("Ignoring unknown value '%s'; "
                               "did you mean '%s'?"),
                             VAR_2, VAR_6);
  else
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_0("Ignoring unknown value '%s'"),
                             VAR_2);
}
