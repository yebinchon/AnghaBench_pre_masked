
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct node_baton {TYPE_1__* node; int * parent_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {int node_pool; TYPE_1__* node; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {char action; int kind; } ;


 int * VAR_0 ;
 struct node_baton* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (char*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4,
          void **VAR_5)
{
  struct edit_baton *VAR_6 = VAR_2;
  struct node_baton *VAR_7 = FUNC_0(VAR_4, sizeof(*VAR_7));

  VAR_7->edit_baton = VAR_6;
  VAR_7->parent_baton = ((void*)0);
  VAR_7->node = (VAR_6->node = FUNC_1("", ((void*)0), VAR_6->node_pool));
  VAR_7->node->kind = VAR_1;
  VAR_7->node->action = 'R';
  *VAR_5 = VAR_7;

  return VAR_0;
}
