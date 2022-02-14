
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_diff_fns_t ;
struct TYPE_3__ {int token_discard_all; int token_discard; int token_compare; int datasource_get_next_token; int datasource_close; int datasources_open; } ;
typedef TYPE_1__ svn_diff_fns2_t ;
struct fns_wrapper_baton {int const* vtable; void* old_baton; } ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(svn_diff_fns2_t **VAR_6,
              struct fns_wrapper_baton **VAR_7,
              const svn_diff_fns_t *VAR_8,
              void *VAR_9,
              apr_pool_t *VAR_10)
{

  *VAR_6 = FUNC_0(VAR_10, sizeof(**VAR_6));

  (*VAR_6)->datasources_open = VAR_2;
  (*VAR_6)->datasource_close = VAR_0;
  (*VAR_6)->datasource_get_next_token = VAR_1;
  (*VAR_6)->token_compare = VAR_3;
  (*VAR_6)->token_discard = VAR_4;
  (*VAR_6)->token_discard_all = VAR_5;


  *VAR_7 = FUNC_0(VAR_10, sizeof (**VAR_7));
  (*VAR_7)->old_baton = VAR_9;
  (*VAR_7)->vtable = VAR_8;
}
