
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
struct TYPE_3__ {int access_cache; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_5(svn_wc__db_t *VAR_1,
                             const char *VAR_2,
                             svn_wc_adm_access_t *VAR_3,
                             apr_pool_t *VAR_4)
{
  const char *VAR_5;
  svn_wc__db_wcroot_t *VAR_6;

  FUNC_1(FUNC_2(VAR_2));


  FUNC_0(FUNC_4(&VAR_6, &VAR_5, VAR_1,
                              VAR_2, VAR_4, VAR_4));
  FUNC_3(VAR_6->access_cache, VAR_2, ((void*)0));

  return VAR_0;
}
