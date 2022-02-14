
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int svn_branch__history_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int history; } ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_branch__state_t *VAR_1,
                         svn_branch__history_t **VAR_2,
                         apr_pool_t *VAR_3)
{
  if (VAR_2)
    {
      *VAR_2
        = FUNC_0(VAR_1->priv->history, VAR_3);
    }
  return VAR_0;
}
