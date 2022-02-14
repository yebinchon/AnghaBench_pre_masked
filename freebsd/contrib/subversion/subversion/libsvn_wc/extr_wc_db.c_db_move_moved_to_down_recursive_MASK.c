
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
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*,int,char const*,int,char const*,int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ,char const*,int) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_wc__db_wcroot_t *VAR_2,
                                const char *VAR_3,
                                int VAR_4,
                                apr_pool_t *VAR_5)
{
  svn_sqlite__stmt_t *VAR_6;
  svn_boolean_t VAR_7;
  apr_pool_t *VAR_8 = FUNC_5(VAR_5);

  FUNC_0(FUNC_9(&VAR_6, VAR_2->sdb,
                        VAR_0));
  FUNC_0(FUNC_6(VAR_6, "isd", VAR_2->wc_id, VAR_3,
                            VAR_4));
  FUNC_0(FUNC_11(&VAR_7, VAR_6));

  while (VAR_7)
    {
      int VAR_9;
      const char *VAR_10;
      const char *VAR_11;
      svn_error_t *VAR_12;

      FUNC_4(VAR_8);

      VAR_9 = FUNC_7(VAR_6, 0);
      VAR_10 = FUNC_8(VAR_6, 1, VAR_8);
      VAR_11 = FUNC_8(VAR_6, 4, VAR_8);

      VAR_12 = FUNC_3(
               FUNC_1(
                             VAR_2,
                             VAR_10, VAR_9,
                             VAR_10, VAR_4,
                             VAR_11, VAR_8));

      if (VAR_12)
        return FUNC_2(VAR_12, FUNC_10(VAR_6));

      FUNC_0(FUNC_11(&VAR_7, VAR_6));
    }

  FUNC_0(FUNC_10(VAR_6));

  return VAR_1;
}
