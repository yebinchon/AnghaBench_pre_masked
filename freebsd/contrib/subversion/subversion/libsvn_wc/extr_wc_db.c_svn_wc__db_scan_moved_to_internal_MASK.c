
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,int *) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 (int ,int ,int ,int ) ;
 char* FUNC_7 (char const*,int *) ;
 char* FUNC_8 (char const*,int,int *) ;
 int FUNC_9 (int *,char*,int ,char const*,int) ;
 int FUNC_10 (int *,int ) ;
 char* FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int **,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__*,int *) ;

svn_error_t *
FUNC_15(const char **VAR_4,
                                  const char **VAR_5,
                                  const char **VAR_6,
                                  svn_wc__db_wcroot_t *VAR_7,
                                  const char *VAR_8,
                                  int VAR_9,
                                  apr_pool_t *VAR_10,
                                  apr_pool_t *VAR_11)
{
  svn_sqlite__stmt_t *VAR_12;
  svn_boolean_t VAR_13;
  int VAR_14;
  const char *VAR_15 = VAR_8;
  const char *VAR_16;

  FUNC_1(VAR_8[0]);

  if (VAR_4)
    *VAR_4 = ((void*)0);
  if (VAR_5)
    *VAR_5 = ((void*)0);
  if (VAR_6)
    *VAR_6 = ((void*)0);

  FUNC_0(FUNC_12(&VAR_12, VAR_7->sdb,
                                    VAR_1));
  FUNC_0(FUNC_9(VAR_12, "isd", VAR_7->wc_id, VAR_15, VAR_9));

  FUNC_0(FUNC_14(&VAR_13, VAR_12));

  if (!VAR_13)
    {
      return FUNC_6(VAR_2,
                               FUNC_13(VAR_12),
                               FUNC_2("Node '%s' is not shadowed"),
                               FUNC_4(VAR_7, VAR_8,
                                                      VAR_11));
    }

  VAR_14 = FUNC_10(VAR_12, 0);
  VAR_16 = FUNC_11(VAR_12, 1, VAR_11);

  FUNC_0(FUNC_13(VAR_12));

  while (!VAR_16 && VAR_13)
    {
      VAR_15 = FUNC_7(VAR_15, VAR_11);

      if (FUNC_5(VAR_15) < VAR_14)
        break;

      FUNC_0(FUNC_12(&VAR_12, VAR_7->sdb,
                                        VAR_0));
      FUNC_0(FUNC_9(VAR_12, "isd", VAR_7->wc_id, VAR_15,
                                VAR_14));

      FUNC_0(FUNC_14(&VAR_13, VAR_12));

      if (VAR_13)
        VAR_16 = FUNC_11(VAR_12, 13, VAR_11);

      FUNC_0(FUNC_13(VAR_12));
    }

  if (VAR_16)
    {
      if (VAR_4)
        *VAR_4 = FUNC_3(VAR_10, VAR_15);

      if (VAR_5)
        *VAR_5 = FUNC_3(VAR_10, VAR_16);

      if (VAR_6)
        *VAR_6 = FUNC_8(VAR_8, VAR_14,
                                             VAR_10);
    }

  return VAR_3;
}
