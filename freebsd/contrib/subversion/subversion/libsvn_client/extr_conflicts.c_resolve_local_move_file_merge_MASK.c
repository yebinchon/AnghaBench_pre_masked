
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int kind; int prop_state; int content_state; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_state_t ;
typedef scalar_t__ svn_wc_merge_outcome_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_15__ {int resolution_tree; int local_abspath; struct conflict_tree_local_missing_details* tree_conflict_local_details; } ;
typedef TYPE_3__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
struct conflict_tree_local_missing_details {int moved_to_abspath; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (char const**,int *,char const*,int *) ;
 int FUNC_6 (int **,char const**,char const*,int *,int *,int ,int ,TYPE_2__*,int *,int *) ;
 int FUNC_7 (char const**,int *,int *,TYPE_3__*,int *,int *) ;
 int FUNC_8 (char const**,int *,int *,TYPE_3__*,int *,int *) ;
 int FUNC_9 (char const**,int *,TYPE_3__*,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int *) ;
 int * FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *) ;
 int VAR_2 ;
 int FUNC_14 (int ,int *) ;
 int VAR_3 ;
 char* FUNC_15 (char const*,char const*,int *) ;
 int FUNC_16 (int **,int *,int *,int *) ;
 int FUNC_17 (int *,char*,int ,int *,int *,int **,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_20 (char const**,int ,int ,int *,int *) ;
 int * FUNC_21 (int ,int ,int *) ;
 int FUNC_22 (char const**,int ,int ,int *,int *) ;
 int FUNC_23 (int ,char const*,int *) ;
 TYPE_1__* FUNC_24 (int ,int ,int *) ;
 int * FUNC_25 (scalar_t__*,int *,int ,char const*,char const*,int ,int *,int *,int *,int *,int *,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_26(svn_client_conflict_option_t *VAR_9,
                              svn_client_conflict_t *VAR_10,
                              svn_client_ctx_t *VAR_11,
                              apr_pool_t *VAR_12)
{
  const char *VAR_13;
  svn_error_t *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  svn_revnum_t VAR_17;
  const char *VAR_18;
  svn_revnum_t VAR_19;
  const char *VAR_20;
  const char *VAR_21;
  const char *VAR_22;
  apr_hash_t *VAR_23;
  apr_hash_t *VAR_24;
  svn_stream_t *VAR_25;
  const char *VAR_26;
  const char *VAR_27;
  const char *VAR_28;
  svn_ra_session_t *VAR_29;
  svn_wc_merge_outcome_t VAR_30;
  svn_wc_notify_state_t VAR_31;
  apr_array_header_t *VAR_32;
  struct conflict_tree_local_missing_details *VAR_33;

  VAR_33 = VAR_10->tree_conflict_local_details;

  FUNC_0(FUNC_9(&VAR_15, ((void*)0),
                                             VAR_10, VAR_12,
                                             VAR_12));
  FUNC_0(FUNC_8(
            &VAR_16, &VAR_17,
            ((void*)0), VAR_10, VAR_12,
            VAR_12));
  FUNC_0(FUNC_7(
            &VAR_18, &VAR_19,
            ((void*)0), VAR_10, VAR_12,
            VAR_12));

  FUNC_0(FUNC_22(&VAR_20, VAR_11->wc_ctx,
                             VAR_33->moved_to_abspath,
                             VAR_12, VAR_12));


  FUNC_0(FUNC_19(&VAR_25, &VAR_21, VAR_20,
                                 VAR_2,
                                 VAR_12, VAR_12));
  VAR_26 = FUNC_15(VAR_15,
                                    VAR_16,
                                    VAR_12);
  FUNC_0(FUNC_6(&VAR_29, &VAR_27,
                                               VAR_26, ((void*)0), ((void*)0),
                                               VAR_0, VAR_0, VAR_11,
                                               VAR_12, VAR_12));
  FUNC_0(FUNC_17(VAR_29, "", VAR_17, VAR_25, ((void*)0),
                          &VAR_23, VAR_12));
  FUNC_2(VAR_23, VAR_12);


  FUNC_0(FUNC_18(VAR_25));


  FUNC_0(FUNC_19(&VAR_25, &VAR_22, VAR_20,
                                 VAR_2,
                                 VAR_12, VAR_12));
  VAR_26 = FUNC_15(VAR_15,
                                    VAR_18,
                                    VAR_12);
  FUNC_0(FUNC_5(&VAR_28, VAR_29,
                                            VAR_26, VAR_12));
  FUNC_0(FUNC_17(VAR_29, "", VAR_19, VAR_25, ((void*)0),
                          &VAR_24, VAR_12));

  FUNC_0(FUNC_18(VAR_25));

  FUNC_2(VAR_24, VAR_12);


  FUNC_0(FUNC_16(&VAR_32, VAR_24, VAR_23,
                         VAR_12));


  FUNC_0(FUNC_20(
            &VAR_13, VAR_11->wc_ctx,
            FUNC_11(VAR_10->local_abspath,
                                            VAR_33->moved_to_abspath,
                                            VAR_12),
            VAR_12, VAR_12));


  VAR_14 = FUNC_25(&VAR_30, &VAR_31,
                      VAR_11->wc_ctx,
                      VAR_21, VAR_22,
                      VAR_33->moved_to_abspath,
                      ((void*)0), ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_0,
                      ((void*)0), ((void*)0),
                      FUNC_1(VAR_23) ? VAR_23 : ((void*)0),
                      VAR_32,
                      ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_12);
  FUNC_14(VAR_33->moved_to_abspath, VAR_12);
  if (VAR_14)
    return FUNC_12(VAR_14,
                                    FUNC_23(VAR_11->wc_ctx,
                                                               VAR_13,
                                                               VAR_12));

  VAR_14 = FUNC_21(VAR_11->wc_ctx, VAR_10->local_abspath,
                                  VAR_12);
  VAR_14 = FUNC_12(VAR_14,
                                 FUNC_23(VAR_11->wc_ctx,
                                                            VAR_13,
                                                            VAR_12));
  if (VAR_14)
    return FUNC_13(VAR_14);

  if (VAR_11->notify_func2)
    {
      svn_wc_notify_t *VAR_34;


      VAR_34 = FUNC_24(VAR_33->moved_to_abspath,
                                    VAR_8,
                                    VAR_12);
      if (VAR_30 == VAR_4)
        VAR_34->content_state = VAR_6;
      else
        VAR_34->content_state = VAR_7;
      VAR_34->prop_state = VAR_31;
      VAR_34->kind = VAR_3;
      VAR_11->notify_func2(VAR_11->notify_baton2, VAR_34, VAR_12);


      VAR_34 = FUNC_24(VAR_10->local_abspath,
                                    VAR_5,
                                    VAR_12);
      VAR_11->notify_func2(VAR_11->notify_baton2, VAR_34, VAR_12);
    }

  VAR_10->resolution_tree = FUNC_10(VAR_9);

  return VAR_1;
}
