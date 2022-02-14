
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* check_path ) (scalar_t__*,TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,TYPE_2__*,char const*,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_2, svn_fs_root_t *VAR_3, const char *VAR_4,
              apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;

  FUNC_0(VAR_3->vtable->check_path(&VAR_6, VAR_3, VAR_4, VAR_5));
  *VAR_2 = (VAR_6 == VAR_1);
  return VAR_0;
}
