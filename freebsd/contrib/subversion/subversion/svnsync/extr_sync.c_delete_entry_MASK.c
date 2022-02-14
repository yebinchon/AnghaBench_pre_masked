
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int wrapped_node_baton; TYPE_3__* edit_baton; } ;
typedef TYPE_2__ node_baton_t ;
struct TYPE_6__ {TYPE_1__* wrapped_editor; } ;
typedef TYPE_3__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * (* delete_entry ) (char const*,int ,int ,int *) ;} ;


 int * FUNC_0 (char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_0,
             svn_revnum_t VAR_1,
             void *VAR_2,
             apr_pool_t *VAR_3)
{
  node_baton_t *VAR_4 = VAR_2;
  edit_baton_t *VAR_5 = VAR_4->edit_baton;

  return VAR_5->wrapped_editor->delete_entry(VAR_0, VAR_1,
                                          VAR_4->wrapped_node_baton, VAR_3);
}
