
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_context_t ;
struct TYPE_4__ {struct shim_callbacks_baton* fetch_baton; int fetch_base_func; int fetch_kind_func; int fetch_props_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
struct shim_callbacks_baton {int * relpath_map; int * wc_ctx; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (int *) ;
 struct shim_callbacks_baton* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;

svn_delta_shim_callbacks_t *
FUNC_3(svn_wc_context_t *VAR_3,
                               apr_hash_t *VAR_4,
                               apr_pool_t *VAR_5)
{
  svn_delta_shim_callbacks_t *VAR_6 =
                            FUNC_2(VAR_5);
  struct shim_callbacks_baton *VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));

  VAR_7->wc_ctx = VAR_3;
  if (VAR_4)
    VAR_7->relpath_map = VAR_4;
  else
    VAR_7->relpath_map = FUNC_0(VAR_5);

  VAR_6->fetch_props_func = VAR_2;
  VAR_6->fetch_kind_func = VAR_1;
  VAR_6->fetch_base_func = VAR_0;
  VAR_6->fetch_baton = VAR_7;

  return VAR_6;
}
