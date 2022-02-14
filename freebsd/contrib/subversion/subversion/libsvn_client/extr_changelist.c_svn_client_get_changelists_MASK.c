
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_3__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_changelist_receiver_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int FUNC_2 (int ,char const*,int ,int const*,int ,void*,int ,int ,int *) ;

svn_error_t *
FUNC_3(const char *VAR_1,
                           const apr_array_header_t *VAR_2,
                           svn_depth_t VAR_3,
                           svn_changelist_receiver_t VAR_4,
                           void *VAR_5,
                           svn_client_ctx_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  const char *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_1, VAR_7));

  FUNC_0(FUNC_2(VAR_6->wc_ctx, VAR_8, VAR_3, VAR_2,
                                 VAR_4, VAR_5,
                                 VAR_6->cancel_func, VAR_6->cancel_baton, VAR_7));
  return VAR_0;
}
