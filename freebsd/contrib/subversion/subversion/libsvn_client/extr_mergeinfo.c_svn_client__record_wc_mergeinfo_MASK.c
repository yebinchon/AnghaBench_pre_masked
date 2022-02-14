
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int prop_state; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (scalar_t__*,int ,char const*,int *) ;
 int VAR_4 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int **,int ,int *) ;
 TYPE_1__* FUNC_6 (char const*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,char const*,int ,int *,int ,int ,int *,int *,int *,int *,int *,int *) ;

svn_error_t *
FUNC_8(const char *VAR_8,
                                svn_mergeinfo_t VAR_9,
                                svn_boolean_t VAR_10,
                                svn_client_ctx_t *VAR_11,
                                apr_pool_t *VAR_12)
{
  svn_string_t *VAR_13 = ((void*)0);
  svn_boolean_t VAR_14 = VAR_0;

  FUNC_1(FUNC_4(VAR_8));


  if (VAR_9)
    FUNC_0(FUNC_5(&VAR_13, VAR_9, VAR_12));

  if (VAR_10 && VAR_11->notify_func2)
    FUNC_0(FUNC_3(&VAR_14, VAR_11->wc_ctx,
                                         VAR_8, VAR_12));




  FUNC_0(FUNC_7(VAR_11->wc_ctx, VAR_8, VAR_2,
                           VAR_13, VAR_4,
                           VAR_3 , ((void*)0),
                           ((void*)0), ((void*)0) ,
                           ((void*)0), ((void*)0) ,
                           VAR_12));

  if (VAR_10 && VAR_11->notify_func2)
    {
      svn_wc_notify_t *VAR_15 =
        FUNC_6(VAR_8,
                             VAR_5,
                             VAR_12);
      if (VAR_14)
        VAR_15->prop_state = VAR_7;
      else
        VAR_15->prop_state = VAR_6;

      VAR_11->notify_func2(VAR_11->notify_baton2, VAR_15, VAR_12);
    }

  return VAR_1;
}
