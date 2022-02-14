
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int cancel_baton; int cancel_func; int wc_ctx; int config; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct can_delete_baton_t {char const* root_abspath; int target_missing; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int ,int *) ;
 int FUNC_2 (int ,char const*,int ,int ,int ,int ,int *,int ,struct can_delete_baton_t*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_4,
                const char *VAR_5,
                svn_client_ctx_t *VAR_6,
                apr_pool_t *VAR_7)
{
  apr_array_header_t *VAR_8;
  struct can_delete_baton_t VAR_9;







  FUNC_0(FUNC_1(&VAR_8, VAR_6->config, VAR_7));

  VAR_9.root_abspath = VAR_5;
  VAR_9.target_missing = VAR_0;

  FUNC_0(FUNC_2(VAR_6->wc_ctx,
                             VAR_5,
                             VAR_3,
                             VAR_0 ,
                             VAR_0 ,
                             VAR_0 ,
                             VAR_8,
                             VAR_2, &VAR_9,
                             VAR_6->cancel_func,
                             VAR_6->cancel_baton,
                             VAR_7));

  if (VAR_4)
    *VAR_4 = VAR_9.target_missing;

  return VAR_1;
}
