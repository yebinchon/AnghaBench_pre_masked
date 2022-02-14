
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_log_message_receiver_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int const*,TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int,int ,int ,int ,void*,int *,int *) ;
 int VAR_0 ;

svn_error_t *
FUNC_1(const apr_array_header_t *VAR_1,
                const svn_opt_revision_t *VAR_2,
                const svn_opt_revision_t *VAR_3,
                int VAR_4,
                svn_boolean_t VAR_5,
                svn_boolean_t VAR_6,
                svn_log_message_receiver_t VAR_7,
                void *VAR_8,
                svn_client_ctx_t *VAR_9,
                apr_pool_t *VAR_10)
{
  svn_opt_revision_t VAR_11;
  VAR_11.kind = VAR_0;
  return FUNC_0(VAR_1, &VAR_11, VAR_2, VAR_3, VAR_4,
                         VAR_5, VAR_6,
                         VAR_7, VAR_8, VAR_9, VAR_10);
}
