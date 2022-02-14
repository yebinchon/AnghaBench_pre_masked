
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_freeze_func_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* freeze ) (TYPE_2__*,int ,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_1,
              svn_fs_freeze_func_t VAR_2,
              void *VAR_3,
              apr_pool_t *VAR_4)
{
  FUNC_0(VAR_1->vtable->freeze(VAR_1, VAR_2, VAR_3, VAR_4));

  return VAR_0;
}
