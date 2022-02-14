
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int kind; int prop_state; int content_state; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_state_t ;
typedef scalar_t__ svn_wc_merge_outcome_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; int cancel_baton; int cancel_func; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_13__ {int resolution_tree; } ;
typedef TYPE_3__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,TYPE_1__*,int *) ;
 char* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_11 (int *,char const**,int *,int ,int *,int *) ;
 int * FUNC_12 (char const*,int ,int *) ;
 int FUNC_13 (char const*,int *) ;
 int VAR_7 ;
 int * FUNC_14 (int **,int *,int ,int *) ;
 int * FUNC_15 (int *,int *,int ,int ,int *) ;
 int * FUNC_16 (int **,char const**,char const*,int ,int *,int *) ;
 int * FUNC_17 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_18 (char const**,int ,char const*,int *,int *) ;
 int FUNC_19 (int ,char const*,int *) ;
 int * FUNC_20 (int **,int ,char const*,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_21 (char const*,int ,int *) ;
 int * FUNC_22 (scalar_t__*,int *,int ,char const*,char const*,char const*,int *,int *,int *,int *,int *,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_23 (int **,int ,char const*,int *,int *) ;
 int * FUNC_24 (int ,char const*,int ,int ,int *,int ,int ,int *,int *,int (*) (int ,TYPE_1__*,int *),int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_25(
  svn_client_conflict_option_t *VAR_13,
  svn_client_conflict_t *VAR_14,
  svn_client_ctx_t *VAR_15,
  apr_pool_t *VAR_16)
{
  const char *VAR_17;
  const char *VAR_18;
  const char *VAR_19;
  svn_wc_merge_outcome_t VAR_20;
  svn_wc_notify_state_t VAR_21;
  const char *VAR_22;
  const char *VAR_23;
  svn_stream_t *VAR_24;
  svn_stream_t *VAR_25;
  apr_hash_t *VAR_26;
  apr_array_header_t *VAR_27;
  svn_error_t *VAR_28;

  VAR_18 = FUNC_6(VAR_14);


  FUNC_0(FUNC_18(&VAR_17, VAR_15->wc_ctx, VAR_18,
                             VAR_16, VAR_16));
  FUNC_0(FUNC_16(&VAR_25,
                                 &VAR_23, VAR_17,

                                 VAR_5,
                                 VAR_16, VAR_16));


  FUNC_0(FUNC_20(&VAR_24, VAR_15->wc_ctx,
                                    VAR_18, VAR_18,
                                    VAR_2,
                                    VAR_16, VAR_16));
  FUNC_0(FUNC_15(VAR_24, VAR_25,
                           VAR_15->cancel_func, VAR_15->cancel_baton,
                           VAR_16));


  FUNC_0(FUNC_23(&VAR_26, VAR_15->wc_ctx, VAR_18,
                            VAR_16, VAR_16));
  FUNC_3(VAR_26, VAR_16);



  FUNC_0(FUNC_11(((void*)0), &VAR_22, ((void*)0),
                                   VAR_6,
                                   VAR_16, VAR_16));


  FUNC_0(FUNC_14(&VAR_27, VAR_26,
                         FUNC_2(VAR_16), VAR_16));


  FUNC_0(FUNC_17(&VAR_19, VAR_15->wc_ctx,
                                                 VAR_18,
                                                 VAR_16, VAR_16));




  VAR_28 = FUNC_24(VAR_15->wc_ctx, VAR_18, VAR_4,
                       VAR_0, ((void*)0), VAR_3, VAR_0,
                       ((void*)0), ((void*)0),
                       VAR_15->notify_func2, VAR_15->notify_baton2,
                       VAR_16);
  if (VAR_28)
    goto unlock_wc;


  VAR_28 = FUNC_22(&VAR_20, &VAR_21,
                      VAR_15->wc_ctx, VAR_22,
                      VAR_23, VAR_18,
                      ((void*)0), ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_0,
                      ((void*)0), ((void*)0),
                      ((void*)0), VAR_27,
                      ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_16);

unlock_wc:
  if (VAR_28)
      VAR_28 = FUNC_10(
              VAR_28, FUNC_1("If needed, a backup copy of '%s' can be found at '%s'"),
              FUNC_8(VAR_18, VAR_16),
              FUNC_8(VAR_23, VAR_16));
  VAR_28 = FUNC_9(VAR_28,
                                 FUNC_19(VAR_15->wc_ctx,
                                                            VAR_19,
                                                            VAR_16));
  FUNC_13(VAR_18, VAR_16);
  FUNC_0(VAR_28);

  if (VAR_15->notify_func2)
    {
      svn_wc_notify_t *VAR_29;


      VAR_29 = FUNC_21(VAR_18,
                                    VAR_12,
                                    VAR_16);
      if (VAR_20 == VAR_8)
        VAR_29->content_state = VAR_10;
      else
        VAR_29->content_state = VAR_11;
      VAR_29->prop_state = VAR_21;
      VAR_29->kind = VAR_7;
      VAR_15->notify_func2(VAR_15->notify_baton2, VAR_29, VAR_16);


      VAR_29 = FUNC_21(VAR_18, VAR_9,
                                    VAR_16);
      VAR_15->notify_func2(VAR_15->notify_baton2, VAR_29, VAR_16);
    }

  VAR_14->resolution_tree = FUNC_7(VAR_13);


  FUNC_0(FUNC_12(VAR_23, VAR_3, VAR_16));

  return VAR_1;
}
