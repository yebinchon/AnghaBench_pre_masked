
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int * FUNC_4 (int ,int ,int ,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (char const*,char const*,int *) ;
 char* FUNC_10 (char const*,char const*) ;
 int FUNC_11 (int *,char*,int ,char const*) ;
 scalar_t__ FUNC_12 (int *,int) ;
 char* FUNC_13 (int *,int,int *) ;
 int FUNC_14 (int **,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_wc__db_wcroot_t *VAR_4,
                  const char *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_sqlite__stmt_t *VAR_7;
  svn_boolean_t VAR_8;
  svn_revnum_t VAR_9;
  const char *VAR_10;
  apr_pool_t *VAR_11 = FUNC_7(VAR_6);

  FUNC_0(FUNC_14(&VAR_7, VAR_4->sdb,
                                    VAR_0));
  FUNC_0(FUNC_11(VAR_7, "is", VAR_4->wc_id, VAR_5));
  FUNC_0(FUNC_16(&VAR_8, VAR_7));
  if (!VAR_8)
    return FUNC_5(FUNC_15(VAR_7));

  VAR_9 = FUNC_12(VAR_7, 4);
  VAR_10 = FUNC_13(VAR_7, 1, VAR_6);

  FUNC_0(FUNC_15(VAR_7));

  FUNC_0(FUNC_14(&VAR_7, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_11(VAR_7, "is", VAR_4->wc_id, VAR_5));
  FUNC_0(FUNC_16(&VAR_8, VAR_7));
  while (VAR_8)
    {
      svn_revnum_t VAR_12 = FUNC_12(VAR_7, 2);
      const char *VAR_13 = FUNC_13(VAR_7, 0, ((void*)0));
      const char *VAR_14;

      FUNC_6(VAR_11);

      VAR_14 = FUNC_10(VAR_5, VAR_13);
      VAR_14 = FUNC_9(VAR_10, VAR_14, VAR_11);

      if (FUNC_3(VAR_14, FUNC_13(VAR_7, 1, ((void*)0))))
        return FUNC_4(VAR_2,
                                 FUNC_15(VAR_7),
                                 FUNC_1("Cannot apply update because '%s' is a "
                                   "switched path (please switch it back to "
                                   "its original URL and try again)"),
                                 FUNC_2(VAR_4, VAR_13,
                                                        VAR_6));

      if (VAR_9 != VAR_12)
        return FUNC_4(VAR_2,
                                 FUNC_15(VAR_7),
                                 FUNC_1("Cannot apply update because '%s' is a "
                                   "mixed-revision working copy (please "
                                   "update and try again)"),
                                 FUNC_2(VAR_4, VAR_5,
                                                        VAR_6));

      FUNC_0(FUNC_16(&VAR_8, VAR_7));
    }
  FUNC_0(FUNC_15(VAR_7));

  FUNC_8(VAR_11);

  return VAR_3;
}
