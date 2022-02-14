
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int bdb_env_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_3, svn_boolean_t VAR_4, apr_pool_t *VAR_5)
{
  bdb_env_baton_t *VAR_6;
  FUNC_0(FUNC_2(&VAR_6, VAR_3,
                           ((VAR_4 ? VAR_1 : VAR_0)
                            | VAR_2),
                           0666, VAR_5));
  return FUNC_1(VAR_6);
}
