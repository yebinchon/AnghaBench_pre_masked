
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char const*) ;
 int * FUNC_4 (char const**,char const**,char const*,int*,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;
 int VAR_7 ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 char const* FUNC_8 (char const*,int *) ;
 char* FUNC_9 (char const*,int *) ;
 char* FUNC_10 (char const*,char const*,int *) ;
 char* FUNC_11 (char const*,int,int *) ;
 char const* FUNC_12 (char const*,char const*) ;
 int * FUNC_13 (int *,char*,int ,char const*) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (int *,int) ;
 char* FUNC_19 (int *,int,int *) ;
 scalar_t__ FUNC_20 (int *,int,int ) ;
 int * FUNC_21 (int **,int ,int ) ;
 int * FUNC_22 (int *) ;
 int * FUNC_23 (scalar_t__*,int *) ;
 int * FUNC_24 (int *,int *,int *,char const**,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static svn_error_t *
FUNC_25(svn_wc__db_status_t *VAR_13,
              const char **VAR_14,
              const char **VAR_15,
              apr_int64_t *VAR_16,
              const char **VAR_17,
              apr_int64_t *VAR_18,
              svn_revnum_t *VAR_19,
              const char **VAR_20,
              const char **VAR_21,
              int *VAR_22,
              svn_wc__db_wcroot_t *VAR_23,
              const char *VAR_24,
              apr_pool_t *VAR_25,
              apr_pool_t *VAR_26)
{
  const char *VAR_27;
  const char *VAR_28 = "";





  if (VAR_14)
    *VAR_14 = ((void*)0);
  if (VAR_17)
    *VAR_17 = ((void*)0);
  if (VAR_18)
    *VAR_18 = VAR_0;
  if (VAR_19)
    *VAR_19 = VAR_4;
  if (VAR_20)
    *VAR_20 = ((void*)0);
  if (VAR_21)
    *VAR_21 = ((void*)0);
  if (VAR_22)
    *VAR_22 = 0;

  {
    svn_sqlite__stmt_t *VAR_29;
    svn_boolean_t VAR_30;
    svn_wc__db_status_t VAR_31;
    int VAR_32;
    const char *VAR_33;


    FUNC_0(FUNC_21(&VAR_29, VAR_23->sdb,
                                      VAR_1));
    FUNC_0(FUNC_13(VAR_29, "is", VAR_23->wc_id, VAR_24));
    FUNC_0(FUNC_23(&VAR_30, VAR_29));

    if (!VAR_30)
      {

        FUNC_0(FUNC_22(VAR_29));


        return FUNC_7(VAR_2, ((void*)0),
                                 FUNC_2("The node '%s' was not found."),
                                 FUNC_5(VAR_23,
                                                        VAR_24,
                                                        VAR_26));
      }

    VAR_31 = FUNC_20(VAR_29, 1, VAR_7);


    VAR_32 = FUNC_15(VAR_29, 0);
    if (VAR_32 == 0 || (VAR_31 != VAR_12
                          && VAR_31 != VAR_10))

      return FUNC_7(VAR_3,
                               FUNC_22(VAR_29),
                               FUNC_2("Expected node '%s' to be added."),
                               FUNC_5(VAR_23,
                                                      VAR_24,
                                                      VAR_26));

    if (VAR_19)
      *VAR_19 = FUNC_18(VAR_29, 12);


    if (VAR_13)
      {
        if (VAR_31 == VAR_12)
          *VAR_13 = VAR_8;
        else
          *VAR_13 = VAR_10;
      }



    VAR_27 = FUNC_11(VAR_24, VAR_32,
                                         VAR_26);
    VAR_33 = FUNC_12(VAR_27,
                                                  VAR_24);

    if (VAR_14)
      *VAR_14 = FUNC_3(VAR_25, VAR_27);





    if (VAR_17
        || VAR_18
        || (VAR_19
                && *VAR_19 == VAR_4)
        || VAR_13
        || VAR_20 || VAR_21)
      {
        if (VAR_24 != VAR_27)

          {
            FUNC_0(FUNC_22(VAR_29));

            FUNC_0(FUNC_13(VAR_29, "is",
                                      VAR_23->wc_id, VAR_27));
            FUNC_0(FUNC_23(&VAR_30, VAR_29));

            if (!VAR_30)
              {

                FUNC_0(FUNC_22(VAR_29));


                return FUNC_7(VAR_2, ((void*)0),
                                         FUNC_2("The node '%s' was not found."),
                                         FUNC_5(VAR_23,
                                                                VAR_27,
                                                                VAR_26));
              }

            if (VAR_19
                    && *VAR_19 == VAR_4)
              *VAR_19 = FUNC_18(VAR_29, 12);
          }

        if (VAR_17)
          *VAR_17 = FUNC_19(VAR_29, 11,
                                                            VAR_25);

        if (!FUNC_17(VAR_29, 10)
            && (VAR_13
                || VAR_18
                || VAR_20 || VAR_21))


          {
            svn_boolean_t VAR_34;
            if (VAR_18)
              *VAR_18 = FUNC_16(VAR_29, 10);

            VAR_34 = FUNC_14(VAR_29, 13 );
            if (VAR_13)
              *VAR_13 = VAR_34 ? VAR_11
                                   : VAR_9;

            if (VAR_34
                && (VAR_20 || VAR_21))
              {
                svn_error_t *VAR_35;

                VAR_35 = FUNC_4(VAR_20,
                                          VAR_21,
                                          VAR_27,
                                          VAR_22,
                                          VAR_23, VAR_24,
                                          VAR_25,
                                          VAR_26);

                if (VAR_35)
                  return FUNC_6(
                                VAR_35, FUNC_22(VAR_29));
              }
          }
      }






    if (VAR_15 || VAR_16)
      {
        const char *VAR_36;

        while (VAR_6)
          {
            const char *VAR_37;

            FUNC_0(FUNC_22(VAR_29));


            VAR_33 =
                FUNC_10(FUNC_8(VAR_27, ((void*)0)),
                                 VAR_33,
                                 VAR_26);
            VAR_27 = FUNC_9(VAR_27, VAR_26);


            FUNC_0(FUNC_13(VAR_29, "is", VAR_23->wc_id, VAR_27));
            FUNC_0(FUNC_23(&VAR_30, VAR_29));

            if (! VAR_30)
              break;

            VAR_32 = FUNC_15(VAR_29, 0);


            VAR_37 = VAR_27;

            VAR_27 = FUNC_11(VAR_27, VAR_32,
                                                 VAR_26);
            VAR_33 = FUNC_10(
                                                 FUNC_12(VAR_27, VAR_37),
                                                 VAR_33, VAR_26);
          }

      FUNC_0(FUNC_22(VAR_29));

      VAR_28 = VAR_33;





      FUNC_0(FUNC_24(((void*)0), ((void*)0), ((void*)0),
                                                &VAR_36, VAR_16,
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                VAR_23, VAR_27,
                                                VAR_26, VAR_26));

        if (VAR_15)
          *VAR_15 = FUNC_10(VAR_36, VAR_28,
                                            VAR_25);
      }
    else
      FUNC_0(FUNC_22(VAR_29));
  }
  return VAR_5;
}
