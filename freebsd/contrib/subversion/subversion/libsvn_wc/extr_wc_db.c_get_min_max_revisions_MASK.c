
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char*,int ,char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_revnum_t *VAR_2,
                      svn_revnum_t *VAR_3,
                      svn_wc__db_wcroot_t *VAR_4,
                      const char *VAR_5,
                      svn_boolean_t VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_revnum_t VAR_9, VAR_10;

  FUNC_0(FUNC_3(&VAR_8, VAR_4->sdb,
                                    VAR_0));
  FUNC_0(FUNC_1(VAR_8, "is", VAR_4->wc_id, VAR_5));
  FUNC_0(FUNC_5(VAR_8));

  if (VAR_6)
    {
      VAR_9 = FUNC_2(VAR_8, 2);
      VAR_10 = FUNC_2(VAR_8, 3);
    }
  else
    {
      VAR_9 = FUNC_2(VAR_8, 0);
      VAR_10 = FUNC_2(VAR_8, 1);
    }


  FUNC_0(FUNC_4(VAR_8));

  if (VAR_2)
    *VAR_2 = VAR_9;
  if (VAR_3)
    *VAR_3 = VAR_10;

  return VAR_1;
}
