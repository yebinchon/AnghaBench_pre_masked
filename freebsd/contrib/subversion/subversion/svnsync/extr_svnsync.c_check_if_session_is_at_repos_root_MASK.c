
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int * FUNC_3 (int ,int *,int ,char const*,char const*) ;
 int FUNC_4 (int *,char const**,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_session_t *VAR_2,
                                  const char *VAR_3,
                                  apr_pool_t *VAR_4)
{
  const char *VAR_5;

  FUNC_0(FUNC_4(VAR_2, &VAR_5, VAR_4));

  if (FUNC_2(VAR_3, VAR_5) == 0)
    return VAR_1;
  else
    return FUNC_3
      (VAR_0, ((void*)0),
       FUNC_1("Session is rooted at '%s' but the repos root is '%s'"),
       VAR_3, VAR_5);
}
