
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_proplist_receiver_t ;
typedef int svn_proplist_receiver2_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int const*,int const*,int ,int const*,int ,int ,void*,int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,void**,int ,void*,int *) ;

svn_error_t *
FUNC_3(const char *VAR_1,
                     const svn_opt_revision_t *VAR_2,
                     const svn_opt_revision_t *VAR_3,
                     svn_depth_t VAR_4,
                     const apr_array_header_t *VAR_5,
                     svn_proplist_receiver_t VAR_6,
                     void *VAR_7,
                     svn_client_ctx_t *VAR_8,
                     apr_pool_t *VAR_9)
{

  svn_proplist_receiver2_t VAR_10;
  void *VAR_11;

  FUNC_2(&VAR_10, &VAR_11, VAR_6, VAR_7,
                         VAR_9);

  return FUNC_1(FUNC_0(VAR_1, VAR_2, VAR_3,
                                              VAR_4, VAR_5, VAR_0,
                                              VAR_10, VAR_11,
                                              VAR_8, VAR_9));
}
