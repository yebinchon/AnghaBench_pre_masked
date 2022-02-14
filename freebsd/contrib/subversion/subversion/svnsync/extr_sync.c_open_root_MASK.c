
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_6__ {void* edit_baton; int wrapped_node_baton; } ;
typedef TYPE_2__ node_baton_t ;
struct TYPE_7__ {int called_open_root; int wrapped_edit_baton; TYPE_1__* wrapped_editor; } ;
typedef TYPE_3__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* open_root ) (int ,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4,
          void **VAR_5)
{
  edit_baton_t *VAR_6 = VAR_2;
  node_baton_t *VAR_7 = FUNC_1(VAR_4, sizeof(*VAR_7));

  FUNC_0(VAR_6->wrapped_editor->open_root(VAR_6->wrapped_edit_baton,
                                        VAR_3, VAR_4,
                                        &VAR_7->wrapped_node_baton));

  VAR_6->called_open_root = VAR_1;
  VAR_7->edit_baton = VAR_2;
  *VAR_5 = VAR_7;

  return VAR_0;
}
