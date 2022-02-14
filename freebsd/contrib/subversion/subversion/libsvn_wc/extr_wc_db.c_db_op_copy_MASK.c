
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int sdb; int wc_id; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_24__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int const*,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,TYPE_1__*,char const*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,TYPE_1__*,char const*,int,int,int,scalar_t__,int const*,int ,char const*,int ,int *) ;
 int FUNC_6 (int const**,TYPE_1__*,char const*,int ,int,int *,int *) ;
 int FUNC_7 (int *,char const**,int *,int*,scalar_t__*,int*,TYPE_1__*,char const*,TYPE_1__*,int *,int *) ;
 int FUNC_8 (int ,int ,char const*,int ,char const*,int ,int const*,int,int *) ;
 int VAR_7 ;
 int FUNC_9 (int*,int*,int*,int ,char const*,int ,TYPE_1__*,char const*,int *) ;
 int FUNC_10 (int*,TYPE_1__*,char const*) ;
 int FUNC_11 (TYPE_1__*,char const*,int *) ;
 int VAR_8 ;
 TYPE_2__* FUNC_12 (int*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_16 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_17 (char const*,int *) ;
 int FUNC_18 (int *,int,int) ;
 int FUNC_19 (int *,char*,int ,char const*,...) ;
 scalar_t__ FUNC_20 (int *,int) ;
 int FUNC_21 (int **,int ,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int*,int *) ;
 int FUNC_24 (int *) ;
__attribute__((used)) static svn_error_t *
FUNC_25(svn_wc__db_wcroot_t *VAR_11,
           const char *VAR_12,
           svn_wc__db_wcroot_t *VAR_13,
           const char *VAR_14,
           const svn_skel_t *VAR_15,
           int VAR_16,
           apr_pool_t *VAR_17)
{
  const char *VAR_18;
  svn_revnum_t VAR_19;
  svn_wc__db_status_t VAR_20;
  svn_wc__db_status_t VAR_21;
  svn_boolean_t VAR_22;
  apr_int64_t VAR_23;
  int VAR_24;
  int VAR_25;
  int VAR_26;
  svn_node_kind_t VAR_27;
  const apr_array_header_t *VAR_28;

  FUNC_0(FUNC_7(&VAR_23, &VAR_18, &VAR_19,
                            &VAR_20, &VAR_27, &VAR_22,
                            VAR_11, VAR_12, VAR_13,
                            VAR_17, VAR_17));

  FUNC_0(FUNC_9(&VAR_24, &VAR_25,
                            &VAR_26,
                            VAR_23, VAR_18, VAR_19,
                            VAR_13, VAR_14, VAR_17));

  FUNC_1(VAR_27 == VAR_10 || VAR_27 == VAR_9);


  switch (VAR_20)
    {
    case 130:
    case 135:
    case 131:
    case 134:
      VAR_21 = 130;
      break;
    case 133:
      if (VAR_22)
        {


          svn_error_t *VAR_29;
          svn_wc__db_status_t VAR_30;

          VAR_29 = FUNC_12(&VAR_30, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                          VAR_13, VAR_14, VAR_17, VAR_17);

          if (VAR_29)
            {
              if (VAR_29->apr_err == VAR_4)
                FUNC_14(VAR_29);
              else
                return FUNC_16(VAR_29);
            }
          else if (VAR_30 == 133)
            {


              FUNC_0(FUNC_3(VAR_13->sdb, VAR_15,
                                     VAR_17));
              return VAR_6;
            }
        }
      else
        {







           if (! VAR_18)
             {
               FUNC_0(FUNC_3(VAR_13->sdb, VAR_15,
                                     VAR_17));
               return VAR_6;
             }


        }
    case 129:
    case 132:

      if (VAR_25 > 0)
        {
          VAR_24 = VAR_25;
          VAR_25 = -1;
        }
      if (VAR_20 == 132)
        VAR_21 = 132;
      else
        VAR_21 = 129;
      break;
    case 128:
      return FUNC_15(VAR_5, ((void*)0),
                               FUNC_2("Cannot copy '%s' excluded by server"),
                               FUNC_11(VAR_11,
                                                      VAR_12,
                                                      VAR_17));
    default:



      return FUNC_15(VAR_5, ((void*)0),
                               FUNC_2("Cannot handle status of '%s'"),
                               FUNC_11(VAR_11,
                                                      VAR_12,
                                                      VAR_17));
    }

  if (VAR_27 == VAR_9)
    {
      int VAR_31;

      FUNC_0(FUNC_10(&VAR_31, VAR_11, VAR_12));
      FUNC_0(FUNC_6(&VAR_28, VAR_11, VAR_12,
                              VAR_3, VAR_31,
                              VAR_17, VAR_17));
    }
  else
    VAR_28 = ((void*)0);

  if (VAR_11 == VAR_13)
    {
      svn_sqlite__stmt_t *VAR_32;
      const char *VAR_33 = FUNC_17(VAR_14,
                                                           VAR_17);

      FUNC_0(FUNC_21(&VAR_32, VAR_11->sdb,
                                        VAR_1));

      FUNC_0(FUNC_19(VAR_32, "issdst",
                    VAR_11->wc_id, VAR_12,
                    VAR_14,
                    VAR_24,
                    VAR_33,
                    VAR_8, VAR_21));

      if (VAR_16 > 0)
        {
          if (FUNC_13(VAR_14) == VAR_16)
            {






              if (!(VAR_20 == 135 ||
                    (VAR_20 == 134 && VAR_22)))
                FUNC_0(FUNC_18(VAR_32, 7, 1));
            }
          else
            {
              svn_sqlite__stmt_t *VAR_34;
              svn_boolean_t VAR_35;







              FUNC_0(FUNC_21(&VAR_34, VAR_13->sdb,
                                                VAR_2));
              FUNC_0(FUNC_19(VAR_34, "is", VAR_13->wc_id,
                                        VAR_33));
              FUNC_0(FUNC_23(&VAR_35, VAR_34));
              FUNC_1(VAR_35);
              if (FUNC_20(VAR_34, 15) &&
                  VAR_24 == VAR_26)
                {
                  FUNC_0(FUNC_18(VAR_32, 7, 1));
                  FUNC_0(FUNC_22(VAR_34));
                }
              else
                {
                  FUNC_0(FUNC_22(VAR_34));



                  FUNC_0(FUNC_21(&VAR_34,
                                                    VAR_13->sdb,
                                                    VAR_2));
                  FUNC_0(FUNC_19(VAR_34, "is",
                                            VAR_13->wc_id, VAR_12));
                  FUNC_0(FUNC_23(&VAR_35, VAR_34));
                  FUNC_1(VAR_35);
                  if (FUNC_20(VAR_34, 15))
                    FUNC_0(FUNC_18(VAR_32, 7, 1));
                  FUNC_0(FUNC_22(VAR_34));
                }
            }
        }

      FUNC_0(FUNC_24(VAR_32));


      FUNC_0(FUNC_4(VAR_11, VAR_12,
                          VAR_13, VAR_14, VAR_17));

      if (VAR_25 > 0)
        {





          FUNC_0(FUNC_21(&VAR_32, VAR_13->sdb,
                                            VAR_0));
          FUNC_0(FUNC_19(VAR_32, "isdsisrtnt",
                                    VAR_11->wc_id, VAR_14,
                                    VAR_25, VAR_33,
                                    VAR_23, VAR_18,
                                    VAR_19,
                                    VAR_8,
                                       129,

                                    VAR_7, VAR_27));

          FUNC_0(FUNC_24(VAR_32));
        }




      if (VAR_27 == VAR_9
          && VAR_21 == 130)
        FUNC_0(FUNC_8(
                  VAR_13->sdb,
                  VAR_13->wc_id,
                  VAR_14,
                  VAR_23,
                  VAR_18,
                  VAR_19,
                  VAR_28,
                  VAR_24,
                  VAR_17));
    }
  else
    {
      FUNC_0(FUNC_5(VAR_11, VAR_12, VAR_13,
                            VAR_14, VAR_21, VAR_24,
                            VAR_25, VAR_27,
                            VAR_28, VAR_23, VAR_18,
                            VAR_19, VAR_17));
    }

  FUNC_0(FUNC_3(VAR_13->sdb, VAR_15, VAR_17));

  return VAR_6;
}
