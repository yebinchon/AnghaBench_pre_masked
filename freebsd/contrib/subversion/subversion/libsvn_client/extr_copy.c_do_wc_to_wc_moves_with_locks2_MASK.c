
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int notify_baton2; int notify_func2; int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_6__ {int src_abspath_or_url; int base_name; } ;
typedef TYPE_2__ svn_client__copy_pair_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int ,int ,char const*,int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_client__copy_pair_t *VAR_1,
                              const char *VAR_2,
                              svn_boolean_t VAR_3,
                              svn_boolean_t VAR_4,
                              svn_boolean_t VAR_5,
                              svn_boolean_t VAR_6,
                              svn_client_ctx_t *VAR_7,
                              apr_pool_t *VAR_8)
{
  const char *VAR_9;

  VAR_9 = FUNC_1(VAR_2, VAR_1->base_name,
                                VAR_8);

  FUNC_0(FUNC_2(VAR_7->wc_ctx, VAR_1->src_abspath_or_url,
                        VAR_9, VAR_6,
                        VAR_5,
                        VAR_7->cancel_func, VAR_7->cancel_baton,
                        VAR_7->notify_func2, VAR_7->notify_baton2,
                        VAR_8));

  return VAR_0;
}
