
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int * state_pool; int finished; void* completed_nodes; void* pending_incomplete_children; int scratch_pool; void* cancel_baton; int cancel_func; void* baton; } ;
typedef TYPE_1__ svn_editor_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_editor_t **VAR_2,
                  void *VAR_3,
                  svn_cancel_func_t VAR_4,
                  void *VAR_5,
                  apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  *VAR_2 = FUNC_1(VAR_6, sizeof(**VAR_2));

  (*VAR_2)->baton = VAR_3;
  (*VAR_2)->cancel_func = VAR_4;
  (*VAR_2)->cancel_baton = VAR_5;
  (*VAR_2)->scratch_pool = FUNC_2(VAR_6);
  return VAR_1;
}
