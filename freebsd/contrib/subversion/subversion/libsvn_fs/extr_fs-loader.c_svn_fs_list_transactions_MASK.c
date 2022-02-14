
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_5__ {int (* list_transactions ) (int **,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int **,TYPE_2__*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(apr_array_header_t **VAR_0, svn_fs_t *VAR_1,
                         apr_pool_t *VAR_2)
{
  return FUNC_1(VAR_1->vtable->list_transactions(VAR_0, VAR_1, VAR_2));
}
