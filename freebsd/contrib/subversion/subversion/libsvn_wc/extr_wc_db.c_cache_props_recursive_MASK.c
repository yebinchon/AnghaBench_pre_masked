
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ pristine; int changelists; int depth; } ;
typedef TYPE_2__ cache_props_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,int ,int ,int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int **,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_4,
                      svn_wc__db_wcroot_t *VAR_5,
                      const char *VAR_6,
                      apr_pool_t *VAR_7)
{
  cache_props_baton_t *VAR_8 = VAR_4;
  svn_sqlite__stmt_t *VAR_9;
  int VAR_10;

  FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_8->depth,
                                VAR_8->changelists, VAR_7));

  FUNC_0(FUNC_3(VAR_5->sdb,
                                      VAR_2));

  if (VAR_8->pristine)
    VAR_10 = VAR_0;
  else
    VAR_10 = VAR_1;

  FUNC_0(FUNC_4(&VAR_9, VAR_5->sdb, VAR_10));
  FUNC_0(FUNC_2(VAR_9, 1, VAR_5->wc_id));
  FUNC_0(FUNC_5(VAR_9));

  return VAR_3;
}
