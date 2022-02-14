
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int const*,int *) ;
 int FUNC_3 (int*,TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int *,char*,int ,char const*,int,...) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 char* FUNC_12 (int *,int,int *) ;
 scalar_t__ FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int **,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,scalar_t__*,int *,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_boolean_t *VAR_10,
                 svn_wc__db_wcroot_t *VAR_11,
                 const char *VAR_12,
                 const char *VAR_13,
                 const svn_skel_t *VAR_14,
                 apr_pool_t *VAR_15)
{
  svn_sqlite__stmt_t *VAR_16;
  svn_wc__db_status_t VAR_17;
  svn_boolean_t VAR_18;
  svn_boolean_t VAR_19;
  int VAR_20 = 0;
  svn_boolean_t VAR_21;
  svn_boolean_t VAR_22 = VAR_0;

  FUNC_0(FUNC_2(VAR_11->sdb, VAR_14, VAR_15));

  FUNC_0(FUNC_18(&VAR_17, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        &VAR_18, ((void*)0), ((void*)0), ((void*)0),
                                        &VAR_19, ((void*)0),
                                        VAR_11, VAR_12,
                                        VAR_15, VAR_15));

  if (VAR_17 != VAR_6 || !VAR_18)
    return VAR_3;


  if (VAR_19)
    FUNC_0(FUNC_3(&VAR_20, VAR_11,
                        FUNC_6(VAR_12, VAR_15)));
  else
    VAR_20 = 0;

  FUNC_0(FUNC_14(&VAR_16, VAR_11->sdb,
                                    VAR_2));

  FUNC_0(FUNC_7(VAR_16, "isdd", VAR_11->wc_id,
                                          VAR_12,
                                          VAR_20,
                                          FUNC_4(VAR_12)));

  FUNC_0(FUNC_16(&VAR_21, VAR_16));

  FUNC_1(VAR_21);

  {
    svn_boolean_t VAR_23 = FUNC_8(VAR_16, 9);
    const char *VAR_24 = FUNC_12(VAR_16, 10, ((void*)0));

    if (!VAR_23
        || !VAR_24
        || FUNC_5(VAR_24, VAR_13))
      {
        VAR_22 = VAR_4;
        VAR_21 = VAR_0;
      }
  }

  while (VAR_21)
    {
      svn_wc__db_status_t VAR_25;
      svn_wc__db_status_t VAR_26;

      VAR_25 = FUNC_13(VAR_16, 1, VAR_5);

      if (FUNC_10(VAR_16, 5))
        {

          if (VAR_25 != VAR_9)
            {
              VAR_22 = VAR_4;
              break;
            }
          continue;
        }

      VAR_26 = FUNC_13(VAR_16, 5, VAR_5);

      if (VAR_25 != VAR_26)
        {
          VAR_22 = VAR_4;
          break;
        }

      if (VAR_25 == VAR_9
          || VAR_25 == VAR_7)
        {
          FUNC_0(FUNC_16(&VAR_21, VAR_16));
          continue;
        }
      else if (VAR_25 != VAR_8)
        {

          VAR_22 = VAR_4;
          break;
        }

      {
        const char *VAR_27;
        const char *VAR_28;

        VAR_27 = FUNC_12(VAR_16, 3, ((void*)0));
        VAR_28 = FUNC_12(VAR_16, 7, ((void*)0));

        if (! VAR_27
            || FUNC_5(VAR_27, VAR_28))
          {
            VAR_22 = VAR_4;
            break;
          }
      }

      {
        svn_revnum_t VAR_29;
        svn_revnum_t VAR_30;

        VAR_29 = FUNC_11(VAR_16, 4);
        VAR_30 = FUNC_11(VAR_16, 8);

        if (VAR_29 != VAR_30)
          {
            VAR_22 = VAR_4;
            break;
          }
      }

      {
        apr_int64_t VAR_31;
        apr_int64_t VAR_32;

        VAR_31 = FUNC_9(VAR_16, 2);
        VAR_32 = FUNC_9(VAR_16, 6);

        if (VAR_31 != VAR_32)
          {
            VAR_22 = VAR_4;
            break;
          }
      }



      FUNC_0(FUNC_16(&VAR_21, VAR_16));
    }
  FUNC_0(FUNC_15(VAR_16));

  if (! VAR_22)
    {







      FUNC_0(FUNC_14(&VAR_16, VAR_11->sdb,
                                        VAR_1));

      FUNC_0(FUNC_7(VAR_16, "isd", VAR_11->wc_id,
                                             VAR_12,
                                             FUNC_4(VAR_12)));

      FUNC_0(FUNC_17(VAR_16));

      if (VAR_10)
        *VAR_10 = VAR_4;
    }

  return VAR_3;
}
