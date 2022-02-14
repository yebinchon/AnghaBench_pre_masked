
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_get_locks_callback_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* get_locks ) (TYPE_2__*,char const*,scalar_t__,int ,void*,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char const*,scalar_t__,int ,void*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int ) ;

svn_error_t *
FUNC_3(svn_fs_t *VAR_4, const char *VAR_5, svn_depth_t VAR_6,
                  svn_fs_get_locks_callback_t VAR_7,
                  void *VAR_8, apr_pool_t *VAR_9)
{
  FUNC_0((VAR_6 == VAR_0) ||
                 (VAR_6 == VAR_1) ||
                 (VAR_6 == VAR_2) ||
                 (VAR_6 == VAR_3));
  return FUNC_2(VAR_4->vtable->get_locks(VAR_4, VAR_5, VAR_6,
                                               VAR_7,
                                               VAR_8, VAR_9));
}
