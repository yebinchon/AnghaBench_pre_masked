
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int *,void**,int ,void*,int *) ;
 int * FUNC_1 (int *,int const**,void**,char const*,int ,void*,int *,int ,int *) ;

svn_error_t *FUNC_2(svn_ra_session_t *VAR_0,
                                      const svn_delta_editor_t **VAR_1,
                                      void **VAR_2,
                                      const char *VAR_3,
                                      svn_commit_callback_t VAR_4,
                                      void *VAR_5,
                                      apr_hash_t *VAR_6,
                                      svn_boolean_t VAR_7,
                                      apr_pool_t *VAR_8)
{
  svn_commit_callback2_t VAR_9;
  void *VAR_10;

  FUNC_0(&VAR_9, &VAR_10,
                                  VAR_4, VAR_5,
                                  VAR_8);

  return FUNC_1(VAR_0, VAR_1, VAR_2,
                                   VAR_3, VAR_9,
                                   VAR_10, VAR_6,
                                   VAR_7, VAR_8);
}
