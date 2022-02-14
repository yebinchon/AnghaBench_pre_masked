
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int *,int,int const*,int *) ;
 int FUNC_8 (int *,char*,int ,char const*) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int*,int *) ;
 int FUNC_11 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_12(svn_wc__db_t *VAR_3,
                              const char *VAR_4,
                              const apr_hash_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;
  svn_sqlite__stmt_t *VAR_9;
  int VAR_10;

  FUNC_1(FUNC_4(VAR_4));

  FUNC_0(FUNC_11(&VAR_7, &VAR_8, VAR_3,
                              VAR_4, VAR_6, VAR_6));
  FUNC_2(VAR_7);

  FUNC_0(FUNC_9(&VAR_9, VAR_7->sdb,
                                    VAR_0));
  FUNC_0(FUNC_8(VAR_9, "is", VAR_7->wc_id, VAR_8));
  FUNC_0(FUNC_7(VAR_9, 3, VAR_5, VAR_6));

  FUNC_0(FUNC_10(&VAR_10, VAR_9));

  if (VAR_10 != 1)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_3("The node '%s' was not found."),
                             FUNC_5(VAR_4,
                                                    VAR_6));

  return VAR_2;
}
