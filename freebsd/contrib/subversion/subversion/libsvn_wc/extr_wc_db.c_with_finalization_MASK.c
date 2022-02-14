
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int * (* work_callback_t ) (void*,TYPE_1__*,int ,void*,int *,void*,int *) ;
typedef int * svn_wc_notify_func2_t ;
struct TYPE_7__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int * (* svn_wc__db_txn_callback_t ) (void*,TYPE_1__*,char const*,int *) ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 int * FUNC_4 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc__db_wcroot_t *VAR_0,
                  const char *VAR_1,
                  svn_wc__db_txn_callback_t VAR_2,
                  void *VAR_3,
                  work_callback_t VAR_4,
                  void *VAR_5,
                  svn_cancel_func_t VAR_6,
                  void *VAR_7,
                  svn_wc_notify_func2_t VAR_8,
                  void *VAR_9,
                  int VAR_10,
                  apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  svn_error_t *VAR_13;

  VAR_12 = FUNC_2(VAR_0->sdb);
  if (!VAR_12)
    {
      VAR_12 = VAR_2(VAR_3, VAR_0, VAR_1, VAR_11);

      VAR_12 = FUNC_4(VAR_0->sdb, VAR_12);
    }

  if (VAR_12 == ((void*)0) && VAR_8 != ((void*)0))
    {
      VAR_13 = VAR_4(VAR_5, VAR_0,
                     VAR_6, VAR_7,
                     VAR_8, VAR_9,
                     VAR_11);
      VAR_12 = FUNC_0(VAR_12, VAR_13);
    }

  VAR_13 = FUNC_3(VAR_0->sdb, VAR_10);

  return FUNC_1(FUNC_0(VAR_12, VAR_13));
}
