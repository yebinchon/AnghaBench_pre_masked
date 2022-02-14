
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int wrapped_node_baton; TYPE_3__* edit_baton; } ;
typedef TYPE_2__ node_baton_t ;
struct TYPE_6__ {TYPE_1__* wrapped_editor; } ;
typedef TYPE_3__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * (* close_directory ) (int ,int *) ;} ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                apr_pool_t *VAR_1)
{
  node_baton_t *VAR_2 = VAR_0;
  edit_baton_t *VAR_3 = VAR_2->edit_baton;
  return VAR_3->wrapped_editor->close_directory(VAR_2->wrapped_node_baton, VAR_1);
}
