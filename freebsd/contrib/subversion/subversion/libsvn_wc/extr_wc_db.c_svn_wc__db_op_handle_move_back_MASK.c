
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int const*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_6 (int *,TYPE_1__*,char const*,char const*,int const*,int *) ;
 int VAR_2 ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int ,char const*) ;
 int FUNC_9 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_10(svn_boolean_t *VAR_3,
                               svn_wc__db_t *VAR_4,
                               const char *VAR_5,
                               const char *VAR_6,
                               const svn_skel_t *VAR_7,
                               apr_pool_t *VAR_8)
{
  svn_wc__db_wcroot_t *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  FUNC_1(FUNC_7(VAR_5));

  FUNC_0(FUNC_9(&VAR_9, &VAR_10, VAR_4,
                                                VAR_5,
                                                VAR_8, VAR_8));
  FUNC_3(VAR_9);

  if (VAR_3)
    *VAR_3 = VAR_0;

  VAR_11 = FUNC_8(VAR_9->abspath,
                                                VAR_6);

  if (! VAR_10[0]
      || !VAR_11)
    {

      FUNC_0(FUNC_4(VAR_9->sdb, VAR_7, VAR_8));
      return VAR_1;
    }

  FUNC_2(FUNC_6(VAR_3, VAR_9, VAR_10,
                                       VAR_11, VAR_7,
                                       VAR_8),
                      VAR_9);

  FUNC_0(FUNC_5(VAR_9, VAR_5, VAR_2,
                        VAR_8));

  return VAR_1;
}
