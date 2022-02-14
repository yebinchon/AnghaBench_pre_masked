
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (int *,int *,char*,char const**,char const**) ;

__attribute__((used)) static svn_error_t *FUNC_6(svn_ra_svn_conn_t *VAR_2, apr_pool_t *VAR_3)
{
  const char *VAR_4, *VAR_5;

  FUNC_0(FUNC_5(VAR_2, VAR_3, "w(?c)", &VAR_4, &VAR_5));
  if (FUNC_2(VAR_4, "failure") == 0 && VAR_5)
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_1("Authentication error from server: %s"), VAR_5);
  else if (FUNC_2(VAR_4, "success") != 0 || VAR_5)
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("Unexpected server response to authentication"));
  return VAR_1;
}
