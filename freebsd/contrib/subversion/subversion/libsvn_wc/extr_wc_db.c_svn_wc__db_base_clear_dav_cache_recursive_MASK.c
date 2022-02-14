
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,char const*) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_6(svn_wc__db_t *VAR_2,
                                          const char *VAR_3,
                                          apr_pool_t *VAR_4)
{
  svn_wc__db_wcroot_t *VAR_5;
  const char *VAR_6;
  svn_sqlite__stmt_t *VAR_7;

  FUNC_0(FUNC_5(&VAR_5, &VAR_6,
                                             VAR_2, VAR_3,
                                             VAR_4, VAR_4));
  FUNC_1(VAR_5);

  FUNC_0(FUNC_3(&VAR_7, VAR_5->sdb,
                                    VAR_0));
  FUNC_0(FUNC_2(VAR_7, "is", VAR_5->wc_id, VAR_6));

  FUNC_0(FUNC_4(VAR_7));

  return VAR_1;
}
