
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int txn; int bid; } ;
typedef TYPE_1__ svn_branch__state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char const**,int*,int ,int *) ;
 TYPE_1__* FUNC_1 (int ,char const*,int *) ;

void
FUNC_2(svn_branch__state_t **VAR_0,
                                     int *VAR_1,
                                     const svn_branch__state_t *VAR_2,
                                     apr_pool_t *VAR_3)
{
  const char *VAR_4;

  FUNC_0(&VAR_4, VAR_1, VAR_2->bid, VAR_3);
  *VAR_0 = ((void*)0);
  if (VAR_4)
    {
      *VAR_0
        = FUNC_1(VAR_2->txn, VAR_4,
                                           VAR_3);
    }
}
