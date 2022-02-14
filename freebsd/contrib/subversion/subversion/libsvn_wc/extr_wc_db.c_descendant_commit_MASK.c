
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
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int *,char*,int ,char const*,int,int ,char const*,int ) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc__db_wcroot_t *VAR_2,
                  const char *VAR_3,
                  int VAR_4,
                  apr_int64_t VAR_5,
                  const char *VAR_6,
                  svn_revnum_t VAR_7,
                  apr_pool_t *VAR_8)
{
  svn_sqlite__stmt_t *VAR_9;

  FUNC_1(*VAR_3 != '\0'
                 && *VAR_6 != '\0');

  FUNC_0(FUNC_3(&VAR_9, VAR_2->sdb,
                                    VAR_0));

  FUNC_0(FUNC_2(VAR_9, "isdisr", VAR_2->wc_id,
                                            VAR_3,
                                            VAR_4,
                                            VAR_5,
                                            VAR_6,
                                            VAR_7));

  FUNC_0(FUNC_4(((void*)0), VAR_9));

  return VAR_1;
}
