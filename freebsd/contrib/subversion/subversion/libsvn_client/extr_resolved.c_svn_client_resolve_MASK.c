
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_conflict_choice_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_3__ {int wc_ctx; int notify_baton2; int notify_func2; int cancel_baton; int cancel_func; int conflict_baton2; int conflict_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char const**,int ,char const*,int *,int *) ;
 int FUNC_9 (int ,char const*,int *) ;
 int * FUNC_10 (int ,char const*,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;

svn_error_t *
FUNC_11(const char *VAR_2,
                   svn_depth_t VAR_3,
                   svn_wc_conflict_choice_t VAR_4,
                   svn_client_ctx_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  const char *VAR_7;
  svn_error_t *VAR_8;
  const char *VAR_9;

  if (FUNC_7(VAR_2))
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_1("'%s' is not a local path"), VAR_2);

  FUNC_0(FUNC_2(&VAR_7, VAR_2, VAR_6));




  FUNC_0(FUNC_8(&VAR_9, VAR_5->wc_ctx,
                                                 VAR_7, VAR_6, VAR_6));
  VAR_8 = FUNC_10(VAR_5->wc_ctx, VAR_7,
                                  VAR_3,
                                  VAR_1 ,
                                  "" ,
                                  VAR_1 ,
                                  VAR_4,
                                  VAR_5->conflict_func2,
                                  VAR_5->conflict_baton2,
                                  VAR_5->cancel_func, VAR_5->cancel_baton,
                                  VAR_5->notify_func2, VAR_5->notify_baton2,
                                  VAR_6);

  VAR_8 = FUNC_3(VAR_8, FUNC_9(VAR_5->wc_ctx,
                                                                 VAR_9,
                                                                 VAR_6));
  FUNC_6(VAR_2, VAR_6);

  return FUNC_5(VAR_8);
}
