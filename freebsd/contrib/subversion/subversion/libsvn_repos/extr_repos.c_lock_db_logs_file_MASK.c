
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const*,int ,int ,int *) ;
 char* FUNC_3 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_repos_t *VAR_1,
                  svn_boolean_t VAR_2,
                  apr_pool_t *VAR_3)
{
  const char * VAR_4 = FUNC_3(VAR_1, VAR_3);



  FUNC_1(FUNC_0(VAR_1, VAR_3));

  return FUNC_2(VAR_4, VAR_2, VAR_0, VAR_3);
}
