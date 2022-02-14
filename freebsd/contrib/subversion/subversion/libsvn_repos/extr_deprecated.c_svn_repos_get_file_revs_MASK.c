
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_file_rev_handler_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_file_rev_handler_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void**,int ,void*,int *) ;
 int * FUNC_1 (int *,char const*,int ,int ,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_repos_t *VAR_1,
                        const char *VAR_2,
                        svn_revnum_t VAR_3,
                        svn_revnum_t VAR_4,
                        svn_repos_authz_func_t VAR_5,
                        void *VAR_6,
                        svn_repos_file_rev_handler_t VAR_7,
                        void *VAR_8,
                        apr_pool_t *VAR_9)
{
  svn_file_rev_handler_t VAR_10;
  void *VAR_11;

  FUNC_0(&VAR_10, &VAR_11, VAR_7,
                                   VAR_8, VAR_9);

  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0,
                                  VAR_5, VAR_6,
                                  VAR_10, VAR_11, VAR_9);
}
