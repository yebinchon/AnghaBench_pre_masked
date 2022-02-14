
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* abspath; int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char const*,int *) ;
 char* FUNC_10 (char const*,char const*) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int ,int ,int ,int ,...) ;
 int FUNC_13 (int *,char*,int ,char const*) ;
 int * FUNC_14 (int const**,int *,int,int *) ;
 int FUNC_15 (int *,int) ;
 int * FUNC_16 (int **,int *,int,int *,int *) ;
 int FUNC_17 (int **,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (scalar_t__*,int *) ;
 int FUNC_20 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_21(const char **VAR_3,
                                  const svn_checksum_t **VAR_4,
                                  apr_hash_t **VAR_5,
                                  apr_time_t *VAR_6,
                                  svn_wc__db_t *VAR_7,
                                  const char *VAR_8,
                                  const char *VAR_9,
                                  apr_pool_t *VAR_10,
                                  apr_pool_t *VAR_11)
{
  svn_wc__db_wcroot_t *VAR_12;
  const char *VAR_13;
  svn_sqlite__stmt_t *VAR_14;
  svn_error_t *VAR_15 = ((void*)0);
  svn_boolean_t VAR_16;

  FUNC_1(FUNC_7(VAR_8));

  if (!VAR_9)
    VAR_9 = VAR_8;

  FUNC_0(FUNC_20(&VAR_12, &VAR_13, VAR_7,
                              VAR_9, VAR_11, VAR_11));
  FUNC_2(VAR_12);

  if (VAR_8 != VAR_9
      && FUNC_6(VAR_8, VAR_9))
    {
      if (!FUNC_8(VAR_12->abspath, VAR_8))
        return FUNC_12(
                    VAR_1, ((void*)0),
                    FUNC_3("The node '%s' is not in working copy '%s'"),
                    FUNC_9(VAR_8, VAR_11),
                    FUNC_9(VAR_12->abspath, VAR_11));

      VAR_13 = FUNC_10(VAR_12->abspath, VAR_8);
    }

  if (VAR_3 != ((void*)0))
    *VAR_3 = FUNC_5(VAR_10, VAR_12->abspath);

  FUNC_0(FUNC_17(&VAR_14, VAR_12->sdb,
                                    VAR_0));

  FUNC_0(FUNC_13(VAR_14, "is", VAR_12->wc_id, VAR_13));

  FUNC_0(FUNC_19(&VAR_16, VAR_14));

  if (VAR_16)
    {
      if (VAR_4)
        VAR_15 = FUNC_14(VAR_4, VAR_14, 6, VAR_10);

      if (!VAR_15 && VAR_5)
        {
          VAR_15 = FUNC_16(VAR_5, VAR_14, 14,
                                              VAR_10, VAR_11);

          if (*VAR_5 == ((void*)0))
            *VAR_5 = FUNC_4(VAR_10);
        }

      if (VAR_6)
        *VAR_6 = FUNC_15(VAR_14, 9);
    }
  else
    return FUNC_12(VAR_1,
                             FUNC_18(VAR_14),
                             FUNC_3("The node '%s' is not installable"),
                             FUNC_9(VAR_8,
                                                    VAR_11));

  FUNC_0(FUNC_11(VAR_15, FUNC_18(VAR_14)));

  return VAR_2;
}
