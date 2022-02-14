
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void* kind; int prop_state; int content_state; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_state_t ;
typedef scalar_t__ svn_wc_merge_outcome_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_16__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; int cancel_baton; int cancel_func; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_17__ {int resolution_tree; } ;
typedef TYPE_3__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int * FUNC_5 (int **,char const**,char const*,int *,int *,int ,int ,TYPE_2__*,int *,int *) ;
 int * FUNC_6 (char const**,int *,int *,TYPE_3__*,int *,int *) ;
 char* FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (char const**,int *,TYPE_3__*,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int VAR_4 ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_13 (char const*,int *) ;
 void* VAR_5 ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int * FUNC_15 (int **,int *,int *,int *) ;
 int * FUNC_16 (int *,char*,int ,int *,int *,int **,int *) ;
 int * FUNC_17 (int *) ;
 int * FUNC_18 (int *,int *,int ,int ,int *) ;
 int * FUNC_19 (int *,int ,int *) ;
 int * FUNC_20 (int **,char const**,char const*,int ,int *,int *) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_23 (int ,char const*,int *) ;
 int * FUNC_24 (char const**,int ,char const*,int *,int *) ;
 int FUNC_25 (int ,char const*,int *) ;
 int * FUNC_26 (int **,int ,char const*,char const*,int ,int *,int *) ;
 int * FUNC_27 (int ,char const*,int *,int *,int *,int *,char const*,int ,int *,int *,int *) ;
 TYPE_1__* FUNC_28 (char const*,int ,int *) ;
 int * FUNC_29 (int ,char const*,int ,int ,int *,int *,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 int * FUNC_30 (scalar_t__*,int *,int ,char const*,char const*,char const*,int *,int *,int *,int *,int *,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_31 (int **,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_32(
  svn_client_conflict_option_t *VAR_12,
  svn_client_conflict_t *VAR_13,
  svn_client_ctx_t *VAR_14,
  apr_pool_t *VAR_15)
{
  svn_ra_session_t *VAR_16;
  const char *VAR_17;
  const char *VAR_18;
  const char *VAR_19;
  const char *VAR_20;
  svn_revnum_t VAR_21;
  apr_file_t *VAR_22;
  svn_stream_t *VAR_23;
  apr_hash_t *VAR_24;
  const char *VAR_25;
  const char *VAR_26;
  const char *VAR_27;
  svn_stream_t *VAR_28;
  const char *VAR_29;
  svn_stream_t *VAR_30;
  apr_hash_t *VAR_31;
  svn_error_t *VAR_32;
  svn_wc_merge_outcome_t VAR_33;
  svn_wc_notify_state_t VAR_34;
  apr_file_t *VAR_35;
  const char *VAR_36;
  apr_array_header_t *VAR_37;

  VAR_25 = FUNC_7(VAR_13);


  FUNC_0(FUNC_24(&VAR_27, VAR_14->wc_ctx, VAR_25,
                             VAR_15, VAR_15));
  FUNC_0(FUNC_20(&VAR_28,
                                 &VAR_29, VAR_27,
                                 VAR_4,
                                 VAR_15, VAR_15));


  FUNC_0(FUNC_26(&VAR_30, VAR_14->wc_ctx,
                                    VAR_25, VAR_25,
                                    VAR_2,
                                    VAR_15, VAR_15));
  FUNC_0(FUNC_18(VAR_30, VAR_28,
                           VAR_14->cancel_func, VAR_14->cancel_baton,
                           VAR_15));


  FUNC_0(FUNC_31(&VAR_31, VAR_14->wc_ctx, VAR_25,
                            VAR_15, VAR_15));


  FUNC_0(FUNC_6(
            &VAR_20, &VAR_21,
            ((void*)0), VAR_13, VAR_15,
            VAR_15));
  FUNC_0(FUNC_8(&VAR_19, ((void*)0),
                                             VAR_13, VAR_15,
                                             VAR_15));
  VAR_17 = FUNC_14(VAR_19, VAR_20,
                                    VAR_15);
  FUNC_0(FUNC_5(&VAR_16, &VAR_18,
                                               VAR_17, ((void*)0), ((void*)0), VAR_0, VAR_0,
                                               VAR_14, VAR_15,
                                               VAR_15));
  if (VAR_18)
    VAR_17 = VAR_18;
  FUNC_0(FUNC_12(&VAR_22, ((void*)0), VAR_27,
                                   VAR_4,
                                   VAR_15, VAR_15));
  VAR_23 = FUNC_19(VAR_22, VAR_3,
                                                 VAR_15);
  FUNC_0(FUNC_16(VAR_16, "", VAR_21,
                          VAR_23, ((void*)0),
                          &VAR_24, VAR_15));

  FUNC_0(FUNC_11(VAR_22, VAR_15));


  FUNC_0(FUNC_21(VAR_23));

  FUNC_0(FUNC_22(&VAR_26, VAR_14->wc_ctx,
                                                 VAR_25,
                                                 VAR_15, VAR_15));




  VAR_32 = FUNC_29(VAR_14->wc_ctx, VAR_25, VAR_0, VAR_0,
                       ((void*)0), ((void*)0),
                       VAR_14->notify_func2, VAR_14->notify_baton2,
                       VAR_15);
  if (VAR_32)
    goto unlock_wc;
  VAR_32 = FUNC_27(VAR_14->wc_ctx, VAR_25,
                               VAR_23,
                               ((void*)0),

                               VAR_24,
                               ((void*)0),
                               VAR_17, VAR_21,
                               ((void*)0), ((void*)0),
                               VAR_15);
  if (VAR_32)
    goto unlock_wc;

  if (VAR_14->notify_func2)
    {
      svn_wc_notify_t *VAR_38 = FUNC_28(VAR_25,
                                                     VAR_7,
                                                     VAR_15);
      VAR_38->kind = VAR_5;
      VAR_14->notify_func2(VAR_14->notify_baton2, VAR_38, VAR_15);
    }


  VAR_32 = FUNC_23(VAR_14->wc_ctx, VAR_25, VAR_15);
  if (VAR_32)
    goto unlock_wc;



  VAR_32 = FUNC_12(&VAR_35, &VAR_36, ((void*)0),
                                 VAR_4,
                                 VAR_15, VAR_15);
  if (VAR_32)
    goto unlock_wc;

  FUNC_1(VAR_24, VAR_15);


  VAR_32 = FUNC_15(&VAR_37, VAR_24,
                       VAR_31, VAR_15);
  if (VAR_32)
    goto unlock_wc;


  VAR_32 = FUNC_30(&VAR_33, &VAR_34,
                      VAR_14->wc_ctx, VAR_36,
                      VAR_29, VAR_25,
                      ((void*)0), ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_0,
                      ((void*)0), ((void*)0),
                      ((void*)0), VAR_37,
                      ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_15);
  if (VAR_32)
    goto unlock_wc;

  if (VAR_14->notify_func2)
    {
      svn_wc_notify_t *VAR_39 = FUNC_28(
                                   VAR_25,
                                   VAR_11,
                                   VAR_15);

      if (VAR_33 == VAR_6)
        VAR_39->content_state = VAR_9;
      else
        VAR_39->content_state = VAR_10;
      VAR_39->prop_state = VAR_34;
      VAR_39->kind = VAR_5;
      VAR_14->notify_func2(VAR_14->notify_baton2, VAR_39, VAR_15);
    }

unlock_wc:
  VAR_32 = FUNC_10(VAR_32, FUNC_25(VAR_14->wc_ctx,
                                                                 VAR_26,
                                                                 VAR_15));
  FUNC_13(VAR_25, VAR_15);
  FUNC_0(VAR_32);

  FUNC_0(FUNC_17(VAR_23));

  if (VAR_14->notify_func2)
    {
      svn_wc_notify_t *VAR_40 = FUNC_28(
                                  VAR_25,
                                  VAR_8,
                                  VAR_15);

      VAR_14->notify_func2(VAR_14->notify_baton2, VAR_40, VAR_15);
    }

  VAR_13->resolution_tree = FUNC_9(VAR_12);

  return VAR_1;
}
