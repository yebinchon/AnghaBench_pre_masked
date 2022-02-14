
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char*,int ,char const*) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc__db_wcroot_t *VAR_2,
             const char *VAR_3,
             apr_pool_t *VAR_4)
{
  svn_sqlite__stmt_t *VAR_5;

  FUNC_0(FUNC_2(&VAR_5, VAR_2->sdb, VAR_0));
  FUNC_0(FUNC_1(VAR_5, "is", VAR_2->wc_id, VAR_3));

  FUNC_0(FUNC_3(VAR_5));

  return VAR_1;
}
