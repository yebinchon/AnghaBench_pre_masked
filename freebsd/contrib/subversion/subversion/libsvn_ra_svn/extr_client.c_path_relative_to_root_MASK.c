
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const**,int *) ;
 int * FUNC_3 (int ,int *,int ,char const*,char const*) ;
 char* FUNC_4 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_5(svn_ra_session_t *VAR_2,
                                          const char **VAR_3,
                                          const char *VAR_4,
                                          apr_pool_t *VAR_5)
{
  const char *VAR_6;

  FUNC_0(FUNC_2(VAR_2, &VAR_6, VAR_5));
  *VAR_3 = FUNC_4(VAR_6, VAR_4, VAR_5);
  if (! *VAR_3)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_1("'%s' isn't a child of repository root "
                               "URL '%s'"),
                             VAR_4, VAR_6);
  return VAR_1;
}
