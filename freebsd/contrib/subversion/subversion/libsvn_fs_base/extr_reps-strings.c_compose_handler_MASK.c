
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ sview_len; scalar_t__ src_ops; scalar_t__ tview_len; } ;
typedef TYPE_2__ svn_txdelta_window_t ;
typedef int svn_error_t ;
struct compose_handler_baton {int done; scalar_t__ init; int * window_pool; TYPE_2__* window; TYPE_1__* trail; int source_buf; } ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {scalar_t__ pool; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,int ,scalar_t__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_txdelta_window_t *VAR_3, void *VAR_4)
{
  struct compose_handler_baton *VAR_5 = VAR_4;
  FUNC_0(!VAR_5->done || VAR_3 == ((void*)0));
  FUNC_0(VAR_5->trail && VAR_5->trail->pool);

  if (!VAR_5->init && !VAR_3)
    return VAR_1;



  FUNC_0(!VAR_5->source_buf);

  if (VAR_5->window)
    {
      if (VAR_3 && (VAR_3->sview_len == 0 || VAR_3->src_ops == 0))
        {




          apr_size_t VAR_6 = VAR_3->tview_len;
          FUNC_0(VAR_5->window->sview_len == VAR_6);
          VAR_5->source_buf = FUNC_1(VAR_5->window_pool, VAR_6);
          FUNC_4(VAR_3, ((void*)0),
                                         VAR_5->source_buf, &VAR_6);
          VAR_5->done = VAR_2;
        }
      else
        {

          apr_pool_t *VAR_7 = FUNC_2(VAR_5->trail->pool);
          svn_txdelta_window_t *VAR_8;

          VAR_8 = FUNC_5(VAR_3, VAR_5->window,
                                                  VAR_7);
          FUNC_3(VAR_5->window_pool);
          VAR_5->window = VAR_8;
          VAR_5->window_pool = VAR_7;
          VAR_5->done = (VAR_8->sview_len == 0 || VAR_8->src_ops == 0);
        }
    }
  else if (VAR_3)
    {

      apr_pool_t *VAR_9 = FUNC_2(VAR_5->trail->pool);
      FUNC_0(VAR_5->window_pool == ((void*)0));
      VAR_5->window = FUNC_6(VAR_3, VAR_9);
      VAR_5->window_pool = VAR_9;
      VAR_5->done = (VAR_3->sview_len == 0 || VAR_3->src_ops == 0);
    }
  else
    VAR_5->done = VAR_2;

  VAR_5->init = VAR_0;
  return VAR_1;
}
