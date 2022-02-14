
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct revision_baton* fetch_baton; int fetch_base_func; int fetch_kind_func; int fetch_props_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
struct revision_baton {int dummy; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static svn_delta_shim_callbacks_t *
FUNC_1(struct revision_baton *VAR_3,
                   apr_pool_t *VAR_4)
{
  svn_delta_shim_callbacks_t *VAR_5 =
                        FUNC_0(VAR_4);

  VAR_5->fetch_props_func = VAR_2;
  VAR_5->fetch_kind_func = VAR_1;
  VAR_5->fetch_base_func = VAR_0;
  VAR_5->fetch_baton = VAR_3;

  return VAR_5;
}
