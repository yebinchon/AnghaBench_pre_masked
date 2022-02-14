
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ spillbuf; struct TYPE_16__* inner_handler_baton; int inner_handler; TYPE_6__* report; } ;
typedef TYPE_3__ update_delay_baton_t ;
struct TYPE_17__ {int cur_conn; int num_conns; TYPE_1__** conns; int timeout; } ;
typedef TYPE_4__ svn_ra_serf__session_t ;
struct TYPE_18__ {scalar_t__ server_error; scalar_t__ done; TYPE_3__* response_baton; int response_handler; } ;
typedef TYPE_5__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_19__ {int editor_baton; TYPE_2__* editor; scalar_t__ done; scalar_t__ num_active_propfinds; scalar_t__ num_active_fetches; TYPE_4__* sess; } ;
typedef TYPE_6__ report_context_t ;
typedef int apr_pool_t ;
typedef int apr_interval_time_t ;
struct TYPE_15__ {int * (* close_edit ) (int ,int *) ;} ;
struct TYPE_14__ {int bkt_alloc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (int *,int) ;
 int * FUNC_4 (TYPE_4__*,int ) ;
 int * FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_4__*,int *,int *) ;
 int * FUNC_14 (TYPE_5__*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_15(report_context_t *VAR_3,
                      svn_ra_serf__handler_t *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_ra_serf__session_t *VAR_6 = VAR_3->sess;
  apr_pool_t *VAR_7 = FUNC_11(VAR_5);
  apr_interval_time_t VAR_8 = VAR_6->timeout;
  update_delay_baton_t *VAR_9;



  VAR_9 = FUNC_3(VAR_5, sizeof(*VAR_9));
  VAR_9->report = VAR_3;

  VAR_9->inner_handler = VAR_4->response_handler;
  VAR_9->inner_handler_baton = VAR_4->response_baton;

  VAR_4->response_handler = VAR_2;
  VAR_4->response_baton = VAR_9;


  FUNC_0(FUNC_4(VAR_6, 0));

  VAR_6->cur_conn = 1;






  while (!VAR_4->done
         || VAR_3->num_active_fetches
         || VAR_3->num_active_propfinds
         || !VAR_3->done)
    {
      svn_error_t *VAR_10;
      int VAR_11;

      FUNC_10(VAR_7);

      VAR_10 = FUNC_13(VAR_6, &VAR_8, VAR_7);

      if (VAR_4->done && VAR_4->server_error)
        {
          FUNC_8(VAR_10);
          VAR_10 = FUNC_14(VAR_4, VAR_7);

          FUNC_1(VAR_10 != ((void*)0));
        }

      FUNC_0(VAR_10);


      if (VAR_9->spillbuf)
        FUNC_0(FUNC_5(VAR_9, VAR_7));


      for (VAR_11 = 0; VAR_11 < VAR_6->num_conns; VAR_11++)
        {
          FUNC_6(VAR_6->conns[VAR_11]->bkt_alloc);
        }
    }

  FUNC_10(VAR_7);


  if (VAR_3->done)
    FUNC_0(VAR_3->editor->close_edit(VAR_3->editor_baton, VAR_7));
  else
    return FUNC_9(VAR_0, ((void*)0),
                            FUNC_2("Missing update-report close tag"));

  FUNC_12(VAR_7);
  return VAR_1;
}
