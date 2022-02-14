
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
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int *,char*,int ,char const*) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__*,int *) ;
 int FUNC_12 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_13(apr_hash_t **VAR_2,
                                 svn_wc__db_t *VAR_3,
                                 const char *VAR_4,
                                 apr_pool_t *VAR_5,
                                 apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;
  svn_sqlite__stmt_t *VAR_9;
  svn_boolean_t VAR_10;

  FUNC_1(FUNC_4(VAR_4));
  FUNC_0(FUNC_12(&VAR_7, &VAR_8,
                                                VAR_3, VAR_4,
                                                VAR_6, VAR_6));
  FUNC_2(VAR_7);

  FUNC_0(FUNC_9(&VAR_9, VAR_7->sdb,
                                    VAR_0));
  FUNC_0(FUNC_7(VAR_9, "is",
                            VAR_7->wc_id,
                            VAR_8));
  FUNC_0(FUNC_11(&VAR_10, VAR_9));

  if (VAR_10)
    *VAR_2 = FUNC_3(VAR_5);
  else
    *VAR_2 = ((void*)0);

  while (VAR_10)
    {
      const char *VAR_11 =
        FUNC_5(VAR_7->abspath,
                        FUNC_8(VAR_9, 0, ((void*)0)),
                        VAR_5);
      FUNC_6(*VAR_2, VAR_11, VAR_11);
      FUNC_0(FUNC_11(&VAR_10, VAR_9));
    }

  FUNC_0(FUNC_10(VAR_9));
  return VAR_1;
}
