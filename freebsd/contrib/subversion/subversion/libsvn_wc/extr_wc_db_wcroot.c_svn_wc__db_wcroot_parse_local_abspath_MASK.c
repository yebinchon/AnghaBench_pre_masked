
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int svn_wc__db_wcroot_t ;
struct TYPE_33__ {int state_pool; int dir_data; int verify_format; int timeout; int exclusive; } ;
typedef TYPE_1__ svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__db_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_34__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
struct TYPE_35__ {int size; } ;
typedef TYPE_3__ apr_finfo_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (int *,char const*,int *) ;
 TYPE_2__* FUNC_6 (int *,int*,int *,int *) ;
 TYPE_2__* FUNC_7 (int*,char const*,int *) ;
 TYPE_2__* FUNC_8 (scalar_t__*,TYPE_1__*,char const*,int *) ;
 TYPE_2__* FUNC_9 (char const**,char const*,int *) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (char const*,int *) ;
 scalar_t__ FUNC_13 (char const*,int ) ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int FUNC_15 (char const*,int *) ;
 int FUNC_16 (char const**,char const**,char const*,int *) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_2__* FUNC_18 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_19 (scalar_t__,TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_20 (TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_21 (TYPE_2__*) ;
 int * FUNC_22 (int ,char const*) ;
 int FUNC_23 (int ,int ,int *) ;
 TYPE_2__* FUNC_24 (char const*,scalar_t__*,int *) ;
 TYPE_2__* FUNC_25 (char const*,scalar_t__*,int *) ;
 TYPE_2__* FUNC_26 (TYPE_3__*,char const*,int ,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 char* FUNC_27 (char const*,char const*,int *) ;
 TYPE_2__* FUNC_28 (int *) ;
 TYPE_2__* FUNC_29 (int *,int ) ;
 int VAR_18 ;
 char* FUNC_30 (char const*,int ,int *) ;
 TYPE_2__* FUNC_31 (int **,int ,int *,int ,int,int ,int ,int *) ;
 TYPE_2__* FUNC_32 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_2__* FUNC_33 (int **,char const*,int ,int ,int ,int ,int *,int ,int *) ;
 char* FUNC_34 (int *) ;

svn_error_t *
FUNC_35(svn_wc__db_wcroot_t **VAR_22,
                                      const char **VAR_23,
                                      svn_wc__db_t *VAR_24,
                                      const char *VAR_25,
                                      apr_pool_t *VAR_26,
                                      apr_pool_t *VAR_27)
{
  const char *VAR_28;
  const char *VAR_29 = VAR_25;
  svn_node_kind_t VAR_30;
  const char *VAR_31;
  svn_wc__db_wcroot_t *VAR_32;
  svn_wc__db_wcroot_t *VAR_33 = ((void*)0);
  const char *VAR_34;
  svn_sqlite__db_t *VAR_35 = ((void*)0);
  svn_boolean_t VAR_36 = VAR_1;
  svn_boolean_t VAR_37 = VAR_1;
  int VAR_38 = 0;
  const char *VAR_39;

  const char *VAR_40 = ((void*)0);





  VAR_32 = FUNC_22(VAR_24->dir_data, VAR_25);
  if (VAR_32 != ((void*)0))
    {
      *VAR_22 = VAR_32;






      *VAR_23 = FUNC_5(VAR_32, VAR_25,
                                       VAR_26);

      return VAR_10;
    }





  FUNC_1(FUNC_8(&VAR_30, VAR_24, VAR_25, VAR_27));
  if (VAR_30 != VAR_15)
    {
      FUNC_16(&VAR_28, &VAR_31, VAR_25,
                       VAR_27);


      VAR_32 = FUNC_22(VAR_24->dir_data, VAR_28);
      if (VAR_32 != ((void*)0))
        {
          const char *VAR_41;

          *VAR_22 = VAR_32;


          VAR_41 = FUNC_5(VAR_32, VAR_28,
                                        ((void*)0));
          *VAR_23 = FUNC_27(VAR_41,
                                            VAR_31,
                                            VAR_26);
          return VAR_10;
        }





      if (VAR_30 == VAR_16)
        VAR_37 = VAR_13;


      VAR_25 = VAR_28;
    }
  else
    {


      VAR_31 = "";


      VAR_28 = VAR_25;
    }
  VAR_39 = FUNC_34(VAR_27);
  while (VAR_13)
    {
      svn_error_t *VAR_42;
      svn_node_kind_t VAR_43;

      const char *VAR_44 = FUNC_14(VAR_25, VAR_39,
                                               VAR_27);

      FUNC_1(FUNC_24(VAR_44, &VAR_43, VAR_27));

      if (VAR_43 == VAR_15)
        {
          VAR_42 = FUNC_33(&VAR_35, VAR_25, VAR_2,
                                        VAR_18,
                                        VAR_24->exclusive, VAR_24->timeout, ((void*)0),
                                        VAR_24->state_pool, VAR_27);
          if (VAR_42 == ((void*)0))
            {
              break;
            }
          if (VAR_42->apr_err != VAR_4
              && !FUNC_0(VAR_42->apr_err))
            return FUNC_21(VAR_42);
          FUNC_17(VAR_42);
          if (!VAR_36 || VAR_37)
            {
              FUNC_1(FUNC_7(&VAR_38, VAR_25,
                                      VAR_27));
              if (VAR_38 != 0)
                break;
            }
        }



      if (FUNC_13(VAR_25, FUNC_11(VAR_25)))
        {






          if (VAR_30 == VAR_17)
            {
              svn_node_kind_t VAR_45;

              VAR_25 = VAR_29;

              FUNC_1(FUNC_25(VAR_25,
                                                 &VAR_45,
                                                 VAR_27));
              if (VAR_45 == VAR_15)
                {

                  VAR_33 = FUNC_22(VAR_24->dir_data, VAR_25);
                  if (VAR_33)
                    break;

                  VAR_40 = VAR_25;
                  FUNC_1(FUNC_9(&VAR_25, VAR_25,
                                           VAR_27));
try_symlink_as_dir:
                  VAR_30 = VAR_15;
                  VAR_36 = VAR_1;
                  VAR_28 = VAR_25;
                  VAR_31 = "";

                  continue;
                }
            }

          return FUNC_19(VAR_6, ((void*)0),
                                   FUNC_3("'%s' is not a working copy"),
                                   FUNC_15(VAR_29,
                                                          VAR_27));
        }

      VAR_25 = FUNC_12(VAR_25, VAR_27);

      VAR_36 = VAR_13;
      VAR_40 = ((void*)0);


      VAR_33 = FUNC_22(VAR_24->dir_data, VAR_25);
      if (VAR_33 != ((void*)0))
        break;
    }

  if (VAR_33 != ((void*)0))
    {


      *VAR_22 = VAR_33;
    }
  else if (VAR_38 == 0)
    {


      apr_int64_t VAR_46;
      int VAR_47;
      svn_error_t *VAR_48;

      VAR_48 = FUNC_6(&VAR_46, &VAR_47, VAR_35, VAR_27);
      if (VAR_48)
        {
          if (VAR_48->apr_err == VAR_5)
            return FUNC_20(
              VAR_48, FUNC_3("Missing a row in WCROOT for '%s'."),
              FUNC_15(VAR_29, VAR_27));
          return FUNC_21(VAR_48);
        }





      VAR_48 = FUNC_31(VAR_22,
                            FUNC_4(VAR_24->state_pool,
                                        VAR_40
                                          ? VAR_40
                                          : VAR_25),
                            VAR_35, VAR_46, VAR_47,
                            VAR_24->verify_format,
                            VAR_24->state_pool, VAR_27);
      if (VAR_48 && (VAR_48->apr_err == VAR_8 ||
                  VAR_48->apr_err == VAR_9) &&
          VAR_30 == VAR_17)
        {



          FUNC_17(VAR_48);
          *VAR_22 = ((void*)0);
        }
      else if (VAR_48)
        {


          return FUNC_18(VAR_48, FUNC_28(VAR_35));
        }
    }
  else
    {




      if (VAR_38 == VAR_12 )
        {
          apr_finfo_t VAR_49;


          const char *VAR_50 = FUNC_30(
              VAR_25, VAR_11, VAR_27);
          svn_error_t *VAR_51 = FUNC_26(&VAR_49, VAR_50, VAR_0,
                                         VAR_27);


          if (VAR_51)
            return FUNC_19(
                VAR_5, VAR_51,
                FUNC_3("The working copy at '%s' is corrupt."),
                FUNC_15(VAR_25, VAR_27));
          FUNC_17(VAR_51);

          if (3 == VAR_49.size)
            {

              VAR_50 = FUNC_30(VAR_25, VAR_2,
                                                VAR_27);
              VAR_51 = FUNC_26(&VAR_49, VAR_50, VAR_0,
                                VAR_27);
              if (VAR_51 && FUNC_0(VAR_51->apr_err))
                {
                  FUNC_17(VAR_51);
                  return FUNC_19(
                      VAR_5, ((void*)0),
                      FUNC_3("The working copy database at '%s' is missing."),
                      FUNC_15(VAR_25, VAR_27));
                }
              else



                return FUNC_19(
                    VAR_5, VAR_51,
                    FUNC_3("The working copy database at '%s' is corrupt."),
                    FUNC_15(VAR_25, VAR_27));
            }
        }

      FUNC_1(FUNC_31(VAR_22,
                            FUNC_4(VAR_24->state_pool,
                                        VAR_40
                                          ? VAR_40
                                          : VAR_25),
                            ((void*)0), VAR_14, VAR_38,
                            VAR_24->verify_format,
                            VAR_24->state_pool, VAR_27));
    }

  if (*VAR_22)
    {
      const char *VAR_52;

      if (VAR_40)
        {


          VAR_28 = VAR_40;
        }



      VAR_52 = FUNC_5(*VAR_22, VAR_28, ((void*)0));


      *VAR_23 = FUNC_27(VAR_52, VAR_31, VAR_26);
    }

  if (VAR_30 == VAR_17)
    {
      svn_boolean_t VAR_53 = VAR_1;
      svn_wc__db_status_t VAR_54;
      svn_boolean_t VAR_55;
      svn_error_t *VAR_56;






      if (*VAR_22)
        {
          VAR_56 = FUNC_32(&VAR_54, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                              ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                              ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                              ((void*)0), ((void*)0), ((void*)0), &VAR_55,
                                              ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                              ((void*)0), *VAR_22, *VAR_23,
                                              VAR_27, VAR_27);
          if (VAR_56)
            {
              if (VAR_56->apr_err != VAR_7
                  && !FUNC_2(VAR_56))
                return FUNC_21(VAR_56);

              FUNC_17(VAR_56);
              VAR_53 = VAR_13;
            }
          else
            {




              VAR_53 = ((VAR_54 == VAR_20 ||
                               VAR_54 == VAR_19 ||
                               VAR_54 == VAR_21)
                              && !VAR_55);
            }
        }
      else
        VAR_53 = VAR_13;

      if (VAR_53)
        {
          svn_node_kind_t VAR_57;

          FUNC_1(FUNC_25(VAR_29,
                                             &VAR_57,
                                             VAR_27));
          if (VAR_57 == VAR_15)
            {
              VAR_40 = VAR_29;
              FUNC_1(FUNC_9(&VAR_25, VAR_29,
                                       VAR_27));


              if (VAR_35)
                FUNC_1(FUNC_28(VAR_35));
              goto try_symlink_as_dir;
            }
        }
    }



  FUNC_23(VAR_24->dir_data,
                FUNC_4(VAR_24->state_pool, VAR_28),
                *VAR_22);


  if (!VAR_36)
    {



      return VAR_10;
    }






  VAR_34 = VAR_28;

  do
    {
      const char *VAR_58 = FUNC_12(VAR_34, VAR_27);
      svn_wc__db_wcroot_t *VAR_59;

      VAR_59 = FUNC_22(VAR_24->dir_data, VAR_58);
      if (VAR_59 == ((void*)0))
        {
          FUNC_23(VAR_24->dir_data, FUNC_4(VAR_24->state_pool, VAR_58),
                        *VAR_22);
        }



      VAR_34 = VAR_58;
    }
  while (FUNC_10(VAR_34, VAR_25) != 0);

  return VAR_10;
}
