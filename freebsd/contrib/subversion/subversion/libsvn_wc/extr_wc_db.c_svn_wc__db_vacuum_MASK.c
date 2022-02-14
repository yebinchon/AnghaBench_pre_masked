
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_3(svn_wc__db_t *VAR_2,
                  const char *VAR_3,
                  apr_pool_t *VAR_4)
{
  svn_wc__db_wcroot_t *VAR_5;
  const char *VAR_6;

  FUNC_0(FUNC_2(&VAR_5, &VAR_6,
                                                VAR_2, VAR_3,
                                                VAR_4, VAR_4));
  FUNC_0(FUNC_1(VAR_5->sdb, VAR_0));

  return VAR_1;
}
