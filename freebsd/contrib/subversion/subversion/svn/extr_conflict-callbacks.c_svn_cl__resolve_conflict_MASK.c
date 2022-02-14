
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_25__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cmdline_prompt_baton_t ;
struct TYPE_26__ {int config; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef scalar_t__ svn_client_conflict_option_id_t ;
typedef int svn_cl__conflict_stats_t ;
typedef scalar_t__ svn_cl__accept_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int buf ;
typedef int apr_pool_t ;
struct TYPE_27__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_2 (int *,scalar_t__,scalar_t__,char*,scalar_t__,char const*,int *,TYPE_2__*,int *) ;
 TYPE_1__* FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,int ,char const*,int *,int *,TYPE_2__*,int *,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_1__* FUNC_4 (char const*,char const*,char const*,char const*,char const*,int ,scalar_t__*,int *) ;
 TYPE_1__* FUNC_5 (scalar_t__*,TYPE_3__**,scalar_t__*,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 TYPE_1__* FUNC_11 (int *,char const**,char const**,char const**,int *,int *,int *) ;
 char* FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_1__* FUNC_15 (char const*,char const*,int ,int *) ;
 TYPE_1__* FUNC_16 (int ,int *,char*,char const*) ;
 char* FUNC_17 (TYPE_1__*,char*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int ,TYPE_1__*,char*) ;
 scalar_t__ FUNC_21 (char const*) ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;

svn_error_t *
FUNC_22(svn_boolean_t *VAR_37,
                         svn_boolean_t *VAR_38,
                         svn_boolean_t *VAR_39,
                         svn_client_conflict_t *VAR_40,
                         svn_cl__accept_t VAR_41,
                         const char *VAR_42,
                         const char *VAR_43,
                         svn_cmdline_prompt_baton_t *VAR_44,
                         svn_cl__conflict_stats_t *VAR_45,
                         svn_client_ctx_t *VAR_46,
                         apr_pool_t *VAR_47)
{
  svn_boolean_t VAR_48;
  apr_array_header_t *VAR_49;
  svn_boolean_t VAR_50;
  const char *VAR_51;
  svn_client_conflict_option_id_t VAR_52;

  FUNC_0(FUNC_5(&VAR_48,
                                             &VAR_49,
                                             &VAR_50,
                                             VAR_40,
                                             VAR_47,
                                             VAR_47));
  VAR_51 = FUNC_7(VAR_40);

  if (VAR_41 == VAR_17)
    {
      VAR_52 = VAR_25;
    }
  else if (VAR_41 == VAR_13)
    {
      VAR_52 = VAR_24;
    }
  else if (VAR_41 == VAR_8)
    {
      VAR_52 = VAR_20;
    }
  else if (VAR_41 == VAR_18)
    {
      VAR_52 = VAR_23;

      if (VAR_48)
        {
          const char *VAR_53 =
            FUNC_12(VAR_40);



          if (VAR_53 && FUNC_21(VAR_53))
            VAR_52 = VAR_28;
        }
      else if (VAR_50)
        {


          VAR_52 = VAR_19;
        }
    }
  else if (VAR_41 == VAR_15)
    {
      VAR_52 = VAR_22;
    }
  else if (VAR_41 == VAR_11)
    {
      VAR_52 = VAR_29;

      if (VAR_50)
        {
          svn_wc_operation_t VAR_54;

          VAR_54 = FUNC_9(VAR_40);
          if (VAR_54 == VAR_36 ||
              VAR_54 == VAR_35)
            {
              svn_wc_conflict_reason_t VAR_55;

              VAR_55 = FUNC_8(VAR_40);
              if (VAR_55 == VAR_33)
                {

                  VAR_52 =
                    VAR_27;
                }
              else if (VAR_55 == VAR_32 ||
                       VAR_55 == VAR_34)
                {
                  svn_wc_conflict_action_t VAR_56;
                  svn_node_kind_t VAR_57;

                  VAR_56 = FUNC_6(VAR_40);
                  VAR_57 =
                    FUNC_14(VAR_40);

                  if (VAR_56 == VAR_31 &&
                      VAR_57 == VAR_30)
                    {


                      VAR_52 =
                        VAR_26;
                    }
                }
            }
        }
    }
  else if (VAR_41 == VAR_16)
    {
      VAR_52 = VAR_21;
    }
  else if (VAR_41 == VAR_12)
    {
      VAR_52 = VAR_28;
    }
  else if (VAR_41 == VAR_9)
    {
      VAR_52 = VAR_25;

      if (VAR_51)
        {
          if (*VAR_38)
            {
              VAR_52 = VAR_24;
            }
          else
            {
              svn_error_t *VAR_58;

              VAR_58 = FUNC_15(VAR_51,
                                                      VAR_42,
                                                      VAR_46->config,
                                                      VAR_47);
              if (VAR_58 && (VAR_58->apr_err == VAR_1 ||
                          VAR_58->apr_err == VAR_3))
                {
                  char VAR_59[1024];
                  const char *VAR_60;

                  VAR_60 = FUNC_17(VAR_58, VAR_59, sizeof(VAR_59));
                  FUNC_0(FUNC_16(VAR_7, VAR_47, "%s\n",
                                              VAR_60));
                  FUNC_18(VAR_58);
                  *VAR_38 = VAR_6;
                }
              else if (VAR_58)
                return FUNC_19(VAR_58);
              VAR_52 = VAR_23;
            }
        }
    }
  else if (VAR_41 == VAR_10)
    {
      const char *VAR_61 = ((void*)0);
      const char *VAR_62 = ((void*)0);
      const char *VAR_63 = ((void*)0);

      VAR_52 = VAR_25;

      if (VAR_48)
        FUNC_0(FUNC_11(((void*)0), &VAR_62,
                                                      &VAR_61,
                                                      &VAR_63,
                                                      VAR_40, VAR_47,
                                                      VAR_47));

      if (VAR_61 && VAR_63 && VAR_62 && VAR_51)
        {
          if (*VAR_38)
            {
              VAR_52 = VAR_24;
            }
          else
            {
              svn_boolean_t VAR_64;
              svn_error_t *VAR_65;

              VAR_65 = FUNC_4(VAR_61, VAR_63,
                                                  VAR_62, VAR_51,
                                                  VAR_51, VAR_46->config,
                                                  &VAR_64,
                                                  VAR_47);
              if (VAR_65 && (VAR_65->apr_err == VAR_2 ||
                          VAR_65->apr_err == VAR_3))
                {
                  char VAR_66[1024];
                  const char *VAR_67;

                  VAR_67 = FUNC_17(VAR_65, VAR_66, sizeof(VAR_66));
                  FUNC_0(FUNC_16(VAR_7, VAR_47, "%s\n",
                                              VAR_67));
                  *VAR_38 = VAR_6;
                  return FUNC_19(VAR_65);
                }
              else if (VAR_65)
                return FUNC_19(VAR_65);

              if (VAR_64)
                VAR_52 = VAR_24;
              else
                VAR_52 = VAR_23;
            }
        }
    }
  else if (VAR_41 == VAR_14)
    {
      svn_client_conflict_option_id_t VAR_68;

      if (VAR_50)
        FUNC_0(FUNC_13(VAR_40, VAR_46,
                                                     VAR_47));
      VAR_68 = FUNC_10(VAR_40);
      if (VAR_68 != VAR_25)
        VAR_52 = VAR_68;
      else
        VAR_52 = VAR_24;
    }
  else
    FUNC_1();



  if (VAR_52 == VAR_25)
    {
      svn_boolean_t VAR_69 = VAR_0;
      svn_boolean_t VAR_70 = VAR_0;
      svn_boolean_t VAR_71 = VAR_0;
      svn_error_t *VAR_72;

      *VAR_37 = VAR_0;

      while (!VAR_69 && !VAR_70 && !*VAR_37)
        {
          VAR_72 = FUNC_3(&VAR_69, &VAR_70, VAR_37,
                                               VAR_38,
                                               VAR_39,
                                               &VAR_71,
                                               VAR_40,
                                               VAR_42, VAR_46->config,
                                               VAR_43, VAR_44,
                                               VAR_45, VAR_46,
                                               VAR_47, VAR_47);
          if (VAR_72 && VAR_72->apr_err == VAR_4)
            {



              FUNC_20(VAR_7, VAR_72, "svn: ");
              FUNC_18(VAR_72);
              VAR_72 = VAR_5;
            }
          FUNC_0(VAR_72);
        }
    }
  else if (VAR_52 != VAR_24)
    FUNC_0(FUNC_2(VAR_40, VAR_52,
                                   VAR_48,
                                   VAR_49->nelts > 0 ? "" : ((void*)0),
                                   VAR_50,
                                   VAR_43, VAR_45,
                                   VAR_46, VAR_47));

  return VAR_5;
}
