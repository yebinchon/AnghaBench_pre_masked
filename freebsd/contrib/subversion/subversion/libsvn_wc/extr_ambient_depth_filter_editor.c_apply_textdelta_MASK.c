
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct file_baton {int wrapped_baton; scalar_t__ ambiently_excluded; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* apply_textdelta ) (int ,char const*,int *,int *,void**) ;} ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char const*,int *,int *,void**) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4,
                svn_txdelta_window_handler_t *VAR_5,
                void **VAR_6)
{
  struct file_baton *VAR_7 = VAR_2;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;


  if (VAR_7->ambiently_excluded)
    {
      *VAR_5 = VAR_1;
      *VAR_6 = ((void*)0);
      return VAR_0;
    }

  return VAR_8->wrapped_editor->apply_textdelta(VAR_7->wrapped_baton,
                                             VAR_3, VAR_4,
                                             VAR_5, VAR_6);
}
