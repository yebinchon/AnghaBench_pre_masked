
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int const**,void**,int *,int ,void*,int *,int ,int *) ;
 int FUNC_3 (char const*,int *) ;

svn_error_t *FUNC_4(svn_ra_session_t *VAR_1,
                                       const svn_delta_editor_t **VAR_2,
                                       void **VAR_3,
                                       const char *VAR_4,
                                       svn_commit_callback2_t VAR_5,
                                       void *VAR_6,
                                       apr_hash_t *VAR_7,
                                       svn_boolean_t VAR_8,
                                       apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10 = FUNC_0(VAR_9);
  if (VAR_4)
    FUNC_1(VAR_10, VAR_0,
                  FUNC_3(VAR_4, VAR_9));
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_10,
                                   VAR_5, VAR_6,
                                   VAR_7, VAR_8, VAR_9);
}
