
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int svn_branch__history_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int history; } ;


 int * VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_branch__state_t *VAR_1,
                         const svn_branch__history_t *VAR_2,
                         apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_0(VAR_1);

  VAR_1->priv->history
    = FUNC_1(VAR_2, VAR_4);
  return VAR_0;
}
