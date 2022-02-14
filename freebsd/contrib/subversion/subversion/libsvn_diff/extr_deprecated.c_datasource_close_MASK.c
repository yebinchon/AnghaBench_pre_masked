
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_datasource_e ;
struct fns_wrapper_baton {int old_baton; TYPE_1__* vtable; } ;
struct TYPE_2__ {int * (* datasource_close ) (int ,int ) ;} ;


 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                 svn_diff_datasource_e VAR_1)
{
  struct fns_wrapper_baton *VAR_2 = VAR_0;
  return VAR_2->vtable->datasource_close(VAR_2->old_baton, VAR_1);
}
