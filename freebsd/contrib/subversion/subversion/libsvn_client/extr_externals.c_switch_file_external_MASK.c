
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int revision; int lock_state; int prop_state; int content_state; scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_config_t ;
struct TYPE_11__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int cancel_baton; int cancel_func; int wc_ctx; int conflict_baton2; int conflict_func2; scalar_t__ config; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_12__ {int url; int rev; int repos_uuid; int repos_root_url; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int *,char const**,int ,int ,char*) ;
 int FUNC_5 (int *,int *,int ,int ,int ) ;
 int * FUNC_6 (char const*,char*,int ,int *) ;
 int VAR_12 ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,int *) ;
 int * FUNC_11 (int ,int *,int ,int ,...) ;
 int * FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_14 (char const**,char const*,int *) ;
 int FUNC_15 (int *,int const**,void**,int ,char const*,int ,int ,int ,int ,int const*,void*,int *,int *) ;
 int FUNC_16 (int *,int **,char*,int ,int *,int *) ;
 int FUNC_17 (int *,int ,int *) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int ,char const*,int const*,void*,int ,int ,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 int FUNC_20 (int const**,void**,int *,int ,char const*,char const*,int ,int ,int ,int *,int ,char const*,int const*,char const*,char const*,int const*,int const*,int ,int ,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *,int *) ;
 int FUNC_21 (char const**,int ,char const*,int *,int *) ;
 int FUNC_22 (scalar_t__*,int *,int *,int *,int *,int ,char const*,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_23 (char const*,int ,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_25(const char *VAR_20,
                     const svn_client__pathrev_t *VAR_21,
                     const char *VAR_22,
                     const svn_opt_revision_t *VAR_23,
                     const svn_opt_revision_t *VAR_24,
                     const char *VAR_25,
                     svn_ra_session_t *VAR_26,
                     svn_client_ctx_t *VAR_27,
                     apr_pool_t *VAR_28)
{
  svn_config_t *VAR_29 = VAR_27->config
                      ? FUNC_12(VAR_27->config, VAR_1)
                      : ((void*)0);
  svn_boolean_t VAR_30;
  const char *VAR_31;
  const char *VAR_32;
  const apr_array_header_t *VAR_33;
  svn_node_kind_t VAR_34, VAR_35;

  FUNC_1(FUNC_8(VAR_20));


  FUNC_0(FUNC_5(VAR_29, &VAR_30,
                              VAR_6,
                              VAR_4, VAR_0));


  FUNC_4(VAR_29, &VAR_31, VAR_5,
                 VAR_2, ((void*)0));

  if (VAR_31 != ((void*)0))
    FUNC_0(FUNC_14(&VAR_31, VAR_31, VAR_28));



  FUNC_4(VAR_29, &VAR_32, VAR_6,
                 VAR_3, "");
  VAR_33 = *VAR_32
    ? FUNC_6(VAR_32, "\n\r\t\v ", VAR_0, VAR_28)
    : ((void*)0);

  {
    const char *VAR_36;

    FUNC_0(FUNC_21(&VAR_36, VAR_27->wc_ctx, VAR_20,
                               VAR_28, VAR_28));





    if (!FUNC_9(VAR_36, VAR_25))
        return FUNC_11(
                        VAR_8, ((void*)0),
                        FUNC_2("Cannot insert a file external defined on '%s' "
                          "into the working copy '%s'."),
                        FUNC_10(VAR_25,
                                               VAR_28),
                        FUNC_10(VAR_36,
                                               VAR_28));
  }

  FUNC_0(FUNC_24(&VAR_34, VAR_27->wc_ctx, VAR_20,
                            VAR_11, VAR_0, VAR_28));

  FUNC_0(FUNC_22(&VAR_35, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     VAR_27->wc_ctx, VAR_20, VAR_20,
                                     VAR_11, VAR_28, VAR_28));





  if (VAR_34 != VAR_15 && VAR_34 != VAR_16)
    {
      if (VAR_35 != VAR_14)
        {
          return FUNC_11(
              VAR_7, 0,
             FUNC_2("The file external from '%s' cannot overwrite the existing "
               "versioned item at '%s'"),
             VAR_21->url,
             FUNC_10(VAR_20, VAR_28));
        }
    }
  else
    {
      svn_node_kind_t VAR_37;

      FUNC_0(FUNC_13(VAR_20, &VAR_37, VAR_28));

      if (VAR_37 == VAR_14 || VAR_37 == VAR_13)
        return FUNC_11(VAR_9, ((void*)0),
                                 FUNC_2("The file external '%s' can not be "
                                   "created because the node exists."),
                                 FUNC_10(VAR_20,
                                                        VAR_28));
    }

  {
    const svn_ra_reporter3_t *VAR_38;
    void *VAR_39;
    const svn_delta_editor_t *VAR_40;
    void *VAR_41;
    svn_revnum_t VAR_42;
    apr_array_header_t *VAR_43;
    const char *VAR_44 = FUNC_7(VAR_20, VAR_28);


    FUNC_0(FUNC_16(VAR_26, &VAR_43, "",
                                       VAR_21->rev,
                                       VAR_28, VAR_28));

    FUNC_0(FUNC_17(VAR_26,
                            FUNC_18(VAR_21->url, VAR_28),
                            VAR_28));

    FUNC_0(FUNC_20(&VAR_40, &VAR_41,
                                             &VAR_42, VAR_27->wc_ctx,
                                             VAR_20,
                                             VAR_25,
                                             VAR_21->url,
                                             VAR_21->repos_root_url,
                                             VAR_21->repos_uuid,
                                             VAR_43,
                                             VAR_30,
                                             VAR_31, VAR_33,
                                             VAR_25,
                                             VAR_22,
                                             VAR_23,
                                             VAR_24,
                                             VAR_27->conflict_func2,
                                             VAR_27->conflict_baton2,
                                             VAR_27->cancel_func,
                                             VAR_27->cancel_baton,
                                             VAR_27->notify_func2,
                                             VAR_27->notify_baton2,
                                             VAR_28, VAR_28));



    FUNC_0(FUNC_15(VAR_26, &VAR_38, &VAR_39,
                              VAR_21->rev,
                              VAR_44, VAR_12, VAR_21->url,
                              VAR_0 ,
                              VAR_11 ,
                              VAR_40, VAR_41,
                              VAR_28, VAR_28));

    FUNC_0(FUNC_19(VAR_27->wc_ctx, VAR_20,
                                        VAR_38, VAR_39,
                                        VAR_11, VAR_30,
                                        VAR_27->cancel_func, VAR_27->cancel_baton,
                                        VAR_27->notify_func2, VAR_27->notify_baton2,
                                        VAR_28));

    if (VAR_27->notify_func2)
      {
        svn_wc_notify_t *VAR_45
          = FUNC_23(VAR_20, VAR_19,
                                 VAR_28);
        VAR_45->kind = VAR_15;
        VAR_45->content_state = VAR_45->prop_state
          = VAR_18;
        VAR_45->lock_state = VAR_17;
        VAR_45->revision = VAR_42;
        VAR_27->notify_func2(VAR_27->notify_baton2, VAR_45, VAR_28);
      }
  }

  return VAR_10;
}
