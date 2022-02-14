
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
struct node_baton {int dir_depth; int filtered; int * wrapped_baton; void* edit_baton; } ;
typedef int apr_pool_t ;


 struct node_baton* FUNC_0 (int *,int) ;

__attribute__((used)) static struct node_baton *
FUNC_1(void *VAR_0,
                svn_boolean_t VAR_1,
                int VAR_2,
                apr_pool_t *VAR_3)
{
  struct node_baton *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->edit_baton = VAR_0;
  VAR_4->wrapped_baton = ((void*)0);
  VAR_4->filtered = VAR_1;
  VAR_4->dir_depth = VAR_2;
  return VAR_4;
}
