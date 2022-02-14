
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * (* svn_txdelta_window_handler_t ) (int *,void*) ;
typedef int svn_txdelta_stream_t ;
typedef int svn_error_t ;
struct context {scalar_t__ text_deltas; TYPE_1__* editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* apply_textdelta ) (void*,char const*,int *,int * (*) (int *,void*),void**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,char const*,int *,int * (*) (int *,void*),void**) ;
 int * FUNC_2 (int *,int * (*) (int *,void*),void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct context *VAR_0,
                void *VAR_1,
                const char *VAR_2,
                svn_txdelta_stream_t *VAR_3,
                apr_pool_t *VAR_4)
{
  svn_txdelta_window_handler_t VAR_5;
  void *VAR_6;


  FUNC_0(VAR_0->editor->apply_textdelta
          (VAR_1, VAR_2, VAR_4,
           VAR_5, &VAR_6));

  if (VAR_0->text_deltas && VAR_3)
    {

      return FUNC_2(VAR_3,
                                       VAR_5,
                                       VAR_6,
                                       VAR_4);
    }
  else
    {


      return VAR_5(((void*)0), VAR_6);
    }
}
