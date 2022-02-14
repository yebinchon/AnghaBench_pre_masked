
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char*,char const*,int ,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (char const**,char const*,int *) ;
 int FUNC_8 (char const**,char const*,int *) ;

svn_error_t *
FUNC_9(const char **VAR_2, const char *VAR_3,
                               apr_pool_t *VAR_4)
{
  const char *VAR_5;
  char *VAR_6;
  apr_status_t VAR_7;


  FUNC_1(FUNC_7(&VAR_5, VAR_3, VAR_4));
  VAR_7 = FUNC_3(&VAR_6, "", VAR_5,
                               VAR_0, VAR_4);

  if (!VAR_7)

    VAR_5 = VAR_6;
  else if (FUNC_0(VAR_7))



    ;
  else
    return FUNC_6(VAR_7, ((void*)0),
                             FUNC_2("Error resolving case of '%s'"),
                             FUNC_5(VAR_3, VAR_4));


  FUNC_1(FUNC_8(VAR_2, VAR_5, VAR_4));
  *VAR_2 = FUNC_4(*VAR_2, VAR_4);

  return VAR_1;
}
