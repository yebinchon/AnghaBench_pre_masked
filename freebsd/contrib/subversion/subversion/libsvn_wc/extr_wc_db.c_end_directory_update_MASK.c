
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int ,char const*,int ,scalar_t__) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_wc__db_wcroot_t *VAR_5,
                     const char *VAR_6,
                     apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_wc__db_status_t VAR_9;

  FUNC_0(FUNC_5(&VAR_9, ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            VAR_5, VAR_6,
                                            VAR_7, VAR_7));

  if (VAR_9 == VAR_4)
    return VAR_1;

  FUNC_1(VAR_9 == VAR_3);

  FUNC_0(FUNC_3(&VAR_8, VAR_5->sdb,
                                    VAR_0));
  FUNC_0(FUNC_2(VAR_8, "ist", VAR_5->wc_id, VAR_6,
                            VAR_2, VAR_4));
  FUNC_0(FUNC_4(VAR_8));

  return VAR_1;
}
