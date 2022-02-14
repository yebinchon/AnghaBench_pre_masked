
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int cb_alter_symlink; } ;
struct TYPE_5__ {TYPE_1__ funcs; } ;
typedef TYPE_2__ svn_editor_t ;
typedef int svn_editor_cb_alter_symlink_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

svn_error_t *
FUNC_0(svn_editor_t *VAR_1,
                               svn_editor_cb_alter_symlink_t VAR_2,
                               apr_pool_t *VAR_3)
{
  VAR_1->funcs.cb_alter_symlink = VAR_2;
  return VAR_0;
}
