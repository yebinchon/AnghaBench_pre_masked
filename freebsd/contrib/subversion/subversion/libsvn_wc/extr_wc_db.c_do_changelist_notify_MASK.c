
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* changelist_name; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc_notify_action_t ;
struct TYPE_8__ {int abspath; int sdb; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__*,int *) ;
 TYPE_1__* FUNC_12 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(void *VAR_1,
                     svn_wc__db_wcroot_t *VAR_2,
                     svn_cancel_func_t VAR_3,
                     void *VAR_4,
                     svn_wc_notify_func2_t VAR_5,
                     void *VAR_6,
                     apr_pool_t *VAR_7)
{
  svn_sqlite__stmt_t *VAR_8;
  svn_boolean_t VAR_9;
  apr_pool_t *VAR_10;

  FUNC_0(FUNC_9(&VAR_8, VAR_2->sdb,
                                    VAR_0));
  FUNC_0(FUNC_11(&VAR_9, VAR_8));

  VAR_10 = FUNC_5(VAR_7);
  while (VAR_9)
    {

      const char *VAR_11 = FUNC_8(VAR_8, 1, ((void*)0));
      svn_wc_notify_action_t VAR_12 = FUNC_7(VAR_8, 2);
      svn_wc_notify_t *VAR_13;
      const char *VAR_14;

      FUNC_4(VAR_10);

      if (VAR_3)
        {
          svn_error_t *VAR_15 = VAR_3(VAR_4);

          if (VAR_15)
            return FUNC_3(FUNC_2(
                                                    VAR_15,
                                                    FUNC_10(VAR_8)));
        }

      VAR_14 = FUNC_1(VAR_2->abspath, VAR_11,
                                       VAR_10);
      VAR_13 = FUNC_12(VAR_14, VAR_12, VAR_10);
      VAR_13->changelist_name = FUNC_8(VAR_8, 3, ((void*)0));
      VAR_5(VAR_6, VAR_13, VAR_10);

      FUNC_0(FUNC_11(&VAR_9, VAR_8));
    }
  FUNC_6(VAR_10);

  return FUNC_3(FUNC_10(VAR_8));
}
