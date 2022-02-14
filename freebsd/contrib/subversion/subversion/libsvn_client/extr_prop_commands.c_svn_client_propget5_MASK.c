
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_prop_inherited_item_t ;
struct TYPE_40__ {void* number; } ;
struct TYPE_41__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_42__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_43__ {int wc_ctx; } ;
typedef TYPE_4__ svn_client_ctx_t ;
struct TYPE_44__ {void* rev; int url; } ;
typedef TYPE_5__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,int ,int) ;
 int * FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (char const*) ;
 TYPE_3__* FUNC_8 (int **,char const*,char const*,int,scalar_t__,int ,int const*,TYPE_4__*,int *,int *) ;
 TYPE_2__* FUNC_9 (TYPE_2__ const*,char const*) ;
 TYPE_2__* FUNC_10 (TYPE_2__ const*,TYPE_2__ const*) ;
 TYPE_3__* FUNC_11 (void**,int *,int ,char const*,int *,TYPE_2__ const*,int *) ;
 TYPE_3__* FUNC_12 (int *,char const*,int *,int *) ;
 TYPE_3__* FUNC_13 (int **,TYPE_5__**,char const*,int *,TYPE_2__ const*,TYPE_2__ const*,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_14 (int *,int **,char const*,int ,char*,scalar_t__,void*,int *,int ,int *,int *) ;
 TYPE_3__* FUNC_15 (char const**,int *,char const*,TYPE_4__*,int *,int *) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (char const*,int *) ;
 int FUNC_18 (TYPE_3__*) ;
 TYPE_3__* FUNC_19 (int ,int *,int *) ;
 TYPE_3__* FUNC_20 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_21 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_22 (char const*) ;
 char* FUNC_23 (char const*,char const*,int *) ;
 TYPE_3__* FUNC_24 (int *,char*,void*,scalar_t__*,int *) ;
 TYPE_3__* FUNC_25 (int **,int ,char const*,char const*,int *,int *) ;
 TYPE_3__* FUNC_26 (int *,int *,char const**,char const**,int *,int *,int *,int ,char const*,int ,int *,int *) ;
 TYPE_3__* FUNC_27 (scalar_t__*,int ,char const*,int,int ,int *) ;

svn_error_t *
FUNC_28(apr_hash_t **VAR_14,
                    apr_array_header_t **VAR_15,
                    const char *VAR_16,
                    const char *VAR_17,
                    const svn_opt_revision_t *VAR_18,
                    const svn_opt_revision_t *VAR_19,
                    svn_revnum_t *VAR_20,
                    svn_depth_t VAR_21,
                    const apr_array_header_t *VAR_22,
                    svn_client_ctx_t *VAR_23,
                    apr_pool_t *VAR_24,
                    apr_pool_t *VAR_25)
{
  svn_revnum_t VAR_26;
  svn_boolean_t VAR_27;
  svn_boolean_t VAR_28;

  FUNC_2(FUNC_7(VAR_16));
  if (!FUNC_22(VAR_17))
    FUNC_3(FUNC_16(VAR_17));

  VAR_18 = FUNC_9(VAR_18,
                                                        VAR_17);
  VAR_19 = FUNC_10(VAR_19, VAR_18);

  VAR_27 =
    (! FUNC_22(VAR_17)
     && FUNC_0(VAR_18->kind)
     && FUNC_0(VAR_19->kind));

  VAR_28 =
    (VAR_27
     && (VAR_18->kind == VAR_13
         || VAR_18->kind == VAR_12 )
     && (VAR_19->kind == VAR_13
         || VAR_19->kind == VAR_12 ));

  if (VAR_27)
    {
      svn_node_kind_t VAR_29;
      svn_boolean_t VAR_30;
      svn_error_t *VAR_31;


      VAR_30 = (VAR_19->kind == VAR_10
                  || VAR_19->kind == VAR_9);

      FUNC_2(FUNC_27(&VAR_29, VAR_23->wc_ctx, VAR_17,
                                VAR_30, VAR_0,
                                VAR_25));

      if (VAR_29 == VAR_8 || VAR_29 == VAR_7)
        {


          return FUNC_20(VAR_3, ((void*)0),
                                   FUNC_4("'%s' is not under version control"),
                                   FUNC_17(VAR_17,
                                                          VAR_25));
        }

      VAR_31 = FUNC_11(&VAR_26, ((void*)0), VAR_23->wc_ctx,
                                            VAR_17, ((void*)0), VAR_19,
                                            VAR_25);
      if (VAR_31 && VAR_31->apr_err == VAR_1)
        {
          FUNC_18(VAR_31);
          VAR_26 = VAR_4;
        }
      else if (VAR_31)
        return FUNC_21(VAR_31);

      if (VAR_15 && VAR_28)
        {
          const char *VAR_32;

          FUNC_2(FUNC_25(VAR_15, VAR_23->wc_ctx,
                                     VAR_17, VAR_16,
                                     VAR_24, VAR_25));
          FUNC_2(FUNC_15(&VAR_32, ((void*)0),
                                            VAR_17, VAR_23, VAR_25,
                                            VAR_25));
          FUNC_2(FUNC_12(*VAR_15,
                                                     VAR_32,
                                                     VAR_24,
                                                     VAR_25));
        }

      FUNC_2(FUNC_8(VAR_14, VAR_16, VAR_17,
                               VAR_30, VAR_29,
                               VAR_21, VAR_22, VAR_23, VAR_24,
                               VAR_25));
    }

  if ((VAR_15 && !VAR_28)
      || !VAR_27)
    {
      svn_ra_session_t *VAR_33;
      svn_node_kind_t VAR_34;
      svn_opt_revision_t VAR_35;
      svn_opt_revision_t VAR_36;




      if (FUNC_1(VAR_18->kind)
          || FUNC_1(VAR_19->kind))
        {
          const char *VAR_37;
          const char *VAR_38;
          const char *VAR_39;



          if (FUNC_22(VAR_17))
            return FUNC_19(VAR_2,
                                    ((void*)0), ((void*)0));

          FUNC_3(FUNC_16(VAR_17));
          VAR_39 = VAR_17;

          if (FUNC_1(VAR_18->kind))
            {
              FUNC_2(FUNC_26(((void*)0), ((void*)0),
                                              &VAR_37,
                                              &VAR_38,
                                              ((void*)0), ((void*)0), ((void*)0),
                                              VAR_23->wc_ctx,
                                              VAR_39,
                                              VAR_0,
                                              VAR_24,
                                              VAR_25));
              if (VAR_37)
                {
                  VAR_17 = FUNC_23(VAR_38,
                                                       VAR_37,
                                                       VAR_25);
                  if (FUNC_1(VAR_18->kind))
                    {
                      svn_revnum_t VAR_40;

                      FUNC_2(FUNC_11(
                        &VAR_40, ((void*)0), VAR_23->wc_ctx,
                        VAR_39, ((void*)0), VAR_18, VAR_25));
                      VAR_36.kind = VAR_11;
                      VAR_36.value.number = VAR_40;
                      VAR_18 = &VAR_36;
                    }

                  if (FUNC_1(VAR_19->kind))
                    {
                      svn_revnum_t VAR_41;

                      FUNC_2(FUNC_11(
                        &VAR_41, ((void*)0), VAR_23->wc_ctx,
                        VAR_39, ((void*)0), VAR_19, VAR_25));
                      VAR_35.kind = VAR_11;
                      VAR_35.value.number = VAR_41;
                      VAR_19 = &VAR_35;
                    }
                }
              else
                {


                  VAR_28 = VAR_6;
                  *VAR_15 = FUNC_5(
                    VAR_24, 0, sizeof(svn_prop_inherited_item_t *));
                }
            }
        }


      if (!VAR_27 || !VAR_28)
        {
          svn_client__pathrev_t *VAR_42;


          FUNC_2(FUNC_13(&VAR_33, &VAR_42,
                                                    VAR_17, ((void*)0),
                                                    VAR_18,
                                                    VAR_19, VAR_23,
                                                    VAR_25));

          FUNC_2(FUNC_24(VAR_33, "", VAR_42->rev, &VAR_34,
                                    VAR_25));

          if (!VAR_27)
            *VAR_14 = FUNC_6(VAR_24);

          FUNC_2(FUNC_14(
                                 !VAR_27 ? *VAR_14 : ((void*)0),
                                 !VAR_28 ? VAR_15 : ((void*)0),
                                 VAR_16, VAR_42->url, "",
                                 VAR_34, VAR_42->rev, VAR_33,
                                 VAR_21, VAR_24, VAR_25));
          VAR_26 = VAR_42->rev;
        }
    }

  if (VAR_20)
    *VAR_20 = VAR_26;
  return VAR_5;
}
