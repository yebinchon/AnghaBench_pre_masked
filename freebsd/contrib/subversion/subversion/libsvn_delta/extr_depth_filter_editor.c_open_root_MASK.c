
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct node_baton {int wrapped_baton; } ;
struct edit_baton {int wrapped_edit_baton; TYPE_1__* wrapped_editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* open_root ) (int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct node_baton* FUNC_1 (void*,int ,int,int *) ;
 int FUNC_2 (int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4,
          void **VAR_5)
{
  struct edit_baton *VAR_6 = VAR_2;
  struct node_baton *VAR_7;


  VAR_7 = FUNC_1(VAR_2, VAR_0, 1, VAR_4);
  FUNC_0(VAR_6->wrapped_editor->open_root(VAR_6->wrapped_edit_baton, VAR_3,
                                        VAR_4, &VAR_7->wrapped_baton));

  *VAR_5 = VAR_7;
  return VAR_1;
}
