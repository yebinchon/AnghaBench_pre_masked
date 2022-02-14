
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int wrapped_node_baton; TYPE_3__* edit_baton; } ;
typedef TYPE_2__ node_baton_t ;
struct TYPE_6__ {TYPE_1__* wrapped_editor; scalar_t__ got_textdeltas; int quiet; } ;
typedef TYPE_3__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * (* apply_textdelta ) (int ,char const*,int *,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*) ;
 int VAR_1 ;
 int * FUNC_2 (int ,char const*,int *,int *,void**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4,
                svn_txdelta_window_handler_t *VAR_5,
                void **VAR_6)
{
  node_baton_t *VAR_7 = VAR_2;
  edit_baton_t *VAR_8 = VAR_7->edit_baton;

  if (! VAR_8->quiet)
    {
      if (! VAR_8->got_textdeltas)
        FUNC_0(FUNC_4(VAR_4, FUNC_1("Transmitting file data ")));
      FUNC_0(FUNC_4(VAR_4, "."));
      FUNC_0(FUNC_3(VAR_1));
    }

  VAR_8->got_textdeltas = VAR_0;
  return VAR_8->wrapped_editor->apply_textdelta(VAR_7->wrapped_node_baton,
                                             VAR_3, VAR_4,
                                             VAR_5, VAR_6);
}
