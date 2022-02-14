
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {void* revision; void* lock_state; void* prop_state; void* content_state; void* kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef void* svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
struct TYPE_28__ {scalar_t__ kind; int value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_29__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_config_t ;
struct TYPE_30__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int wc_ctx; int cancel_baton; int cancel_func; scalar_t__ config; } ;
typedef TYPE_4__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct svn_client__dirent_fetcher_baton_t {char const* anchor_url; void* target_revision; int * ra_session; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int*,char const*,char const*,int *) ;
 int * VAR_13 ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,TYPE_1__*,int *) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int VAR_14 ;
 int FUNC_7 (int **,char const*,void*,int ,int *,TYPE_4__*,int *,int *) ;
 int FUNC_8 (void**,int *,int ,char const*,int *,TYPE_2__*,int *) ;
 int FUNC_9 (int *,int *,char const*,char const*,int ,int*,int *,TYPE_4__*,int *) ;
 int FUNC_10 (int **,char const**,char const*,char const*,int *,int,int,TYPE_4__*,int *,int *) ;
 int FUNC_11 (char const*,char const*,char const*,int,TYPE_4__*,int *) ;
 int FUNC_12 (int *,char const**,int ,int ,char*) ;
 int FUNC_13 (int *,int*,int ,int ,int) ;
 int * FUNC_14 (char const*,char*,int,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_15 (char const*,int *) ;
 int FUNC_16 (TYPE_3__*) ;
 TYPE_3__* FUNC_17 (TYPE_3__*) ;
 int * FUNC_18 (scalar_t__,int ) ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_19 (char const**,char const*,int *) ;
 char* FUNC_20 (char const*,char const*,int *) ;
 int FUNC_21 (int *,int const**,void**,void*,char const*,int ,int,int,int const*,void*,int *,int *) ;
 int FUNC_22 (int *,char const**,int *) ;
 int FUNC_23 (int *,int*,int ,int *) ;
 TYPE_3__* FUNC_24 (int *,char const*,int *) ;
 int FUNC_25 (int **,int **,int ,char const*,int ,int *,int *) ;
 int FUNC_26 (int const**,void**,void**,int ,char const*,char const*,int *,int,int ,int,int,int,int,int,char const*,int *,int ,struct svn_client__dirent_fetcher_baton_t*,int *,int *,int *,int *,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *,int *) ;
 int FUNC_27 (int *,int *,char const**,char const**,char const**,int *,int ,char const*,int,int *,int *) ;
 TYPE_3__* FUNC_28 (int*,int*,int *,int ,char const*,int *) ;
 int FUNC_29 (int ,char const*,int const*,void*,int,int ,int,int,int,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 TYPE_1__* FUNC_30 (char const*,int ,int *) ;
 int FUNC_31 (int ,char const*,int ,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 int FUNC_32 (int ,char const*,int ,int ,int (*) (int ,TYPE_1__*,int *),int ,int *) ;
 void* VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_33 (scalar_t__*,int ,char const*,int,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_34(svn_revnum_t *VAR_28,
                svn_boolean_t *VAR_29,
                apr_hash_t *VAR_30,
                svn_ra_session_t **VAR_31,
                const char *VAR_32,
                const char *VAR_33,
                const svn_opt_revision_t *VAR_34,
                svn_depth_t VAR_35,
                svn_boolean_t VAR_36,
                svn_boolean_t VAR_37,
                svn_boolean_t VAR_38,
                svn_boolean_t VAR_39,
                svn_boolean_t VAR_40,
                svn_client_ctx_t *VAR_41,
                apr_pool_t *VAR_42,
                apr_pool_t *VAR_43)
{
  const svn_delta_editor_t *VAR_44;
  void *VAR_45;
  const svn_ra_reporter3_t *VAR_46;
  void *VAR_47;
  const char *VAR_48;
  const char *VAR_49;
  const char *VAR_50;
  const char *VAR_51;
  const char *VAR_52;
  const char *VAR_53;
  svn_revnum_t VAR_54;
  svn_boolean_t VAR_55;
  svn_boolean_t VAR_56 = VAR_0;
  const char *VAR_57;
  apr_hash_t *VAR_58;
  svn_opt_revision_t VAR_59;
  svn_ra_session_t *VAR_60 = *VAR_31;
  const char *VAR_61;
  apr_array_header_t *VAR_62;
  struct svn_client__dirent_fetcher_baton_t VAR_63;
  svn_boolean_t VAR_64;
  svn_boolean_t VAR_65;
  svn_boolean_t VAR_66 = VAR_0;
  svn_config_t *VAR_67 = VAR_41->config
                      ? FUNC_18(VAR_41->config, VAR_1)
                      : ((void*)0);

  if (VAR_28)
    *VAR_28 = VAR_9;


  if (VAR_35 == VAR_17)
    VAR_36 = VAR_0;

  if (FUNC_3(VAR_32, VAR_33))
    VAR_49 = FUNC_15(VAR_32, VAR_43);
  else
    VAR_49 = "";


  FUNC_1(FUNC_27(((void*)0), ((void*)0), &VAR_51, &VAR_50,
                                &VAR_52, ((void*)0),
                                VAR_41->wc_ctx, VAR_33,
                                VAR_12 ,
                                VAR_43, VAR_43));


  if (VAR_51)
    {
      svn_error_t *VAR_68;
      svn_boolean_t VAR_69, VAR_70;

      VAR_53 = FUNC_20(VAR_50, VAR_51,
                                               VAR_43);

      VAR_68 = FUNC_28(&VAR_69, &VAR_70,
                                 ((void*)0),
                                 VAR_41->wc_ctx, VAR_32, VAR_43);

      if (VAR_68 && VAR_68->apr_err != VAR_8)
        return FUNC_17(VAR_68);
      FUNC_16(VAR_68);


      if (!VAR_68 && (VAR_69 || VAR_70))
        VAR_66 = VAR_12;
    }
  else
    VAR_53 = ((void*)0);

  if (! VAR_53 || VAR_66)
    {
      if (VAR_41->notify_func2)
        {
          svn_wc_notify_t *VAR_71;

          VAR_71 = FUNC_30(VAR_32,
                                    VAR_66
                                      ? VAR_23
                                      : VAR_26,
                                    VAR_43);

          VAR_41->notify_func2(VAR_41->notify_baton2, VAR_71, VAR_43);
        }
      return VAR_10;
    }


  VAR_65 = (VAR_36 && VAR_35 < VAR_16);
  if (VAR_65)
    {
      svn_node_kind_t VAR_72;

      if (VAR_35 == VAR_15)
        {
          FUNC_1(FUNC_32(VAR_41->wc_ctx,
                                 VAR_32,
                                 VAR_41->cancel_func, VAR_41->cancel_baton,
                                 VAR_41->notify_func2, VAR_41->notify_baton2,
                                 VAR_43));


          return VAR_10;
        }

      FUNC_1(FUNC_33(&VAR_72, VAR_41->wc_ctx, VAR_32,
                                VAR_12, VAR_12, VAR_43));
      if (VAR_72 == VAR_18)
        {
          FUNC_1(FUNC_31(VAR_41->wc_ctx, VAR_32, VAR_35,
                                    VAR_41->cancel_func, VAR_41->cancel_baton,
                                    VAR_41->notify_func2, VAR_41->notify_baton2,
                                    VAR_43));
        }
    }


  FUNC_1(FUNC_2(&VAR_56, VAR_32, VAR_33,
                      VAR_43));


  FUNC_12(VAR_67, &VAR_57, VAR_5,
                 VAR_2, ((void*)0));

  if (VAR_57 != ((void*)0))
    FUNC_1(FUNC_19(&VAR_57, VAR_57, VAR_43));


  FUNC_1(FUNC_13(VAR_67, &VAR_55,
                              VAR_6,
                              VAR_4, VAR_0));



  FUNC_12(VAR_67, &VAR_61, VAR_6,
                 VAR_3, "");
  VAR_62 = *VAR_61
    ? FUNC_14(VAR_61, "\n\r\t\v ", VAR_0, VAR_43)
    : ((void*)0);



  if (VAR_41->notify_func2 && VAR_40)
    {
      svn_wc_notify_t *VAR_73
        = FUNC_30(VAR_32, VAR_27,
                               VAR_43);
      VAR_73->kind = VAR_19;
      VAR_73->content_state = VAR_73->prop_state
        = VAR_24;
      VAR_73->lock_state = VAR_22;
      VAR_41->notify_func2(VAR_41->notify_baton2, VAR_73, VAR_43);
    }





  if (VAR_60)
    {
      svn_error_t *VAR_74 = FUNC_24(VAR_60, VAR_53, VAR_43);
      if (VAR_74)
        {
          if (VAR_74->apr_err == VAR_7)
            {

              FUNC_16(VAR_74);
              VAR_60 = ((void*)0);
            }
          else
            {
              return FUNC_17(VAR_74);
            }
        }
      else
        {
          VAR_48 = ((void*)0);
        }
    }


  if (!VAR_60)
    {
      FUNC_1(FUNC_10(&VAR_60, &VAR_48,
                                                   VAR_53,
                                                   VAR_33, ((void*)0),
                                                   VAR_12 ,
                                                   VAR_12 ,
                                                   VAR_41,
                                                   VAR_42, VAR_43));
      *VAR_31 = VAR_60;
    }



  if (VAR_48)
    {
      const char *VAR_75;



      FUNC_1(FUNC_22(VAR_60, &VAR_75,
                                     VAR_43));


      FUNC_1(FUNC_11(VAR_33, VAR_50,
                                   VAR_75, VAR_37,
                                   VAR_41, VAR_43));


      VAR_50 = VAR_75;


      VAR_53 = VAR_48;
    }




  VAR_59.kind = VAR_34->kind;
  VAR_59.value = VAR_34->value;
  if (VAR_59.kind == VAR_21)
    VAR_59.kind = VAR_20;



  FUNC_1(FUNC_8(&VAR_54, ((void*)0), VAR_41->wc_ctx,
                                          VAR_32, VAR_60, &VAR_59,
                                          VAR_43));

  FUNC_1(FUNC_23(VAR_60, &VAR_64,
                                VAR_11, VAR_43));

  VAR_63.ra_session = VAR_60;
  VAR_63.target_revision = VAR_54;
  VAR_63.anchor_url = VAR_53;

  FUNC_1(FUNC_7(&VAR_58, VAR_32,
                                            VAR_54, VAR_35, VAR_60,
                                            VAR_41, VAR_43, VAR_43));



  FUNC_1(FUNC_26(&VAR_44, &VAR_45,
                                    &VAR_54, VAR_41->wc_ctx, VAR_33,
                                    VAR_49, VAR_58, VAR_55,
                                    VAR_35, VAR_36,
                                    VAR_38,
                                    VAR_39,
                                    VAR_64,
                                    VAR_56,
                                    VAR_57, VAR_62,
                                    VAR_14, &VAR_63,
                                    VAR_30 ? VAR_13 : ((void*)0),
                                    VAR_30,
                                    ((void*)0), ((void*)0),
                                    VAR_41->cancel_func, VAR_41->cancel_baton,
                                    VAR_41->notify_func2, VAR_41->notify_baton2,
                                    VAR_43, VAR_43));



  FUNC_1(FUNC_21(VAR_60, &VAR_46, &VAR_47,
                            VAR_54, VAR_49,
                            (!VAR_64 || VAR_36
                             ? VAR_35
                             : VAR_17),
                            VAR_0 ,
                            VAR_0 ,
                            VAR_44, VAR_45,
                            VAR_43, VAR_43));



  *VAR_29 = VAR_12;




  FUNC_1(FUNC_29(VAR_41->wc_ctx, VAR_32, VAR_46,
                                  VAR_47, VAR_12,
                                  VAR_35, (! VAR_36),
                                  (! VAR_64),
                                  VAR_55,
                                  VAR_41->cancel_func, VAR_41->cancel_baton,
                                  VAR_41->notify_func2, VAR_41->notify_baton2,
                                  VAR_43));




  if ((FUNC_0(VAR_35) || VAR_65)
      && (! VAR_37))
    {
      apr_hash_t *VAR_76;
      apr_hash_t *VAR_77;
      FUNC_1(FUNC_25(&VAR_76,
                                                   &VAR_77,
                                                   VAR_41->wc_ctx, VAR_32,
                                                   VAR_35,
                                                   VAR_43, VAR_43));

      FUNC_1(FUNC_9(VAR_76,
                                           VAR_77,
                                           VAR_50, VAR_32,
                                           VAR_35, VAR_29, VAR_60,
                                           VAR_41, VAR_43));
    }


  if (VAR_41->notify_func2 && VAR_40)
    {
      svn_wc_notify_t *VAR_78
        = FUNC_30(VAR_32, VAR_25,
                               VAR_43);
      VAR_78->kind = VAR_19;
      VAR_78->content_state = VAR_78->prop_state
        = VAR_24;
      VAR_78->lock_state = VAR_22;
      VAR_78->revision = VAR_54;
      VAR_41->notify_func2(VAR_41->notify_baton2, VAR_78, VAR_43);
    }


  if (VAR_28)
    *VAR_28 = VAR_54;

  return VAR_10;
}
