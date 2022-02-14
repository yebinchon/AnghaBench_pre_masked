
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ config; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (int *,scalar_t__) ;

apr_hash_t *
FUNC_1(svn_fs_t *VAR_0, apr_pool_t *VAR_1)
{
  if (VAR_0->config)
    return FUNC_0(VAR_1, VAR_0->config);

  return ((void*)0);
}
