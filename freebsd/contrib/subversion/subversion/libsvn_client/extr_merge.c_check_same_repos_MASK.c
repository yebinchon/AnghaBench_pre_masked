
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,int const*,int ) ;
 int * FUNC_2 (int ,int *,int ,char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_client__pathrev_t *VAR_2,
                 const char *VAR_3,
                 const svn_client__pathrev_t *VAR_4,
                 const char *VAR_5,
                 svn_boolean_t VAR_6,
                 apr_pool_t *VAR_7)
{
  if (! FUNC_1(VAR_2, VAR_4, VAR_6))
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("'%s' must be from the same repository as "
                               "'%s'"), VAR_3, VAR_5);
  return VAR_1;
}
