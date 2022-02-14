
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;


typedef int svn_subst_eol_style_t ;
struct TYPE_39__ {int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_ra_session_t ;
struct TYPE_40__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
struct TYPE_41__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_42__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_4__ svn_client_ctx_t ;
struct TYPE_43__ {int rev; int url; } ;
typedef TYPE_5__ svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const*,int ,int *) ;
 int FUNC_6 (int *,void const**,int *,int *) ;
 TYPE_2__* FUNC_7 (TYPE_2__ const*,char const*) ;
 TYPE_2__* FUNC_8 (TYPE_2__ const*,char const*) ;
 TYPE_2__* FUNC_9 (TYPE_2__ const*,TYPE_2__ const*) ;
 TYPE_3__* FUNC_10 (int **,int ,char const*,TYPE_2__ const*,scalar_t__,int ,int ,int ,int *,int *) ;
 TYPE_3__* FUNC_11 (int **,TYPE_5__**,char const*,int *,TYPE_2__ const*,TYPE_2__ const*,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_12 (char const**,char const*,int *) ;
 TYPE_3__* FUNC_13 (int ,TYPE_3__*,int ,int ) ;
 TYPE_3__* FUNC_14 (TYPE_3__*) ;
 TYPE_1__* FUNC_15 (int *,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (char const*) ;
 TYPE_3__* FUNC_17 (int *,char*,int ,int *,int *,int **,int *) ;
 TYPE_3__* FUNC_18 (int *,char const**,int *) ;
 TYPE_3__* FUNC_19 (int *) ;
 TYPE_3__* FUNC_20 (int *,int *,int ,int ,int *) ;
 int * FUNC_21 (int *,int *) ;
 TYPE_3__* FUNC_22 (int **,int *,int *,int ,char const*,int ,int *,int *) ;
 int FUNC_23 (int *,char const**,int *) ;
 int VAR_11 ;
 int * FUNC_24 (int *,char const*,int ,int *,int ,int *) ;
 TYPE_3__* FUNC_25 (int *,int *,int *) ;
 int FUNC_26 (void const*) ;
 TYPE_3__* FUNC_27 (int **,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_28(apr_hash_t **VAR_12,
                svn_stream_t *VAR_13,
                const char *VAR_14,
                const svn_opt_revision_t *VAR_15,
                const svn_opt_revision_t *VAR_16,
                svn_boolean_t VAR_17,
                svn_client_ctx_t *VAR_18,
                apr_pool_t *VAR_19,
                apr_pool_t *VAR_20)
{
  svn_ra_session_t *VAR_21;
  svn_client__pathrev_t *VAR_22;
  svn_string_t *VAR_23;
  svn_string_t *VAR_24;
  apr_hash_t *VAR_25 = ((void*)0);
  const char *VAR_26;
  svn_stream_t *VAR_27 = VAR_13;
  svn_error_t *VAR_28;


  if (VAR_15->kind == VAR_10)
    {
      VAR_15 = FUNC_8(VAR_15,
                                                            VAR_14);
      VAR_16 = FUNC_7(VAR_16, VAR_14);
    }
  else
    {
      VAR_16 = FUNC_9(VAR_16, VAR_15);
    }

  if (! FUNC_16(VAR_14)
      && FUNC_0(VAR_15->kind)
      && FUNC_0(VAR_16->kind))
    {
      const char *VAR_29;
      svn_stream_t *VAR_30;

      FUNC_1(FUNC_12(&VAR_29, VAR_14,
                                      VAR_20));
      FUNC_1(FUNC_10(&VAR_30, VAR_18->wc_ctx,
                                            VAR_29, VAR_16,
                                            VAR_17, VAR_0,
                                            VAR_18->cancel_func, VAR_18->cancel_baton,
                                            VAR_20, VAR_20));


      VAR_27 = FUNC_21(VAR_27, VAR_20);

      if (VAR_12)
        FUNC_1(FUNC_27(VAR_12, VAR_18->wc_ctx, VAR_29,
                                  VAR_19, VAR_20));

      return FUNC_14(FUNC_20(VAR_30, VAR_27,
                                              VAR_18->cancel_func,
                                              VAR_18->cancel_baton, VAR_20));
    }


  FUNC_1(FUNC_11(&VAR_21, &VAR_22,
                                            VAR_14, ((void*)0),
                                            VAR_15,
                                            VAR_16, VAR_18, VAR_20));


  FUNC_1(FUNC_18(VAR_21, &VAR_26, VAR_20));



  VAR_28 = FUNC_17(VAR_21, "", VAR_22->rev, ((void*)0), ((void*)0), &VAR_25,
                        VAR_19);
  if (VAR_28)
    {
      if (VAR_28->apr_err == VAR_2)
        {
          return FUNC_13(VAR_1, VAR_28,
                                   FUNC_2("URL '%s' refers to a directory"),
                                   VAR_22->url);
        }
      else
        {
          return FUNC_14(VAR_28);
        }
    }

  VAR_23 = FUNC_15(VAR_25, VAR_7);
  VAR_24 = FUNC_15(VAR_25, VAR_8);

  if (VAR_23 || VAR_24)
    {

      svn_subst_eol_style_t VAR_31;
      const char *VAR_32;
      apr_hash_t *VAR_33;

      if (VAR_23)
        FUNC_23(&VAR_31, &VAR_32, VAR_23->data);
      else
        {
          VAR_31 = VAR_11;
          VAR_32 = ((void*)0);
        }


      if (VAR_24 && VAR_17)
        {
          svn_string_t *VAR_34, *VAR_35, *VAR_36;
          apr_time_t VAR_37 = 0;

          VAR_34 = FUNC_15(VAR_25, VAR_5);
          VAR_35 = FUNC_15(VAR_25, VAR_4);
          VAR_36 = FUNC_15(VAR_25, VAR_6);
          if (VAR_35)
            FUNC_1(FUNC_25(&VAR_37, VAR_35->data, VAR_20));

          FUNC_1(FUNC_22(&VAR_33, VAR_24->data,
                                            VAR_34->data, VAR_22->url,
                                            VAR_26, VAR_37,
                                            VAR_36 ?
                                              VAR_36->data : ((void*)0),
                                            VAR_20));
        }
      else
        VAR_33 = ((void*)0);


      VAR_27 = FUNC_24(FUNC_21(VAR_13,
                                                             VAR_20),
                                           VAR_32, VAR_0, VAR_33, VAR_9,
                                           VAR_20);
    }

  if (VAR_12)
    {

      apr_hash_index_t *VAR_38;
      const void *VAR_39;
      apr_ssize_t VAR_40;

      for (VAR_38 = FUNC_3(VAR_20, VAR_25);
           VAR_38; VAR_38 = FUNC_4(VAR_38))
        {
          FUNC_6(VAR_38, &VAR_39, &VAR_40, ((void*)0));
          if (!FUNC_26(VAR_39))
            FUNC_5(VAR_25, VAR_39, VAR_40, ((void*)0));
        }

      *VAR_12 = VAR_25;
    }

  FUNC_1(FUNC_17(VAR_21, "", VAR_22->rev, VAR_27, ((void*)0), ((void*)0),
                          VAR_20));

  if (VAR_13 != VAR_27)

    FUNC_1(FUNC_19(VAR_27));

  return VAR_3;
}
