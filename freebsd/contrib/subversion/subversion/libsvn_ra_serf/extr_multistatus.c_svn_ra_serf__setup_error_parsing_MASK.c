
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int response_baton; int response_handler; int xmlctx; int * pool; TYPE_3__* handler; int items; } ;
typedef TYPE_2__ svn_ra_serf__server_error_t ;
struct TYPE_8__ {int code; } ;
struct TYPE_10__ {int response_baton; int response_handler; TYPE_1__ sline; int session; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int expected_status ;
typedef int error_item_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 void* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ,int ,int*,int *) ;
 int FUNC_3 (int ,int ,int ,int *,TYPE_2__*,int *) ;

svn_error_t *
FUNC_4(svn_ra_serf__server_error_t **VAR_4,
                                 svn_ra_serf__handler_t *VAR_5,
                                 svn_boolean_t VAR_6,
                                 apr_pool_t *VAR_7,
                                 apr_pool_t *VAR_8)
{
  svn_ra_serf__server_error_t *VAR_9;
  svn_ra_serf__handler_t *VAR_10;

  int *VAR_11 = FUNC_1(VAR_7,
                                     2 * sizeof(VAR_11[0]));

  VAR_11[0] = VAR_5->sline.code;

  VAR_9 = FUNC_1(VAR_7, sizeof(*VAR_9));
  VAR_9->pool = VAR_7;

  VAR_9->items = FUNC_0(VAR_7, 4, sizeof(error_item_t *));
  VAR_9->handler = VAR_5;

  VAR_9->xmlctx = FUNC_3(VAR_3,
                                                     VAR_2,
                                                     VAR_1,
                                                     ((void*)0),
                                                     VAR_9,
                                                     VAR_9->pool);

  VAR_10 = FUNC_2(VAR_5->session,
                                                  VAR_9->xmlctx,
                                                  VAR_11,
                                                  VAR_7);


  VAR_10->sline = VAR_5->sline;
  VAR_9->response_handler = VAR_10->response_handler;
  VAR_9->response_baton = VAR_10->response_baton;

  *VAR_4 = VAR_9;
  return VAR_0;
}
