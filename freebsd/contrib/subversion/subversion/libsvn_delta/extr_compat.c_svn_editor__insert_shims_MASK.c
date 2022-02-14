
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_editor_t ;
struct TYPE_3__ {int fetch_baton; int * fetch_base_func; int * fetch_props_func; int * fetch_kind_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
typedef int svn_delta_editor_t ;
typedef int svn_delta__unlock_func_t ;
typedef int svn_boolean_t ;
struct svn_delta__extra_baton {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int const**,void**,int *,int ,void*,int *,char const*,char const*,int *,int ,int *,int ,struct svn_delta__extra_baton*,int *) ;
 int FUNC_4 (int **,struct svn_delta__extra_baton**,int *,void**,int const*,void*,int *,char const*,char const*,int *,int *,int *,int ,int *,int ,int *,int *) ;

svn_error_t *
FUNC_5(const svn_delta_editor_t **VAR_1,
                         void **VAR_2,
                         const svn_delta_editor_t *VAR_3,
                         void *VAR_4,
                         const char *VAR_5,
                         const char *VAR_6,
                         svn_delta_shim_callbacks_t *VAR_7,
                         apr_pool_t *VAR_8,
                         apr_pool_t *VAR_9)
{


  *VAR_1 = VAR_3;
  *VAR_2 = VAR_4;
  return VAR_0;
}
