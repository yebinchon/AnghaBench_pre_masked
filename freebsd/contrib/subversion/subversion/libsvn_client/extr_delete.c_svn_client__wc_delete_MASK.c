
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*,char const*,TYPE_1__*,int *) ;
 int FUNC_3 (char const*,TYPE_1__*,int *) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int,int ,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_7(const char *VAR_3,
                      svn_boolean_t VAR_4,
                      svn_boolean_t VAR_5,
                      svn_boolean_t VAR_6,
                      svn_wc_notify_func2_t VAR_7,
                      void *VAR_8,
                      svn_client_ctx_t *VAR_9,
                      apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11 = VAR_0;

  FUNC_1(FUNC_4(VAR_3));

  FUNC_0(FUNC_3(VAR_3, VAR_9, VAR_10));

  if (!VAR_4 && !VAR_6)

    FUNC_0(FUNC_2(&VAR_11, VAR_3, VAR_9, VAR_10));

  if (!VAR_5)

    return FUNC_5(FUNC_6(VAR_9->wc_ctx, VAR_3,
                                          VAR_6 || VAR_11
                                                                           ,
                                          VAR_2 ,
                                          VAR_9->cancel_func, VAR_9->cancel_baton,
                                          VAR_7, VAR_8, VAR_10));

  return VAR_1;
}
