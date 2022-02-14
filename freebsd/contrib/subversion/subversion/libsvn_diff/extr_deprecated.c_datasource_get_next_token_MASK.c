
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_datasource_e ;
struct fns_wrapper_baton {int old_baton; TYPE_1__* vtable; } ;
typedef int apr_uint32_t ;
struct TYPE_2__ {int * (* datasource_get_next_token ) (int *,void**,int ,int ) ;} ;


 int * FUNC_0 (int *,void**,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(apr_uint32_t *VAR_0,
                          void **VAR_1,
                          void *VAR_2,
                          svn_diff_datasource_e VAR_3)
{
  struct fns_wrapper_baton *VAR_4 = VAR_2;
  return VAR_4->vtable->datasource_get_next_token(VAR_0, VAR_1, VAR_4->old_baton,
                                                VAR_3);
}
