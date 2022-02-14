
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_ra_serf__connection_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ num_active_propfinds; int target_rev; TYPE_5__* sess; scalar_t__ num_active_fetches; } ;
typedef TYPE_1__ report_context_t ;
struct TYPE_11__ {TYPE_3__* propfind_handler; int pool; int url; scalar_t__ fetch_props; TYPE_1__* ctx; } ;
typedef TYPE_2__ dir_baton_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {scalar_t__ num_conns; scalar_t__ max_connections; } ;
struct TYPE_12__ {TYPE_2__* done_delegate_baton; int done_delegate; int * conn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__**,TYPE_5__*,int ,int ,char*,int ,int ,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(dir_baton_t *VAR_4,
              apr_pool_t *VAR_5)
{
  report_context_t *VAR_6 = VAR_4->ctx;
  svn_ra_serf__connection_t *VAR_7;


  if (VAR_6->sess->num_conns < VAR_6->sess->max_connections)
    FUNC_0(FUNC_3(VAR_6->sess, VAR_6->num_active_fetches +
                                                 VAR_6->num_active_propfinds));


  VAR_7 = FUNC_2(VAR_6);


  if (VAR_4->fetch_props)
    {
      FUNC_0(FUNC_4(&VAR_4->propfind_handler,
                                                   VAR_6->sess, VAR_4->url,
                                                   VAR_6->target_rev, "0",
                                                   VAR_1,
                                                   VAR_3, VAR_4,
                                                   VAR_4->pool));

      VAR_4->propfind_handler->conn = VAR_7;
      VAR_4->propfind_handler->done_delegate = VAR_2;
      VAR_4->propfind_handler->done_delegate_baton = VAR_4;


      FUNC_5(VAR_4->propfind_handler);

      VAR_6->num_active_propfinds++;
    }
  else
    FUNC_1();

  return VAR_0;
}
