
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int access_cache; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int *) ;
 int * FUNC_4 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

void
FUNC_5(svn_wc__db_t *VAR_0,
                             const char *VAR_1,
                             apr_pool_t *VAR_2)
{
  const char *VAR_3;
  svn_wc__db_wcroot_t *VAR_4;
  svn_error_t *VAR_5;

  FUNC_0(FUNC_1(VAR_1));


  VAR_5 = FUNC_4(&VAR_4, &VAR_3,
                            VAR_0, VAR_1, VAR_2, VAR_2);
  if (VAR_5)
    {
      FUNC_2(VAR_5);
      return;
    }

  FUNC_3(VAR_4->access_cache, VAR_1, ((void*)0));
}
