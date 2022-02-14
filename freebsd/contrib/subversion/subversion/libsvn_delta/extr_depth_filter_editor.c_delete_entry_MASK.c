
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct node_baton {int wrapped_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* delete_entry ) (char const*,int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (struct edit_baton*,struct node_baton*,int ) ;
 int FUNC_2 (char const*,int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_2,
             svn_revnum_t VAR_3,
             void *VAR_4,
             apr_pool_t *VAR_5)
{
  struct node_baton *VAR_6 = VAR_4;
  struct edit_baton *VAR_7 = VAR_6->edit_baton;
  if (FUNC_1(VAR_7, VAR_6, VAR_1))
    FUNC_0(VAR_7->wrapped_editor->delete_entry(VAR_2, VAR_3,
                                             VAR_6->wrapped_baton, VAR_5));

  return VAR_0;
}
