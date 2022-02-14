
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sdb; int wc_id; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int const*,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (int *,char*,int ,char const*,int) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int*,int *) ;

svn_error_t *
FUNC_9(svn_wc__db_wcroot_t *VAR_3,
                                  const char *VAR_4,
                                  int VAR_5,
                                  const char *VAR_6,
                                  const svn_skel_t *VAR_7,
                                  apr_pool_t *VAR_8)
{
  svn_sqlite__stmt_t *VAR_9;
  int VAR_10;

  FUNC_0(FUNC_7(&VAR_9, VAR_3->sdb,
                                    VAR_0));
  FUNC_0(FUNC_6(VAR_9, "isd", VAR_3->wc_id, VAR_4,
                            VAR_5));
  FUNC_0(FUNC_8(&VAR_10, VAR_9));

  if (VAR_10 != 1)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_1("Path '%s' is not moved"),
                             FUNC_4(VAR_3, VAR_4,
                                                    VAR_8));

  FUNC_0(FUNC_3(VAR_3, VAR_6, VAR_8));

  FUNC_0(FUNC_2(VAR_3->sdb, VAR_7, VAR_8));
  return VAR_2;
}
