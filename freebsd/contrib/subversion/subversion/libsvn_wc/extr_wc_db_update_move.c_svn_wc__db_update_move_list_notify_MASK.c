
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* revision; void* old_revision; void* prop_state; void* content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef void* svn_wc_notify_action_t ;
struct TYPE_8__ {int sdb; int abspath; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef void* svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__*,int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int ,void*,int *) ;

svn_error_t *
FUNC_13(svn_wc__db_wcroot_t *VAR_4,
                                   svn_revnum_t VAR_5,
                                   svn_revnum_t VAR_6,
                                   svn_wc_notify_func2_t VAR_7,
                                   void *VAR_8,
                                   apr_pool_t *VAR_9)
{
  svn_sqlite__stmt_t *VAR_10;

  if (VAR_7)
    {
      apr_pool_t *VAR_11;
      svn_boolean_t VAR_12;

      FUNC_0(FUNC_8(&VAR_10, VAR_4->sdb,
                                        VAR_1));
      FUNC_0(FUNC_10(&VAR_12, VAR_10));

      VAR_11 = FUNC_3(VAR_9);
      while (VAR_12)
        {
          const char *VAR_13;
          svn_wc_notify_action_t VAR_14;
          svn_wc_notify_t *VAR_15;

          FUNC_2(VAR_11);

          VAR_13 = FUNC_6(VAR_10, 0, ((void*)0));
          VAR_14 = FUNC_5(VAR_10, 1);
          VAR_15 = FUNC_12(FUNC_1(VAR_4->abspath,
                                                        VAR_13,
                                                        VAR_11),
                                        VAR_14, VAR_11);
          VAR_15->kind = FUNC_7(VAR_10, 2, VAR_3);
          VAR_15->content_state = FUNC_5(VAR_10, 3);
          VAR_15->prop_state = FUNC_5(VAR_10, 4);
          VAR_15->old_revision = VAR_5;
          VAR_15->revision = VAR_6;
          VAR_7(VAR_8, VAR_15, VAR_9);

          FUNC_0(FUNC_10(&VAR_12, VAR_10));
        }
      FUNC_4(VAR_11);
      FUNC_0(FUNC_9(VAR_10));
    }

  FUNC_0(FUNC_8(&VAR_10, VAR_4->sdb,
                                    VAR_0));
  FUNC_0(FUNC_11(VAR_10));

  return VAR_2;
}
