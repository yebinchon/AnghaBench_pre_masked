
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int code; } ;
struct TYPE_12__ {char* method; TYPE_2__ sline; int * path; int no_fail_on_http_failure_status; struct TYPE_12__* response_baton; int response_handler; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int * txn_url; int * activity_url; TYPE_7__* session; } ;
typedef TYPE_4__ commit_context_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {TYPE_1__** conns; } ;
struct TYPE_10__ {int conn; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_5 (TYPE_7__*,int *) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3,
           apr_pool_t *VAR_4)
{
  commit_context_t *VAR_5 = VAR_3;
  svn_ra_serf__handler_t *VAR_6;



  if (! (VAR_5->activity_url || VAR_5->txn_url))
    return VAR_0;



  FUNC_2(VAR_5->session->conns[0]->conn);


  VAR_6 = FUNC_5(VAR_5->session, VAR_4);

  VAR_6->method = "DELETE";

  VAR_6->response_handler = VAR_2;
  VAR_6->response_baton = VAR_6;
  VAR_6->no_fail_on_http_failure_status = VAR_1;

  if (FUNC_1(VAR_5))
    VAR_6->path = VAR_5->txn_url;
  else
    VAR_6->path = VAR_5->activity_url;

  FUNC_0(FUNC_4(VAR_6, VAR_4));




  if (VAR_6->sline.code != 204
      && VAR_6->sline.code != 403
      && VAR_6->sline.code != 404)
    {
      return FUNC_3(FUNC_6(VAR_6));
    }


  VAR_5->activity_url = ((void*)0);
  VAR_5->txn_url = ((void*)0);

  return VAR_0;
}
