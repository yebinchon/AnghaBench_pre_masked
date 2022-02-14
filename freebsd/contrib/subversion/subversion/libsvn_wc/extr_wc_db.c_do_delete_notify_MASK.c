
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* svn_wc_notify_func2_t ) (void*,int ,int *) ;
struct TYPE_3__ {int abspath; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__*,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_3,
                 svn_wc__db_wcroot_t *VAR_4,
                 svn_cancel_func_t VAR_5,
                 void *VAR_6,
                 svn_wc_notify_func2_t VAR_7,
                 void *VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_sqlite__stmt_t *VAR_10;
  svn_boolean_t VAR_11;
  apr_pool_t *VAR_12;

  FUNC_0(FUNC_6(&VAR_10, VAR_4->sdb,
                                    VAR_0));
  FUNC_0(FUNC_8(&VAR_11, VAR_10));

  VAR_12 = FUNC_3(VAR_9);
  while (VAR_11)
    {
      const char *VAR_13;
      const char *VAR_14;

      FUNC_2(VAR_12);

      VAR_13 = FUNC_5(VAR_10, 0, ((void*)0));
      VAR_14 = FUNC_1(VAR_4->abspath,
                                       VAR_13,
                                       VAR_12);

      VAR_7(VAR_8,
                  FUNC_9(VAR_14,
                                       VAR_2,
                                       VAR_12),
                  VAR_12);

      FUNC_0(FUNC_8(&VAR_11, VAR_10));
    }
  FUNC_4(VAR_12);

  FUNC_0(FUNC_7(VAR_10));




  if (VAR_5)
    FUNC_0(VAR_5(VAR_6));

  return VAR_1;
}
