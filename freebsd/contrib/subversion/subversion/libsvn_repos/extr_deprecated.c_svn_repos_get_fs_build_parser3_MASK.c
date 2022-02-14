
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_repos_parse_fns3_t ;
typedef int svn_repos_parse_fns2_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef enum svn_repos_load_uuid { ____Placeholder_svn_repos_load_uuid } svn_repos_load_uuid ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int const*,int *) ;
 int FUNC_2 (int const**,void**,int *,int ,int ,int ,int ,int,char const*,int ,void*,int *) ;

svn_error_t *
FUNC_3(const svn_repos_parse_fns2_t **VAR_2,
                               void **VAR_3,
                               svn_repos_t *VAR_4,
                               svn_boolean_t VAR_5,
                               svn_boolean_t VAR_6,
                               enum svn_repos_load_uuid VAR_7,
                               const char *VAR_8,
                               svn_repos_notify_func_t VAR_9,
                               void *VAR_10,
                               apr_pool_t *VAR_11)
{
  const svn_repos_parse_fns3_t *VAR_12;

  FUNC_0(FUNC_2(&VAR_12, VAR_3, VAR_4,
                                         VAR_0,
                                         VAR_0,
                                         VAR_5, VAR_6,
                                         VAR_7, VAR_8,
                                         VAR_9, VAR_10, VAR_11));

  *VAR_2 = FUNC_1(VAR_12, VAR_11);
  return VAR_1;
}
