
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* delete_node ) (TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (TYPE_2__*,char const*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_fs_root_t *VAR_0, const char *VAR_1, apr_pool_t *VAR_2)
{
  return FUNC_1(VAR_0->vtable->delete_node(VAR_0, VAR_1, VAR_2));
}
