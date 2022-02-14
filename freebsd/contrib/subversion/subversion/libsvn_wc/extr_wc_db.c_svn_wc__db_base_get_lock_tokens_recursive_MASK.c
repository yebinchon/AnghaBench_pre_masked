
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,char const*) ;
 int FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (int *,char*,int ,char const*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 char* FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int **,int ,int ) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__*,int *) ;
 int * FUNC_15 (char const**,int *,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_16 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_17(apr_hash_t **VAR_2,
                                          svn_wc__db_t *VAR_3,
                                          const char *VAR_4,
                                          apr_pool_t *VAR_5,
                                          apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;
  svn_sqlite__stmt_t *VAR_9;
  svn_boolean_t VAR_10;
  apr_int64_t VAR_11 = VAR_0;
  const char *VAR_12 = ((void*)0);

  FUNC_1(FUNC_4(VAR_4));

  FUNC_0(FUNC_16(&VAR_7, &VAR_8,
                                                VAR_3, VAR_4,
                                                VAR_6, VAR_6));
  FUNC_2(VAR_7);

  *VAR_2 = FUNC_3(VAR_5);


  FUNC_0(FUNC_12(
              &VAR_9, VAR_7->sdb,
              VAR_1));

  FUNC_0(FUNC_9(VAR_9, "is", VAR_7->wc_id, VAR_8));
  FUNC_0(FUNC_14(&VAR_10, VAR_9));
  while (VAR_10)
    {
      apr_int64_t VAR_13 = FUNC_10(VAR_9, 0);
      const char *VAR_14 = FUNC_11(VAR_9, 1, ((void*)0));
      const char *VAR_15 = FUNC_11(VAR_9, 2, VAR_5);

      if (VAR_13 != VAR_11)
        {
          svn_error_t *VAR_16 = FUNC_15(&VAR_12,
                                                         ((void*)0), VAR_7,
                                                         VAR_13,
                                                         VAR_6);

          if (VAR_16)
            {
              return FUNC_6(
                            FUNC_5(VAR_16,
                                                     FUNC_13(VAR_9)));
            }

          VAR_11 = VAR_13;
        }

      FUNC_1(VAR_12 != ((void*)0));
      FUNC_7(*VAR_2,
                    FUNC_8(VAR_12,
                                                VAR_14, VAR_5),
                    VAR_15);

      FUNC_0(FUNC_14(&VAR_10, VAR_9));
    }
  return FUNC_13(VAR_9);
}
