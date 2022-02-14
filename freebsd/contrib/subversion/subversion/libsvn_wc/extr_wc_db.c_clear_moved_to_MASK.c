
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
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int *,char*,int ,char const*,...) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc__db_wcroot_t *VAR_3,
               const char *VAR_4,
               apr_pool_t *VAR_5)
{
  svn_sqlite__stmt_t *VAR_6;
  const char *VAR_7;
  int VAR_8;

  FUNC_0(FUNC_4(&VAR_6, VAR_3->sdb,
                                    VAR_1));
  FUNC_0(FUNC_1(VAR_6, "is", VAR_3->wc_id, VAR_4));
  FUNC_0(FUNC_6(VAR_6));

  VAR_7 = FUNC_3(VAR_6, 0, VAR_5);
  VAR_8 = FUNC_2(VAR_6, 1);
  FUNC_0(FUNC_5(VAR_6));

  FUNC_0(FUNC_4(&VAR_6, VAR_3->sdb,
                                    VAR_0));
  FUNC_0(FUNC_1(VAR_6, "isd", VAR_3->wc_id,
                            VAR_7, VAR_8));
  FUNC_0(FUNC_7(((void*)0), VAR_6));

  return VAR_2;
}
