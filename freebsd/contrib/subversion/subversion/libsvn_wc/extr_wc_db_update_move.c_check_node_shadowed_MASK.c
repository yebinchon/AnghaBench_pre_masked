
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int *,char*,int ,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_3,
                    svn_wc__db_wcroot_t *VAR_4,
                    const char *VAR_5,
                    int VAR_6,
                    apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;

  FUNC_0(FUNC_3(&VAR_8, VAR_4->sdb,
                                    VAR_1));
  FUNC_0(FUNC_1(VAR_8, "is", VAR_4->wc_id, VAR_5));

  FUNC_0(FUNC_5(&VAR_9, VAR_8));

  if (VAR_9)
    {
      int VAR_10 = FUNC_2(VAR_8, 0);

      *VAR_3 = (VAR_10 > VAR_6);
    }
  else
    *VAR_3 = VAR_0;
  FUNC_0(FUNC_4(VAR_8));

  return VAR_2;
}
