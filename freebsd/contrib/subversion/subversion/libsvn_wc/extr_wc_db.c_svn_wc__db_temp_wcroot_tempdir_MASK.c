
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


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;
 int FUNC_6 (int *) ;

svn_error_t *
FUNC_7(const char **VAR_3,
                               svn_wc__db_t *VAR_4,
                               const char *VAR_5,
                               apr_pool_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_wc__db_wcroot_t *VAR_8;
  const char *VAR_9;

  FUNC_1(VAR_3 != ((void*)0));
  FUNC_1(FUNC_3(VAR_5));

  FUNC_0(FUNC_5(&VAR_8, &VAR_9, VAR_4,
                              VAR_5, VAR_7, VAR_7));
  FUNC_2(VAR_8);

  *VAR_3 = FUNC_4(VAR_6,
                                           VAR_8->abspath,
                                           FUNC_6(VAR_7),
                                           VAR_2,
                                           VAR_1);
  return VAR_0;
}
