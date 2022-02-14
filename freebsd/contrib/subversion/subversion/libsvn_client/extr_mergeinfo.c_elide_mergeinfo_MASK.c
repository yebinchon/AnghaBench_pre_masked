
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int prop_state; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*,int ,int ,int *,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (char const*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char const*,int ,int *,int ,int ,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_mergeinfo_t VAR_7,
                svn_mergeinfo_t VAR_8,
                const char *VAR_9,
                svn_client_ctx_t *VAR_10,
                apr_pool_t *VAR_11)
{
  svn_boolean_t VAR_12;

  FUNC_1(FUNC_5(VAR_9));

  FUNC_0(FUNC_2(&VAR_12,
                                 VAR_7, VAR_8, ((void*)0),
                                 VAR_11));

  if (VAR_12)
    {
      FUNC_0(FUNC_7(VAR_10->wc_ctx, VAR_9, VAR_1,
                               ((void*)0), VAR_3, VAR_2, ((void*)0),
                               ((void*)0), ((void*)0) ,
                               ((void*)0), ((void*)0) ,
                               VAR_11));

      if (VAR_10->notify_func2)
        {
          svn_wc_notify_t *VAR_13;

          VAR_13 = FUNC_6(VAR_9,
                                        VAR_4,
                                        VAR_11);
          VAR_10->notify_func2(VAR_10->notify_baton2, VAR_13, VAR_11);

          VAR_13 = FUNC_6(VAR_9,
                                        VAR_6,
                                        VAR_11);
          VAR_13->prop_state = VAR_5;

          VAR_10->notify_func2(VAR_10->notify_baton2, VAR_13, VAR_11);
        }
    }

  return VAR_0;
}
