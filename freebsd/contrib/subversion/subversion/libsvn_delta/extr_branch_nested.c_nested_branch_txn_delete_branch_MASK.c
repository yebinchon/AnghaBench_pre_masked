
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__txn_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int wrapped_txn; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_branch__txn_t *VAR_1,
                                const char *VAR_2,
                                apr_pool_t *VAR_3)
{

  FUNC_0(FUNC_1(VAR_1->priv->wrapped_txn,
                                        VAR_2,
                                        VAR_3));
  return VAR_0;
}
