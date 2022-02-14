
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int kind; } ;
typedef TYPE_2__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (struct notification_adjust_baton*,TYPE_2__*,int *) ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_22__ {int number; } ;
struct TYPE_24__ {TYPE_1__ value; int kind; } ;
typedef TYPE_4__ svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_25__ {struct notification_adjust_baton* notify_baton2; int (* notify_func2 ) (struct notification_adjust_baton*,TYPE_2__*,int *) ;int wc_ctx; } ;
typedef TYPE_5__ svn_client_ctx_t ;
struct TYPE_26__ {int resolution_tree; } ;
typedef TYPE_6__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef scalar_t__ svn_boolean_t ;
struct notification_adjust_baton {char const* checkout_abspath; char const* final_abspath; struct notification_adjust_baton* inner_baton; int (* inner_func ) (struct notification_adjust_baton*,TYPE_2__*,int *) ;} ;
struct find_added_rev_baton {char const* victim_abspath; scalar_t__ added_rev; int * pool; int parent_repos_relpath; int * repos_relpath; TYPE_5__* ctx; int member_0; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int * FUNC_2 (char const*,char const*,int ,char const*,int ,char const*,int ,TYPE_5__*,int *,int *) ;
 int FUNC_3 (struct notification_adjust_baton*,TYPE_2__*,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct notification_adjust_baton*,TYPE_2__*,int *) ;
 int FUNC_6 (struct notification_adjust_baton*,TYPE_2__*,int *) ;
 int * FUNC_7 (int *,scalar_t__*,char const*,char const*,TYPE_4__*,TYPE_4__*,int ,int ,int ,int *,TYPE_5__*,int *) ;
 int * FUNC_8 (int **,char const**,char const*,int *,int *,int ,int ,TYPE_5__*,int *,int *) ;
 int * FUNC_9 (char const**,int *,int *,TYPE_6__*,int *,int *) ;
 char* FUNC_10 (TYPE_6__*) ;
 int * FUNC_11 (char const**,int *,TYPE_6__*,int *,int *) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;
 int FUNC_13 (char const*,int *) ;
 int * FUNC_14 (int *,int ) ;
 int * FUNC_15 (int ,int *,int ,char const*) ;
 int VAR_7 ;
 int * FUNC_16 (char const*,char const*,int ,int *) ;
 int * FUNC_17 (int *,char const**,char const*,int ,int *,int *) ;
 int FUNC_18 (char const*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_19 (char const*,char const*,int *) ;
 int * FUNC_20 (int *,char*,int ,int ,scalar_t__,int ,struct find_added_rev_baton*,int *) ;
 int * FUNC_21 (int *,char const*,int *) ;
 int FUNC_22 (char const*,int *) ;
 int * FUNC_23 (int *,int ,char const*,int ,int *,int *) ;
 int * FUNC_24 (char const**,int ,int ,int *,int *) ;
 int * FUNC_25 (int ,char const*,int *) ;
 int * FUNC_26 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_27 (int *,int *,char const**,int *,int *,int *,int ,char const*,int ,int *,int *) ;
 int FUNC_28 (int ,char const*,int *) ;
 int * FUNC_29 (int ,char const*,char const*,int ,int *,int *,int *,int *,int *) ;
 TYPE_2__* FUNC_30 (char const*,int ,int *) ;
 int * FUNC_31 (int ,char const*,int ,int ,int *,int *,int (*) (struct notification_adjust_baton*,TYPE_2__*,int *),struct notification_adjust_baton*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_32 (int ,char const*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_33(svn_client_conflict_option_t *VAR_12,
                                 svn_client_conflict_t *VAR_13,
                                 svn_client_ctx_t *VAR_14,
                                 svn_boolean_t VAR_15,
                                 apr_pool_t *VAR_16)
{
  svn_ra_session_t *VAR_17;
  const char *VAR_18;
  const char *VAR_19;
  const char *VAR_20;
  const char *VAR_21;
  svn_revnum_t VAR_22;
  const char *VAR_23;
  const char *VAR_24;
  const char *VAR_25, *VAR_26;
  svn_error_t *VAR_27;
  svn_revnum_t VAR_28;
  svn_opt_revision_t VAR_29;
  svn_boolean_t VAR_30;
  svn_wc_notify_func2_t VAR_31 = VAR_14->notify_func2;
  void *VAR_32 = VAR_14->notify_baton2;
  struct notification_adjust_baton VAR_33;

  VAR_23 = FUNC_10(VAR_13);


  FUNC_0(FUNC_9(
            &VAR_21, &VAR_22,
            ((void*)0), VAR_13, VAR_16,
            VAR_16));
  FUNC_0(FUNC_11(&VAR_20, ((void*)0),
                                             VAR_13, VAR_16,
                                             VAR_16));
  VAR_18 = FUNC_19(VAR_20, VAR_21,
                                    VAR_16);
  FUNC_0(FUNC_8(&VAR_17, &VAR_19,
                                               VAR_18, ((void*)0), ((void*)0), VAR_0, VAR_0,
                                               VAR_14, VAR_16,
                                               VAR_16));
  if (VAR_19)
    VAR_18 = VAR_19;



  FUNC_0(FUNC_26(&VAR_25, VAR_14->wc_ctx, VAR_23,
                             VAR_16, VAR_16));

  FUNC_0(FUNC_17(((void*)0), &VAR_26, VAR_25,
                                   VAR_7,
                                   VAR_16, VAR_16));
  VAR_33.inner_func = VAR_14->notify_func2;
  VAR_33.inner_baton = VAR_14->notify_baton2;
  VAR_33.checkout_abspath = VAR_26;
  VAR_33.final_abspath = VAR_23;
  VAR_14->notify_func2 = FUNC_3;
  VAR_14->notify_baton2 = &VAR_33;

  VAR_29.kind = VAR_9;
  VAR_29.value.number = VAR_22;

  VAR_27 = FUNC_7(&VAR_28, &VAR_30,
                                      VAR_18, VAR_26,
                                      &VAR_29,
                                      &VAR_29,
                                      VAR_6,
                                      VAR_4,
                                      VAR_0,
                                      VAR_17, VAR_14, VAR_16);

  VAR_14->notify_func2 = VAR_31;
  VAR_14->notify_baton2 = VAR_32;

  FUNC_0(VAR_27);



  FUNC_0(FUNC_24(&VAR_24, VAR_14->wc_ctx,
                                                 FUNC_13(
                                                   VAR_23,
                                                   VAR_16),
                                                 VAR_16, VAR_16));


  VAR_27 = FUNC_31(VAR_14->wc_ctx, VAR_23, VAR_0, VAR_0,
                       ((void*)0), ((void*)0),
                       VAR_14->notify_func2, VAR_14->notify_baton2,
                       VAR_16);
  if (VAR_27)
    goto unlock_wc;





  VAR_27 = FUNC_29(VAR_14->wc_ctx, VAR_26, VAR_23,
                     VAR_4 ,
                     ((void*)0), ((void*)0),
                     ((void*)0), ((void*)0), VAR_16);
  if (VAR_27)
    goto unlock_wc;

  VAR_27 = FUNC_23(((void*)0), VAR_14->wc_ctx, VAR_26,
                                   VAR_0, VAR_16, VAR_16);
  if (VAR_27)
    goto unlock_wc;
  VAR_27 = FUNC_32(VAR_14->wc_ctx,
                                             VAR_26,
                                             VAR_0, VAR_0,
                                             ((void*)0), ((void*)0),
                                             VAR_16);
  if (VAR_27)
    goto unlock_wc;


  VAR_27 = FUNC_16(VAR_26, VAR_23, VAR_0, VAR_16);
  if (VAR_27)
    goto unlock_wc;

  if (VAR_14->notify_func2)
    {
      svn_wc_notify_t *VAR_34 = FUNC_30(VAR_23,
                                                     VAR_10,
                                                     VAR_16);
      VAR_34->kind = VAR_8;
      VAR_14->notify_func2(VAR_14->notify_baton2, VAR_34, VAR_16);
    }



  VAR_27 = FUNC_25(VAR_14->wc_ctx, VAR_23, VAR_16);
  if (VAR_27)
    goto unlock_wc;

  if (VAR_15)
    {
      svn_revnum_t VAR_35;
      const char *VAR_36;
      struct find_added_rev_baton VAR_37 = { 0 };


      VAR_27 = FUNC_27(((void*)0), &VAR_35, &VAR_36,
                                  ((void*)0), ((void*)0), ((void*)0), VAR_14->wc_ctx, VAR_23,
                                  VAR_0, VAR_16, VAR_16);
      if (VAR_27)
        goto unlock_wc;

      VAR_18 = FUNC_19(VAR_20, VAR_36,
                                        VAR_16);


      VAR_27 = FUNC_21(VAR_17, VAR_18, VAR_16);
      if (VAR_27)
        goto unlock_wc;
      VAR_37.victim_abspath = VAR_23;
      VAR_37.ctx = VAR_14;
      VAR_37.added_rev = VAR_2;
      VAR_37.repos_relpath = ((void*)0);
      VAR_37.parent_repos_relpath = FUNC_22(VAR_36,
                                                   VAR_16);
      VAR_37.pool = VAR_16;

      VAR_27 = FUNC_20(VAR_17, "", VAR_35,
                                         VAR_35, VAR_2,
                                         VAR_5, &VAR_37,
                                         VAR_16);
      if (VAR_27)
        goto unlock_wc;

      if (VAR_37.added_rev == VAR_2)
        {
          VAR_27 = FUNC_15(VAR_1, ((void*)0),
                                  FUNC_1("Could not determine the revision in "
                                    "which '^/%s' was added to the "
                                    "repository.\n"),
                                  VAR_36);
          goto unlock_wc;
        }





      VAR_27 = FUNC_2(VAR_36,
                                  VAR_18, FUNC_4(VAR_37.added_rev), VAR_18,
                                  VAR_35, VAR_23, VAR_0,
                                  VAR_14, VAR_16, VAR_16);
      if (VAR_27)
        goto unlock_wc;
    }

unlock_wc:
  VAR_27 = FUNC_14(VAR_27, FUNC_28(VAR_14->wc_ctx,
                                                                 VAR_24,
                                                                 VAR_16));
  FUNC_18(VAR_23, VAR_16);
  FUNC_0(VAR_27);

  if (VAR_14->notify_func2)
    {
      svn_wc_notify_t *VAR_38 = FUNC_30(
                                  VAR_23,
                                  VAR_11,
                                  VAR_16);

      VAR_14->notify_func2(VAR_14->notify_baton2, VAR_38, VAR_16);
    }

  VAR_13->resolution_tree = FUNC_12(VAR_12);

  return VAR_3;
}
