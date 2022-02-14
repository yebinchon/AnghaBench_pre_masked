
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* node_prop ) (int **,TYPE_2__*,char const*,char const*,int *) ;} ;


 int FUNC_0 (int **,TYPE_2__*,char const*,char const*,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_string_t **VAR_0, svn_fs_root_t *VAR_1,
                 const char *VAR_2, const char *VAR_3, apr_pool_t *VAR_4)
{
  return FUNC_1(VAR_1->vtable->node_prop(VAR_0, VAR_1, VAR_2,
                                                 VAR_3, VAR_4));
}
