
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parents; } ;
typedef TYPE_1__ svn_branch__history_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int ,int *) ;

svn_branch__history_t *
FUNC_1(const svn_branch__history_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_branch__history_t *VAR_2 = ((void*)0);

  if (VAR_0)
    {
      VAR_2
        = FUNC_0(VAR_0->parents, VAR_1);
    }
  return VAR_2;
}
