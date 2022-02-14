
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abspath; int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,char const*,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*,int ,char const*) ;
 int * FUNC_15 (int **,int *,int ,int *,int *) ;
 char* FUNC_16 (int *,int,int *) ;
 int FUNC_17 (int *,int,int ,int ) ;
 int FUNC_18 (int **,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__*,int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_23(apr_hash_t **VAR_4,
                                        apr_hash_t **VAR_5,
                                        svn_wc__db_t *VAR_6,
                                        const char *VAR_7,
                                        apr_pool_t *VAR_8,
                                        apr_pool_t *VAR_9)
{
  svn_wc__db_wcroot_t *VAR_10;
  svn_sqlite__stmt_t *VAR_11;
  const char *VAR_12;
  svn_boolean_t VAR_13;
  svn_error_t *VAR_14 = ((void*)0);
  apr_pool_t *VAR_15 = FUNC_11(VAR_9);

  FUNC_1(FUNC_5(VAR_7));

  FUNC_0(FUNC_22(&VAR_10, &VAR_12, VAR_6,
                              VAR_7, VAR_9, VAR_15));
  FUNC_2(VAR_10);

  *VAR_4 = FUNC_3(VAR_8);
  if (VAR_5 != ((void*)0))
    *VAR_5 = FUNC_3(VAR_8);

  FUNC_0(FUNC_18(&VAR_11, VAR_10->sdb,
                                    VAR_0));

  FUNC_0(FUNC_14(VAR_11, "is", VAR_10->wc_id, VAR_12));

  FUNC_0(FUNC_20(&VAR_13, VAR_11));

  while (VAR_13)
    {
      apr_hash_t *VAR_16;
      const char *VAR_17;

      FUNC_10(VAR_15);
      VAR_14 = FUNC_15(&VAR_16, VAR_11, 0, VAR_15,
                                          VAR_15);

      if (VAR_14)
        break;

      VAR_17 = FUNC_13(VAR_16, VAR_1);

      if (VAR_17)
        {
          const char *VAR_18;
          const char *VAR_19 = FUNC_16(VAR_11, 1, ((void*)0));

          VAR_18 = FUNC_6(VAR_10->abspath, VAR_19,
                                         VAR_8);

          FUNC_9(*VAR_4, VAR_18,
                        FUNC_4(VAR_8, VAR_17));

          if (VAR_5)
            {
              svn_depth_t VAR_20
                = FUNC_17(VAR_11, 2, VAR_2,
                                                VAR_3);

              FUNC_9(*VAR_5, VAR_18,

                            FUNC_21(VAR_2, VAR_20));
            }
        }

      FUNC_0(FUNC_20(&VAR_13, VAR_11));
    }

  FUNC_12(VAR_15);

  return FUNC_8(FUNC_7(VAR_14,
                                                  FUNC_19(VAR_11)));
}
