
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_history_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* prev ) (TYPE_2__**,TYPE_2__*,int ,int *,int *) ;} ;


 int FUNC_0 (TYPE_2__**,TYPE_2__*,int ,int *,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_fs_history_t **VAR_0,
                     svn_fs_history_t *VAR_1, svn_boolean_t VAR_2,
                     apr_pool_t *VAR_3, apr_pool_t *VAR_4)
{
  return FUNC_1(VAR_1->vtable->prev(VAR_0, VAR_1,
                                               VAR_2, VAR_3,
                                               VAR_4));
}
