
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int const*,int *) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_wc__db_t *VAR_1,
                  const char *VAR_2,
                  const svn_skel_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  svn_wc__db_wcroot_t *VAR_5;
  const char *VAR_6;

  FUNC_1(FUNC_4(VAR_2));


  if (VAR_3 == ((void*)0))
    return VAR_0;

  FUNC_0(FUNC_6(&VAR_5, &VAR_6, VAR_1,
                              VAR_2, VAR_4, VAR_4));
  FUNC_2(VAR_5);


  return FUNC_5(FUNC_3(VAR_5->sdb, VAR_3,
                                        VAR_4));
}
