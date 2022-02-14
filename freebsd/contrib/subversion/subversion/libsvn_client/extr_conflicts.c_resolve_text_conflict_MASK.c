
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc_conflict_choice_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int wc_ctx; int notify_baton2; int notify_func2; int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_7__ {int resolution_text; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int svn_client_conflict_option_id_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_7 (int ,char const*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_8 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_client_conflict_option_t *VAR_1,
                      svn_client_conflict_t *VAR_2,
                      svn_client_ctx_t *VAR_3,
                      apr_pool_t *VAR_4)
{
  svn_client_conflict_option_id_t VAR_5;
  const char *VAR_6;
  const char *VAR_7;
  svn_wc_conflict_choice_t VAR_8;
  svn_error_t *VAR_9;

  VAR_5 = FUNC_3(VAR_1);
  VAR_8 = FUNC_1(VAR_5);
  VAR_6 = FUNC_2(VAR_2);

  FUNC_0(FUNC_6(&VAR_7, VAR_3->wc_ctx,
                                                 VAR_6,
                                                 VAR_4, VAR_4));
  VAR_9 = FUNC_7(VAR_3->wc_ctx,
                                            VAR_6,
                                            VAR_8,
                                            VAR_3->cancel_func,
                                            VAR_3->cancel_baton,
                                            VAR_3->notify_func2,
                                            VAR_3->notify_baton2,
                                            VAR_4);
  VAR_9 = FUNC_4(VAR_9, FUNC_8(VAR_3->wc_ctx,
                                                                 VAR_7,
                                                                 VAR_4));
  FUNC_5(VAR_6, VAR_4);
  FUNC_0(VAR_9);

  VAR_2->resolution_text = VAR_5;

  return VAR_0;
}
