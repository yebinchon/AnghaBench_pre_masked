
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_log_entry_receiver_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int ,char const*,TYPE_1__ const*,char const*,TYPE_1__ const*,TYPE_1__*,TYPE_1__*,int ,void*,int ,int ,int const*,int *,int *) ;
 void* VAR_0 ;

svn_error_t *
FUNC_1(svn_boolean_t VAR_1,
                         const char *VAR_2,
                         const svn_opt_revision_t *VAR_3,
                         const char *VAR_4,
                         const svn_opt_revision_t *VAR_5,
                         svn_log_entry_receiver_t VAR_6,
                         void *VAR_7,
                         svn_boolean_t VAR_8,
                         svn_depth_t VAR_9,
                         const apr_array_header_t *VAR_10,
                         svn_client_ctx_t *VAR_11,
                         apr_pool_t *VAR_12)
{
  svn_opt_revision_t VAR_13, VAR_14;

  VAR_13.kind = VAR_0;
  VAR_14.kind = VAR_0;

  return FUNC_0(VAR_1,
                                   VAR_2, VAR_3,
                                   VAR_4, VAR_5,
                                   &VAR_13, &VAR_14,
                                   VAR_6, VAR_7,
                                   VAR_8, VAR_9, VAR_10,
                                   VAR_11, VAR_12);
}
