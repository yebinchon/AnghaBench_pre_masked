
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int date; void* comment; void* owner; void* token; } ;
typedef TYPE_1__ svn_wc__db_lock_t ;
typedef int svn_sqlite__stmt_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int,int *) ;

__attribute__((used)) static svn_wc__db_lock_t *
FUNC_4(svn_sqlite__stmt_t *VAR_0,
                  int VAR_1,
                  int VAR_2,
                  int VAR_3,
                  int VAR_4,
                  apr_pool_t *VAR_5)
{
  svn_wc__db_lock_t *VAR_6;

  if (FUNC_2(VAR_0, VAR_1))
    {
      VAR_6 = ((void*)0);
    }
  else
    {
      VAR_6 = FUNC_0(VAR_5, sizeof(svn_wc__db_lock_t));
      VAR_6->token = FUNC_3(VAR_0, VAR_1, VAR_5);
      VAR_6->owner = FUNC_3(VAR_0, VAR_2, VAR_5);
      VAR_6->comment = FUNC_3(VAR_0, VAR_3, VAR_5);
      VAR_6->date = FUNC_1(VAR_0, VAR_4);
    }
  return VAR_6;
}
