
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; int notify_baton2; int notify_func2; int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_4 (int ,char const*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_client_conflict_option_t *VAR_1,
                                       svn_client_conflict_t *VAR_2,
                                       svn_client_ctx_t *VAR_3,
                                       apr_pool_t *VAR_4)
{
  const char *VAR_5;
  const char *VAR_6;
  svn_error_t *VAR_7;

  VAR_5 = FUNC_1(VAR_2);

  FUNC_0(FUNC_3(
            &VAR_6, VAR_3->wc_ctx, VAR_5,
            VAR_4, VAR_4));

  VAR_7 = FUNC_4(VAR_3->wc_ctx,
                                               VAR_5,
                                               VAR_3->cancel_func,
                                               VAR_3->cancel_baton,
                                               VAR_3->notify_func2,
                                               VAR_3->notify_baton2,
                                               VAR_4);

  VAR_7 = FUNC_2(VAR_7, FUNC_5(VAR_3->wc_ctx,
                                                                 VAR_6,
                                                                 VAR_4));
  FUNC_0(VAR_7);

  return VAR_0;
}
