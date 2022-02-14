
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
struct TYPE_15__ {int resolution_tree; } ;
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int * FUNC_5 (int **,char const**,char const*,int *,int *,int ,int ,TYPE_2__*,int *,int *) ;
 int * FUNC_6 (char const**,int *,int *,TYPE_3__*,int *,int *) ;
 char* FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (char const**,int *,TYPE_3__*,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int VAR_3 ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_13 (char const*,int *) ;
 int VAR_4 ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int * FUNC_15 (int **,int *,int ,int *) ;
 int * FUNC_16 (int *,char*,int ,int *,int *,int **,int *) ;
 int * FUNC_17 (int *) ;
 int * FUNC_18 (int *,int ,int *) ;
 int * FUNC_19 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_20 (int ,char const*,int *) ;
 int * FUNC_21 (char const**,int ,char const*,int *,int *) ;
 int FUNC_22 (int ,char const*,int *) ;
 TYPE_1__* FUNC_23 (char const*,int ,int *) ;
 int * FUNC_24 (scalar_t__*,int *,int ,char const*,char const*,char const*,int *,int *,int *,int *,int *,int ,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_25(
  svn_client_conflict_option_t *VAR_10,
  svn_client_conflict_t *VAR_11,
  svn_client_ctx_t *VAR_12,
  apr_pool_t *VAR_13)
{
  svn_ra_session_t *VAR_14;
  const char *VAR_15;
  const char *VAR_16;
  const char *VAR_17;
  const char *VAR_18;
  const char *VAR_19;
  svn_revnum_t VAR_20;
  const char *VAR_21;
  const char *VAR_22;
  svn_wc_merge_outcome_t VAR_23;
  svn_wc_notify_state_t VAR_24;
  apr_file_t *VAR_25;
  const char *VAR_26;
  const char *VAR_27;
  svn_stream_t *VAR_28;
  apr_hash_t *VAR_29;
  apr_array_header_t *VAR_30;
  svn_error_t *VAR_31;

  VAR_21 = FUNC_7(VAR_11);


  FUNC_0(FUNC_21(&VAR_18, VAR_12->wc_ctx, VAR_21,
                             VAR_13, VAR_13));
  FUNC_0(FUNC_12(&VAR_25,
                                   &VAR_26, VAR_18,
                                   VAR_3,
                                   VAR_13, VAR_13));
  VAR_28 = FUNC_18(VAR_25, VAR_2,
                                                 VAR_13);


  FUNC_0(FUNC_6(
            &VAR_19, &VAR_20,
            ((void*)0), VAR_11, VAR_13,
            VAR_13));
  FUNC_0(FUNC_8(&VAR_17, ((void*)0),
                                             VAR_11, VAR_13,
                                             VAR_13));
  VAR_15 = FUNC_14(VAR_17, VAR_19,
                                    VAR_13);
  FUNC_0(FUNC_5(&VAR_14, &VAR_16,
                                               VAR_15, ((void*)0), ((void*)0), VAR_0, VAR_0,
                                               VAR_12, VAR_13,
                                               VAR_13));
  FUNC_0(FUNC_16(VAR_14, "", VAR_20,
                          VAR_28, ((void*)0),
                          &VAR_29, VAR_13));


  FUNC_0(FUNC_17(VAR_28));
  FUNC_0(FUNC_11(VAR_25, VAR_13));

  FUNC_2(VAR_29, VAR_13);



  FUNC_0(FUNC_12(((void*)0), &VAR_27, ((void*)0),
                                   VAR_3,
                                   VAR_13, VAR_13));


  FUNC_0(FUNC_15(&VAR_30, VAR_29,
                         FUNC_1(VAR_13), VAR_13));


  FUNC_0(FUNC_19(&VAR_22, VAR_12->wc_ctx,
                                                 VAR_21,
                                                 VAR_13, VAR_13));

  VAR_31 = FUNC_20(VAR_12->wc_ctx, VAR_21, VAR_13);
  if (VAR_31)
    return FUNC_10(VAR_31,
                                    FUNC_22(VAR_12->wc_ctx,
                                                               VAR_22,
                                                               VAR_13));

  VAR_31 = FUNC_24(&VAR_23, &VAR_24,
                      VAR_12->wc_ctx, VAR_27,
                      VAR_26, VAR_21,
                      ((void*)0), ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_0,
                      ((void*)0), ((void*)0),
                      ((void*)0), VAR_30,
                      ((void*)0), ((void*)0),
                      ((void*)0), ((void*)0),
                      VAR_13);
  VAR_31 = FUNC_10(VAR_31, FUNC_22(VAR_12->wc_ctx,
                                                                 VAR_22,
                                                                 VAR_13));
  FUNC_13(VAR_21, VAR_13);
  FUNC_0(VAR_31);

  if (VAR_12->notify_func2)
    {
      svn_wc_notify_t *VAR_32;


      VAR_32 = FUNC_23(VAR_21,
                                    VAR_9,
                                    VAR_13);
      if (VAR_23 == VAR_5)
        VAR_32->content_state = VAR_7;
      else
        VAR_32->content_state = VAR_8;
      VAR_32->prop_state = VAR_24;
      VAR_32->kind = VAR_4;
      VAR_12->notify_func2(VAR_12->notify_baton2, VAR_32, VAR_13);


      VAR_32 = FUNC_23(VAR_21, VAR_6,
                                    VAR_13);
      VAR_12->notify_func2(VAR_12->notify_baton2, VAR_32, VAR_13);
    }

  VAR_11->resolution_tree = FUNC_9(VAR_10);

  return VAR_1;
}
