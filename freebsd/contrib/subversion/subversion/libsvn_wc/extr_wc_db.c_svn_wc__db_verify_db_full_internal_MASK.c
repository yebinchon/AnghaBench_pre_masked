
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abspath; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int * (* svn_wc__db_verify_cb_t ) (void*,int ,char const*,int,int,char const*,int *) ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int,int *) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__*,int *) ;

svn_error_t *
FUNC_11(svn_wc__db_wcroot_t *VAR_1,
                                   svn_wc__db_verify_cb_t VAR_2,
                                   void *VAR_3,
                                   apr_pool_t *VAR_4)
{
  svn_sqlite__stmt_t *VAR_5;
  svn_boolean_t VAR_6;
  svn_error_t *VAR_7 = ((void*)0);
  apr_pool_t *VAR_8 = FUNC_4(VAR_4);

  FUNC_0(FUNC_8(&VAR_5, VAR_1->sdb, VAR_0));
  FUNC_0(FUNC_10(&VAR_6, VAR_5));

  while (VAR_6)
    {
      const char *VAR_9;
      int VAR_10 = FUNC_6(VAR_5, 1);
      int VAR_11 = FUNC_6(VAR_5, 2);
      const char *VAR_12;

      FUNC_3(VAR_8);

      VAR_9 = FUNC_7(VAR_5, 0, VAR_8);
      VAR_12 = FUNC_7(VAR_5, 3, VAR_4);

      VAR_7 = VAR_2(VAR_3, VAR_1->abspath, VAR_9, VAR_10,
                     VAR_11, VAR_12, VAR_8);

      if (VAR_7)
        break;

      FUNC_0(FUNC_10(&VAR_6, VAR_5));
    }

  FUNC_5(VAR_8);

  return FUNC_2(
            FUNC_1(VAR_7, FUNC_9(VAR_5)));
}
