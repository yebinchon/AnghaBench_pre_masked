
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const*,TYPE_1__*,char const*,int *) ;
 char* FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,char const*) ;
 char* FUNC_8 (int ,char const*) ;
 int FUNC_9 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_wc__db_t *VAR_1,
                           const char *VAR_2,
                           const char *VAR_3,
                           const svn_skel_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  svn_wc__db_wcroot_t *VAR_6;
  const char *VAR_7;

  FUNC_1(FUNC_6(VAR_2));

  if (! VAR_3)
    VAR_3 = FUNC_5(VAR_2, VAR_5);

  FUNC_0(FUNC_9(&VAR_6, &VAR_7, VAR_1,
                              VAR_3, VAR_5, VAR_5));
  FUNC_3(VAR_6);

  FUNC_1(FUNC_7(VAR_6->abspath, VAR_2));

  VAR_7 = FUNC_8(VAR_6->abspath, VAR_2);

  FUNC_2(FUNC_4(VAR_4, VAR_6, VAR_7,
                                         VAR_5),
                      VAR_6);

  return VAR_0;
}
