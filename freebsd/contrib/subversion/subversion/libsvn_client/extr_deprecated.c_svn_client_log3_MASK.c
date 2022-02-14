
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_log_message_receiver_t ;
typedef int svn_log_entry_receiver_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int const*,int const*,int const*,int,int ,int ,int ,int ,int ,void*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void**,int ,void*,int *) ;

svn_error_t *
FUNC_3(const apr_array_header_t *VAR_1,
                const svn_opt_revision_t *VAR_2,
                const svn_opt_revision_t *VAR_3,
                const svn_opt_revision_t *VAR_4,
                int VAR_5,
                svn_boolean_t VAR_6,
                svn_boolean_t VAR_7,
                svn_log_message_receiver_t VAR_8,
                void *VAR_9,
                svn_client_ctx_t *VAR_10,
                apr_pool_t *VAR_11)
{
  svn_log_entry_receiver_t VAR_12;
  void *VAR_13;

  FUNC_2(&VAR_12, &VAR_13,
                               VAR_8, VAR_9,
                               VAR_11);

  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                         VAR_6, VAR_7, VAR_0,
                         FUNC_1(VAR_11),
                         VAR_12, VAR_13, VAR_10, VAR_11);
}
