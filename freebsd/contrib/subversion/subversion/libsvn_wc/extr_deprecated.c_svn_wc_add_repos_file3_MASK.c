
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int *,char const*,int *,int *,int *,int *,char const*,int ,int ,void*,int *) ;
 int FUNC_6 (int *) ;

svn_error_t *
FUNC_7(const char *VAR_0,
                       svn_wc_adm_access_t *VAR_1,
                       svn_stream_t *VAR_2,
                       svn_stream_t *VAR_3,
                       apr_hash_t *VAR_4,
                       apr_hash_t *VAR_5,
                       const char *VAR_6,
                       svn_revnum_t VAR_7,
                       svn_cancel_func_t VAR_8,
                       void *VAR_9,
                       svn_wc_notify_func2_t VAR_10,
                       void *VAR_11,
                       apr_pool_t *VAR_12)
{
  const char *VAR_13;
  svn_wc_context_t *VAR_14;

  FUNC_0(FUNC_1(&VAR_13, VAR_0, VAR_12));
  FUNC_0(FUNC_4(&VAR_14, ((void*)0) ,
                                         FUNC_3(VAR_1),
                                         VAR_12));

  FUNC_0(FUNC_5(VAR_14,
                                 VAR_13,
                                 VAR_2,
                                 VAR_3,
                                 VAR_4,
                                 VAR_5,
                                 VAR_6,
                                 VAR_7,
                                 VAR_8, VAR_9,
                                 VAR_12));

  return FUNC_2(FUNC_6(VAR_14));
}
