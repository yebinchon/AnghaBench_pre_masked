
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pool; } ;
typedef TYPE_1__ svn_packed__data_root_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_packed__data_root_t *
FUNC_1(apr_pool_t *VAR_0)
{
  svn_packed__data_root_t *VAR_1 = FUNC_0(VAR_0, sizeof(*VAR_1));
  VAR_1->pool = VAR_0;

  return VAR_1;
}
