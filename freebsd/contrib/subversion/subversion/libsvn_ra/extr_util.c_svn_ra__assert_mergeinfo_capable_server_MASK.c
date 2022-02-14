
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int *,int *) ;
 char const* FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int *,int *,int ,int *) ;

svn_error_t *
FUNC_7(svn_ra_session_t *VAR_3,
                                        const char *VAR_4,
                                        apr_pool_t *VAR_5)
{
  svn_boolean_t VAR_6;
  FUNC_0(FUNC_6(VAR_3, &VAR_6,
                                VAR_2, VAR_5));
  if (! VAR_6)
    {
      VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_5);
      return FUNC_4(VAR_0, ((void*)0),
                               FUNC_1("Retrieval of mergeinfo unsupported by '%s'"),
                               FUNC_5(VAR_4)
                                  ? VAR_4
                                  : FUNC_3(VAR_4, VAR_5));
    }
  return VAR_1;
}
