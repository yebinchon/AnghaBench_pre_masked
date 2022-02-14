
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int prop_state; int content_state; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_state_t ;
typedef scalar_t__ svn_wc_merge_outcome_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int **,char const**,int *,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int **,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (scalar_t__*,int *,int ,char const*,char const*,char const*,int *,int *,int *,int *,int *,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int **,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char *VAR_8,
                  const char *VAR_9,
                  apr_hash_t *VAR_10,
                  svn_client_ctx_t *VAR_11,
                  apr_pool_t *VAR_12)
{
  svn_wc_merge_outcome_t VAR_13;
  svn_wc_notify_state_t VAR_14;
  apr_file_t *VAR_15;
  const char *VAR_16;
  apr_array_header_t *VAR_17;
  apr_hash_t *VAR_18;



  FUNC_0(FUNC_2(&VAR_15, &VAR_16, ((void*)0),
                                   VAR_2,
                                   VAR_12, VAR_12));


  FUNC_0(FUNC_6(&VAR_18, VAR_11->wc_ctx, VAR_8,
                            VAR_12, VAR_12));


  FUNC_0(FUNC_3(&VAR_17, VAR_10,
                         VAR_18, VAR_12));


  FUNC_0(FUNC_5(&VAR_13, &VAR_14,
                        VAR_11->wc_ctx, VAR_16,
                        VAR_9, VAR_8,
                        ((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0),
                        VAR_0,
                        ((void*)0), ((void*)0),
                        ((void*)0), VAR_17,
                        ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0),
                        VAR_12));

  if (VAR_11->notify_func2)
    {
      svn_wc_notify_t *VAR_19 = FUNC_4(
                                   VAR_8,
                                   VAR_7,
                                   VAR_12);

      if (VAR_13 == VAR_4)
        VAR_19->content_state = VAR_5;
      else
        VAR_19->content_state = VAR_6;
      VAR_19->prop_state = VAR_14;
      VAR_19->kind = VAR_3;
      VAR_11->notify_func2(VAR_11->notify_baton2, VAR_19, VAR_12);
    }

  return VAR_1;
}
