
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_41__ {int number; } ;
struct TYPE_42__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_43__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_44__ {int wc_ctx; int notify_baton2; int notify_func2; int cancel_baton; int cancel_func; } ;
typedef TYPE_4__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (int ,char const*,char const*,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 TYPE_3__* FUNC_5 (int *,int *,char const*,char const*,TYPE_2__ const*,TYPE_2__ const*,int ,int ,int ,int *,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_6 (int *,char const*,char const*,TYPE_2__ const*,TYPE_2__ const*,int ,int ,int ,int ,int ,int *,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_7 (int *,int *,char const*,TYPE_2__ const*,int ,int ,int ,int ,int ,int ,int ,int *,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_8 (char const**,int *,char const*,TYPE_4__*,int *,int *) ;
 TYPE_3__* FUNC_9 (char const*,char const*,char const*,int ,TYPE_4__*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,int *) ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_3__* FUNC_14 (int ,int *,int ,char const*,int ,int ,int ) ;
 TYPE_3__* FUNC_15 (TYPE_3__*) ;
 TYPE_3__* FUNC_16 (char const*,scalar_t__*,int *) ;
 TYPE_3__* FUNC_17 (char const*,int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char const*,char const*) ;
 int FUNC_21 (char const*,char const*,int *) ;
 TYPE_3__* FUNC_22 (char const*,int ,int *) ;
 TYPE_3__* FUNC_23 (int ,char const*,char const*,scalar_t__,char const*,char const*,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_24 (int ,char const*,char const*,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_25 (char const**,int ,char const*,int *,int *) ;
 TYPE_3__* FUNC_26 (int *,int ,char const*,int *) ;
 TYPE_3__* FUNC_27 (scalar_t__*,int *,int *,char const**,char const**,int *,int ,char const*,int ,int *,int *) ;
 TYPE_3__* FUNC_28 (int *,int *,char const**,char const**,int ,char const*,int *,int *) ;
 TYPE_3__* FUNC_29 (char const**,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_30(const char *VAR_15,
                    const char *VAR_16,
                    const char *VAR_17,
                    const svn_opt_revision_t *VAR_18,
                    const svn_opt_revision_t *VAR_19,
                    const char *VAR_20,
                    svn_boolean_t *VAR_21,
                    svn_ra_session_t *VAR_22,
                    svn_client_ctx_t *VAR_23,
                    apr_pool_t *VAR_24)
{
  svn_node_kind_t VAR_25;
  svn_error_t *VAR_26;
  svn_revnum_t VAR_27 = VAR_6;
  svn_revnum_t VAR_28 = VAR_6;
  apr_pool_t *VAR_29 = FUNC_18(VAR_24);
  const char *VAR_30;
  const char *VAR_31;

  FUNC_1(FUNC_11(VAR_15));

  if (VAR_18->kind == VAR_14)
    VAR_27 = VAR_18->value.number;

  if (VAR_19->kind == VAR_14)
    VAR_28 = VAR_19->value.number;
  FUNC_0(FUNC_27(&VAR_25, ((void*)0), ((void*)0),
                                &VAR_30, &VAR_31,
                                ((void*)0), VAR_23->wc_ctx, VAR_15,
                                VAR_9,
                                VAR_24, VAR_24));
  if (VAR_25 != VAR_13)
    {
      const char *VAR_32;
      const char *VAR_33;

      FUNC_0(FUNC_25(&VAR_32, VAR_23->wc_ctx,
                                 VAR_15, VAR_24, VAR_24));
      FUNC_0(FUNC_25(&VAR_33, VAR_23->wc_ctx,
                                 VAR_20, VAR_24, VAR_24));
      if (FUNC_4(VAR_32, VAR_33) == 0)
        return FUNC_14(VAR_5, ((void*)0),
                                 FUNC_2("The external '%s' defined in %s at '%s' "
                                   "cannot be checked out because '%s' is "
                                   "already a versioned path."),
                                   VAR_17,
                                   VAR_8,
                                   FUNC_12(VAR_20,
                                                          VAR_24),
                                   FUNC_12(VAR_15,
                                                          VAR_24));
    }



  FUNC_0(FUNC_16(VAR_15, &VAR_25, VAR_24));
  if (VAR_25 == VAR_12)
    {
      const char *VAR_34;


      VAR_26 = FUNC_29(&VAR_34, VAR_23->wc_ctx, VAR_15,
                                 VAR_24, VAR_29);
      if (VAR_26 && VAR_26->apr_err == VAR_4)
        {
          FUNC_13(VAR_26);
          VAR_26 = VAR_7;
          goto relegate;
        }
      else if (VAR_26)
        return FUNC_15(VAR_26);

      if (VAR_34)
        {
          svn_boolean_t VAR_35;

          FUNC_0(FUNC_26(&VAR_35, VAR_23->wc_ctx, VAR_15,
                                    VAR_24));

          if (! VAR_35)
          {


            VAR_26 = FUNC_24(VAR_23->wc_ctx, VAR_20,
                                          VAR_15,
                                          VAR_9 ,
                                          VAR_23->cancel_func, VAR_23->cancel_baton,
                                          VAR_24);

            if (VAR_26 && VAR_26->apr_err == VAR_4)
              {

                FUNC_13(VAR_26);
                VAR_26 = ((void*)0);
              }
            else if (VAR_26)
              return FUNC_15(VAR_26);

            return FUNC_14(VAR_5, ((void*)0),
                                     FUNC_2("The external '%s' defined in %s at '%s' "
                                       "cannot be checked out because '%s' is "
                                       "already a versioned path."),
                                     VAR_17,
                                     VAR_8,
                                     FUNC_12(VAR_20,
                                                            VAR_24),
                                     FUNC_12(VAR_15,
                                                            VAR_24));
          }




          if (FUNC_4(VAR_34, VAR_16) == 0)
            {
              FUNC_0(FUNC_7(((void*)0), VAR_21,
                                                  VAR_15,
                                                  VAR_19, VAR_11,
                                                  VAR_0, VAR_0, VAR_0, VAR_9,
                                                  VAR_0, VAR_9,
                                                  VAR_22, VAR_23, VAR_29));




              FUNC_0(FUNC_23(VAR_23->wc_ctx,
                                    VAR_20,
                                    VAR_15, VAR_12,
                                    VAR_30, VAR_31,
                                    FUNC_21(VAR_30,
                                                          VAR_16, VAR_24),
                                    VAR_27,
                                    VAR_28,
                                    VAR_24));

              FUNC_19(VAR_29);
              goto cleanup;
            }
          VAR_26 = FUNC_28(((void*)0), ((void*)0),
                                            &VAR_30, &VAR_31,
                                            VAR_23->wc_ctx, VAR_15,
                                            VAR_24, VAR_29);
          if (VAR_26)
            {
              if (VAR_26->apr_err != VAR_4
                  && VAR_26->apr_err != VAR_3)
                return FUNC_15(VAR_26);

              FUNC_13(VAR_26);
              VAR_30 = ((void*)0);
              VAR_31 = ((void*)0);
            }

          if (VAR_30)
            {



              if (! FUNC_20(VAR_30, VAR_16))
                {
                  const char *VAR_36;



                  FUNC_0(FUNC_8(&VAR_36, ((void*)0), VAR_16,
                                                    VAR_23, VAR_29, VAR_29));



                  VAR_26 = FUNC_9(VAR_15, VAR_30,
                                             VAR_36, VAR_0, VAR_23, VAR_29);




                  if (VAR_26
                      && (VAR_26->apr_err == VAR_2
                          || (VAR_26->apr_err
                              == VAR_1)))
                    {
                      FUNC_13(VAR_26);
                      goto relegate;
                    }
                  else if (VAR_26)
                    return FUNC_15(VAR_26);



                  VAR_30 = VAR_36;
                }

              FUNC_0(FUNC_6(((void*)0), VAR_15, VAR_16,
                                                  VAR_18, VAR_19,
                                                  VAR_10,
                                                  VAR_9, VAR_0, VAR_0,
                                                  VAR_9 ,
                                                  VAR_21,
                                                  VAR_23, VAR_29));

              FUNC_0(FUNC_23(VAR_23->wc_ctx,
                                                VAR_20,
                                                VAR_15, VAR_12,
                                                VAR_30, VAR_31,
                                                FUNC_21(
                                                            VAR_30,
                                                            VAR_16, VAR_29),
                                                VAR_27,
                                                VAR_28,
                                                VAR_29));

              FUNC_19(VAR_29);
              goto cleanup;
            }
        }
    }

 relegate:





  FUNC_19(VAR_29);

  if (VAR_25 == VAR_12)
    {

      FUNC_0(FUNC_3(VAR_23->wc_ctx, VAR_20,
                                    VAR_15,
                                    VAR_23->cancel_func, VAR_23->cancel_baton,
                                    VAR_23->notify_func2, VAR_23->notify_baton2,
                                    VAR_24));
    }
  else
    {


      const char *VAR_37 = FUNC_10(VAR_15, VAR_24);
      FUNC_0(FUNC_17(VAR_37, VAR_24));
    }


  FUNC_0(FUNC_5(((void*)0), VAR_21,
                                        VAR_16, VAR_15, VAR_18,
                                        VAR_19, VAR_10,
                                        VAR_0, VAR_0,
                                        VAR_22,
                                        VAR_23, VAR_24));

  FUNC_0(FUNC_28(((void*)0), ((void*)0),
                                      &VAR_30,
                                      &VAR_31,
                                      VAR_23->wc_ctx, VAR_15,
                                      VAR_24, VAR_24));

  FUNC_0(FUNC_23(VAR_23->wc_ctx,
                                    VAR_20,
                                    VAR_15, VAR_12,
                                    VAR_30, VAR_31,
                                    FUNC_21(VAR_30,
                                                          VAR_16, VAR_24),
                                    VAR_27,
                                    VAR_28,
                                    VAR_24));

 cleanup:


  FUNC_0(FUNC_22(VAR_15, VAR_23->wc_ctx, VAR_24));

  return VAR_7;
}
