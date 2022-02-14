
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char const*,int *) ;
 int VAR_3 ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 int FUNC_7 (char const**,char const**,char const*,int *) ;
 int * FUNC_8 (int *,char*,int ,char const*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 char* FUNC_12 (int *,int,int *) ;
 scalar_t__ FUNC_13 (int *,int,int ) ;
 int * FUNC_14 (int **,int ,int ) ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_18(apr_int64_t *VAR_5,
                            const char **VAR_6,
                            svn_wc__db_wcroot_t *VAR_7,
                            const char *VAR_8,
                            apr_pool_t *VAR_9,
                            apr_pool_t *VAR_10)
{
  svn_sqlite__stmt_t *VAR_11;
  svn_boolean_t VAR_12;
  int VAR_13;


  FUNC_0(FUNC_14(&VAR_11, VAR_7->sdb,
                                    VAR_0));
  FUNC_0(FUNC_8(VAR_11, "is", VAR_7->wc_id, VAR_8));
  FUNC_0(FUNC_16(&VAR_12, VAR_11));

  if (!VAR_12)
    return FUNC_4(VAR_1,
                             FUNC_15(VAR_11),
                             FUNC_2("The node '%s' was not found."),
                             FUNC_3(VAR_7, VAR_8,
                                                    VAR_10));

  VAR_13 = FUNC_9(VAR_11, 0);

  if (VAR_13 > 0)
    {
      svn_wc__db_status_t VAR_14 = FUNC_13(VAR_11, 3,
                                                              VAR_3);

      if (VAR_14 == VAR_4)
        {
          FUNC_0(FUNC_17(VAR_11));
          VAR_13 = FUNC_9(VAR_11, 0);
        }
      else
        {
          const char *VAR_15;
          const char *VAR_16;
          const char *VAR_17;

          FUNC_0(FUNC_15(VAR_11));
          FUNC_7(&VAR_16, &VAR_17, VAR_8,
                            VAR_10);

          FUNC_0(FUNC_18(VAR_5, &VAR_15,
                                              VAR_7, VAR_16,
                                              VAR_10, VAR_10));

          *VAR_6 = FUNC_6(VAR_15, VAR_17,
                                            VAR_9);
          return VAR_2;
        }
    }


  FUNC_1(VAR_13 == 0);

  FUNC_1(!FUNC_11(VAR_11, 1));
  FUNC_1(!FUNC_11(VAR_11, 2));

  *VAR_5 = FUNC_10(VAR_11, 1);
  *VAR_6 = FUNC_12(VAR_11, 2, VAR_9);

  return FUNC_5(FUNC_15(VAR_11));
}
