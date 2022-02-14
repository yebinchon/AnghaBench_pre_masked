
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_lock_callback_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int (* unlock ) (TYPE_2__*,int *,int ,int ,void*,int *,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ,void*,int *,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_0,
                   apr_hash_t *VAR_1,
                   svn_boolean_t VAR_2,
                   svn_fs_lock_callback_t VAR_3,
                   void *VAR_4,
                   apr_pool_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  return FUNC_1(VAR_0->vtable->unlock(VAR_0, VAR_1, VAR_2,
                                            VAR_3, VAR_4,
                                            VAR_5, VAR_6));
}
