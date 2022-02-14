
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
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,char*,int ,char const*) ;
 char* FUNC_9 (int *,int,int *) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *) ;
 int FUNC_13 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_14(apr_hash_t **VAR_1,
                                   svn_wc__db_t *VAR_2,
                                   const char *VAR_3,
                                   apr_pool_t *VAR_4,
                                   apr_pool_t *VAR_5)
{
  svn_wc__db_wcroot_t *VAR_6;
  svn_sqlite__stmt_t *VAR_7;
  const char *VAR_8;
  svn_boolean_t VAR_9;

  FUNC_1(FUNC_4(VAR_3));

  FUNC_0(FUNC_13(&VAR_6, &VAR_8, VAR_2,
                              VAR_3, VAR_5, VAR_5));
  FUNC_2(VAR_6);

  FUNC_0(FUNC_10(&VAR_7, VAR_6->sdb,
                                    VAR_0));

  FUNC_0(FUNC_8(VAR_7, "is", VAR_6->wc_id, VAR_8));

  *VAR_1 = FUNC_3(VAR_4);
  FUNC_0(FUNC_12(&VAR_9, VAR_7));

  while (VAR_9)
    {
      const char *VAR_10;

      VAR_8 = FUNC_9(VAR_7, 0, ((void*)0));
      VAR_10 = FUNC_9(VAR_7, 1, ((void*)0));

      FUNC_7(*VAR_1,
                    FUNC_5(VAR_6->abspath, VAR_8,
                                    VAR_4),
                    FUNC_5(VAR_6->abspath, VAR_10,
                                    VAR_4));

      FUNC_0(FUNC_12(&VAR_9, VAR_7));
    }

  return FUNC_6(FUNC_11(VAR_7));
}
