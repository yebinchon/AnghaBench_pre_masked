
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,char*,int ,char const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(int *VAR_2,
            svn_wc__db_wcroot_t *VAR_3,
            const char *VAR_4)
{
  svn_sqlite__stmt_t *VAR_5;
  svn_boolean_t VAR_6;

  FUNC_0(FUNC_4(&VAR_5, VAR_3->sdb,
                                    VAR_0));
  FUNC_0(FUNC_2(VAR_5, "is", VAR_3->wc_id, VAR_4));
  FUNC_0(FUNC_6(&VAR_6, VAR_5));
  FUNC_1(VAR_6);
  *VAR_2 = FUNC_3(VAR_5, 0);
  FUNC_0(FUNC_5(VAR_5));

  return VAR_1;
}
