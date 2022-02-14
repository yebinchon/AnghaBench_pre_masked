
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,char const*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 char const* FUNC_6 (int ,char const*) ;
 int FUNC_7 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(const char **VAR_1,
                      svn_wc__db_t *VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      apr_pool_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_2(FUNC_4(VAR_4));

  FUNC_1(FUNC_7(&VAR_7, &VAR_8, VAR_2,
                              VAR_3, VAR_5, VAR_6));



  FUNC_0(VAR_7, VAR_3, VAR_6);

  if (FUNC_5(VAR_7->abspath, VAR_4))
    {
      *VAR_1 = FUNC_3(VAR_5,
                                   FUNC_6(VAR_7->abspath,
                                                            VAR_4));
    }
  else

    *VAR_1 = FUNC_3(VAR_5, VAR_4);

  return VAR_0;
}
