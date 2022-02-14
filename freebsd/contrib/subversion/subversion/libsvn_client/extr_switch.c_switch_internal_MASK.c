
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int revision; int lock_state; int prop_state; int content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_config_t ;
struct TYPE_20__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; int cancel_baton; int cancel_func; scalar_t__ config; } ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_21__ {char const* repos_root_url; char const* url; int rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_client__dirent_fetcher_baton_t {char const* anchor_url; int target_revision; int * ra_session; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int * VAR_14 ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int VAR_15 ;
 int FUNC_7 (TYPE_3__**,TYPE_3__*,TYPE_3__*,int *,TYPE_2__*,int *,int *) ;
 int FUNC_8 (int *,int *,char const*,char const*,int ,scalar_t__*,int *,TYPE_2__*,int *) ;
 int FUNC_9 (int **,TYPE_3__**,char const*,char const*,int const*,int const*,TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_3__**,char const*,int ,int *,int *) ;
 int FUNC_11 (int *,char const**,int ,int ,char*) ;
 int FUNC_12 (int *,scalar_t__*,int ,int ,scalar_t__) ;
 int * FUNC_13 (char const*,char*,scalar_t__,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_14 (char const*,int *) ;
 char const* FUNC_15 (char const*,int *) ;
 char const* FUNC_16 (char const*,int *) ;
 int * FUNC_17 (int ,int *,int ,...) ;
 int * FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (int *,char const*,int *) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (char const**,char const*,int *) ;
 char* FUNC_21 (char const*,char*,int *) ;
 int FUNC_22 (int *,int const**,void**,int ,char const*,int ,char const*,scalar_t__,scalar_t__,int const*,void*,int *,int *) ;
 int FUNC_23 (int *,int **,char*,int ,int *,int *) ;
 int FUNC_24 (int *,scalar_t__*,int ,int *) ;
 int FUNC_25 (int *,char const*,int *) ;
 int FUNC_26 (char const*,char const*) ;
 int FUNC_27 (int **,int **,int ,char const*,int ,int *,int *) ;
 int FUNC_28 (int const**,void**,int *,int ,char const*,char const*,char const*,int *,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,char const*,int *,int ,struct svn_client__dirent_fetcher_baton_t*,int *,int *,int *,int *,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *,int *) ;
 int FUNC_29 (scalar_t__*,int ,char const*,int *) ;
 int FUNC_30 (char const**,int ,char const*,int *,int *) ;
 int FUNC_31 (scalar_t__*,int ,char const*,int *) ;
 int FUNC_32 (int ,char const*,int const*,void*,scalar_t__,int ,int,int,scalar_t__,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 TYPE_1__* FUNC_33 (char const*,int ,int *) ;
 int FUNC_34 (int ,char const*,int ,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 int FUNC_35 (int ,char const*,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_36 (scalar_t__*,int ,char const*,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_37(svn_revnum_t *VAR_24,
                apr_hash_t *VAR_25,
                const char *VAR_26,
                const char *VAR_27,
                const char *VAR_28,
                const svn_opt_revision_t *VAR_29,
                const svn_opt_revision_t *VAR_30,
                svn_depth_t VAR_31,
                svn_boolean_t VAR_32,
                svn_boolean_t VAR_33,
                svn_boolean_t VAR_34,
                svn_boolean_t VAR_35,
                svn_boolean_t *VAR_36,
                svn_client_ctx_t *VAR_37,
                apr_pool_t *VAR_38)
{
  const svn_ra_reporter3_t *VAR_39;
  void *VAR_40;
  const char *VAR_41, *VAR_42;
  svn_client__pathrev_t *VAR_43;
  svn_ra_session_t *VAR_44;
  svn_revnum_t VAR_45;
  const char *VAR_46;
  apr_hash_t *VAR_47;
  apr_array_header_t *VAR_48;
  svn_boolean_t VAR_49;
  const svn_delta_editor_t *VAR_50;
  void *VAR_51;
  const char *VAR_52;
  apr_array_header_t *VAR_53;
  svn_boolean_t VAR_54;
  struct svn_client__dirent_fetcher_baton_t VAR_55;
  svn_config_t *VAR_56 = VAR_37->config
                      ? FUNC_18(VAR_37->config, VAR_1)
                      : ((void*)0);


  if (VAR_31 == VAR_18)
    VAR_32 = VAR_0;


  if (VAR_31 == VAR_16)
    return FUNC_17(VAR_9, ((void*)0),
                             FUNC_3("Cannot both exclude and switch a path"));


  FUNC_11(VAR_56, &VAR_46, VAR_5,
                 VAR_2, ((void*)0));

  if (VAR_46 != ((void*)0))
    FUNC_1(FUNC_20(&VAR_46, VAR_46, VAR_38));


  FUNC_1(FUNC_12(VAR_56, &VAR_49,
                              VAR_6,
                              VAR_4, VAR_0));

  {
    svn_boolean_t VAR_57;
    FUNC_1(FUNC_31(&VAR_57, VAR_37->wc_ctx, VAR_26,
                                     VAR_38));

    if (VAR_57)
      return FUNC_17(VAR_9, ((void*)0),
                               FUNC_3("Cannot switch '%s' because it is not in the "
                                 "repository yet"),
                               FUNC_16(VAR_26, VAR_38));
  }



  FUNC_11(VAR_56, &VAR_52, VAR_6,
                 VAR_3, "");
  VAR_53 = *VAR_52
    ? FUNC_13(VAR_52, "\n\r\t\v ", VAR_0, VAR_38)
    : ((void*)0);


  FUNC_2(VAR_28 && (VAR_28[0] != '\0'));

  if (FUNC_5(VAR_26, VAR_27))
    VAR_42 = FUNC_14(VAR_26, VAR_38);
  else
    VAR_42 = "";

  FUNC_1(FUNC_30(&VAR_41, VAR_37->wc_ctx, VAR_27,
                               VAR_38, VAR_38));
  if (! VAR_41)
    return FUNC_17(VAR_8, ((void*)0),
                             FUNC_3("Directory '%s' has no URL"),
                             FUNC_16(VAR_27, VAR_38));


  if (VAR_32 && VAR_31 < VAR_17)
    {
      svn_node_kind_t VAR_58;

      if (VAR_31 == VAR_16)
        {
          FUNC_1(FUNC_35(VAR_37->wc_ctx,
                                 VAR_26,
                                 VAR_37->cancel_func, VAR_37->cancel_baton,
                                 VAR_37->notify_func2, VAR_37->notify_baton2,
                                 VAR_38));


          return VAR_11;
        }

      FUNC_1(FUNC_36(&VAR_58, VAR_37->wc_ctx, VAR_26,
                                VAR_13, VAR_13, VAR_38));

      if (VAR_58 == VAR_19)
        FUNC_1(FUNC_34(VAR_37->wc_ctx, VAR_26, VAR_31,
                                  VAR_37->cancel_func, VAR_37->cancel_baton,
                                  VAR_37->notify_func2, VAR_37->notify_baton2,
                                  VAR_38));
    }


  FUNC_1(FUNC_9(&VAR_44, &VAR_43,
                                            VAR_28, VAR_27,
                                            VAR_29, VAR_30,
                                            VAR_37, VAR_38));



  if (! FUNC_26(VAR_43->repos_root_url, VAR_41))
    return FUNC_17(VAR_10, ((void*)0),
                             FUNC_3("'%s'\nis not the same repository as\n'%s'"),
                             VAR_41, VAR_43->repos_root_url);






  if (! VAR_35)
    {
      svn_client__pathrev_t *VAR_59, *VAR_60;

      FUNC_1(FUNC_10(&VAR_59, VAR_26,
                                           VAR_37->wc_ctx, VAR_38, VAR_38));

      if (!VAR_59)
        VAR_60 = ((void*)0);
      else
        {
          FUNC_1(FUNC_7(
                  &VAR_60, VAR_43, VAR_59, VAR_44, VAR_37,
                  VAR_38, VAR_38));
        }
      if (! VAR_60)
        return FUNC_17(VAR_7, ((void*)0),
                                 FUNC_3("'%s' shares no common ancestry with '%s'"),
                                 VAR_28,
                                 FUNC_16(VAR_26, VAR_38));
    }

  VAR_47 = FUNC_4(VAR_38);





  if (FUNC_5(VAR_43->repos_root_url, VAR_43->url) != 0)
    {
      svn_boolean_t VAR_61;
      svn_boolean_t VAR_62 = VAR_13;

      FUNC_1(FUNC_29(&VAR_61, VAR_37->wc_ctx, VAR_26,
                                VAR_38));



      if (!VAR_61)
        {



          const char *VAR_63;
          const char *VAR_64;



          FUNC_1(FUNC_30(&VAR_63, VAR_37->wc_ctx,
                                       FUNC_15(VAR_26,
                                                          VAR_38),
                                       VAR_38, VAR_38));
          VAR_64 = FUNC_21(
            VAR_63,
            FUNC_14(VAR_26, VAR_38),
            VAR_38);





          if (FUNC_5(VAR_64, VAR_43->url) == 0)
            VAR_62 = VAR_0;
      }


      if (VAR_62)
        {
          FUNC_1(FUNC_23(VAR_44, &VAR_48,
                                             "", VAR_43->rev, VAR_38,
                                             VAR_38));
          FUNC_19(VAR_47, VAR_26, VAR_48);
        }
    }

  FUNC_1(FUNC_25(VAR_44, VAR_41, VAR_38));



  FUNC_1(FUNC_24(VAR_44, &VAR_54,
                                VAR_12, VAR_38));

  VAR_55.ra_session = VAR_44;
  VAR_55.anchor_url = VAR_41;
  VAR_55.target_revision = VAR_43->rev;

  FUNC_1(FUNC_28(&VAR_50, &VAR_51,
                                    &VAR_45, VAR_37->wc_ctx, VAR_27,
                                    VAR_42, VAR_43->url, VAR_47,
                                    VAR_49, VAR_31,
                                    VAR_32, VAR_34,
                                    VAR_54,
                                    VAR_46, VAR_53,
                                    VAR_15, &VAR_55,
                                    VAR_25 ? VAR_14 : ((void*)0),
                                    VAR_25,
                                    ((void*)0), ((void*)0),
                                    VAR_37->cancel_func, VAR_37->cancel_baton,
                                    VAR_37->notify_func2, VAR_37->notify_baton2,
                                    VAR_38, VAR_38));



  FUNC_1(FUNC_22(VAR_44, &VAR_39, &VAR_40,
                            VAR_43->rev,
                            VAR_42,
                            VAR_32 ? VAR_31 : VAR_18,
                            VAR_43->url,
                            VAR_0 ,
                            VAR_35,
                            VAR_50, VAR_51,
                            VAR_38, VAR_38));



  *VAR_36 = VAR_13;




  FUNC_1(FUNC_32(VAR_37->wc_ctx, VAR_26, VAR_39,
                                  VAR_40, VAR_13,
                                  VAR_31, (! VAR_32),
                                  (! VAR_54),
                                  VAR_49,
                                  VAR_37->cancel_func, VAR_37->cancel_baton,
                                  VAR_37->notify_func2, VAR_37->notify_baton2,
                                  VAR_38));




  if (FUNC_0(VAR_31) && (! VAR_33))
    {
      apr_hash_t *VAR_65;
      apr_hash_t *VAR_66;
      FUNC_1(FUNC_27(&VAR_65,
                                                   &VAR_66,
                                                   VAR_37->wc_ctx, VAR_26,
                                                   VAR_31, VAR_38, VAR_38));

      FUNC_1(FUNC_8(VAR_65,
                                           VAR_66,
                                           VAR_43->repos_root_url,
                                           VAR_26,
                                           VAR_31, VAR_36, VAR_44,
                                           VAR_37, VAR_38));
    }


  if (VAR_37->notify_func2)
    {
      svn_wc_notify_t *VAR_67
        = FUNC_33(VAR_27, VAR_23,
                               VAR_38);
      VAR_67->kind = VAR_20;
      VAR_67->content_state = VAR_67->prop_state
        = VAR_22;
      VAR_67->lock_state = VAR_21;
      VAR_67->revision = VAR_45;
      VAR_37->notify_func2(VAR_37->notify_baton2, VAR_67, VAR_38);
    }


  if (VAR_24)
    *VAR_24 = VAR_45;

  return VAR_11;
}
