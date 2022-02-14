
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_branch__txn_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_5__ {int * (* get_branches ) (TYPE_2__ const*,int *) ;} ;


 int * FUNC_0 (TYPE_2__ const*,int *) ;

apr_array_header_t *
FUNC_1(const svn_branch__txn_t *VAR_0,
                             apr_pool_t *VAR_1)
{
  apr_array_header_t *VAR_2
    = VAR_0->vtable->get_branches(VAR_0,
                                VAR_1);
  return VAR_2;
}
