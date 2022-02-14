
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const**,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_4 (char const**,int *,int ,char const*,int *,int *) ;
 int FUNC_5 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t*
FUNC_6(const char **VAR_1,
                            svn_wc__db_t *VAR_2,
                            const char *VAR_3,
                            apr_pool_t *VAR_4,
                            apr_pool_t *VAR_5)
{
  svn_wc__db_wcroot_t *VAR_6;
  const char *VAR_7;
  const char *VAR_8;

  FUNC_0(FUNC_5(&VAR_6, &VAR_7, VAR_2,
                              VAR_3, VAR_5, VAR_5));
  FUNC_2(VAR_6);

  FUNC_1(
    FUNC_3(&VAR_8, VAR_6, VAR_7,
                VAR_5, VAR_5),
    VAR_6);

  if (!VAR_8)
    *VAR_1 = ((void*)0);
  else
    FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_6->abspath,
                                    VAR_8, VAR_4, VAR_5));
  return VAR_0;
}
