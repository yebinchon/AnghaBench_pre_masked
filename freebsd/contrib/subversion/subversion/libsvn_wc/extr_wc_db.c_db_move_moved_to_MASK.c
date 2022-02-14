
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
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,char*,int ,char const*,int,...) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc__db_wcroot_t *VAR_3,
                 const char *VAR_4,
                 int VAR_5,
                 const char *VAR_6,
                 int VAR_7,
                 const char *VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_sqlite__stmt_t *VAR_10;
  int VAR_11;

  FUNC_0(FUNC_3(&VAR_10, VAR_3->sdb,
                                     VAR_0));
  FUNC_0(FUNC_2(VAR_10, "isd", VAR_3->wc_id,
                            VAR_4, VAR_5));
  FUNC_0(FUNC_4(&VAR_11, VAR_10));

  if (VAR_11 == 1)
    {
      FUNC_0(FUNC_3(&VAR_10, VAR_3->sdb,
                                     VAR_0));
      FUNC_0(FUNC_2(VAR_10, "isds", VAR_3->wc_id,
                                VAR_6, VAR_7,
                                VAR_8));
      FUNC_0(FUNC_4(&VAR_11, VAR_10));
    }
  if (VAR_11 != 1)
    return FUNC_1(VAR_1, ((void*)0), ((void*)0));

  return VAR_2;
}
