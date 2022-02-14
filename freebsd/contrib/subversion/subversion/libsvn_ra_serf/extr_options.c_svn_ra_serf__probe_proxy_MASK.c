
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int path; } ;
struct TYPE_12__ {int using_chunked_requests; TYPE_2__ session_url; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
struct TYPE_10__ {int code; } ;
struct TYPE_13__ {char* method; TYPE_1__ sline; int no_fail_on_http_failure_status; int body_delegate; int response_handler; int path; } ;
typedef TYPE_4__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int *) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_4__*) ;

svn_error_t *
FUNC_4(svn_ra_serf__session_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  svn_ra_serf__handler_t *VAR_7;

  VAR_7 = FUNC_2(VAR_5, VAR_6);
  VAR_7->method = "OPTIONS";
  VAR_7->path = VAR_5->session_url.path;


  VAR_7->response_handler = VAR_4;


  VAR_7->body_delegate = VAR_3;
  VAR_7->no_fail_on_http_failure_status = VAR_2;



  FUNC_0(FUNC_1(VAR_7, VAR_6));



  if (VAR_7->sline.code == 411)
    {
      VAR_5->using_chunked_requests = VAR_0;

      return VAR_1;
    }
  if (VAR_7->sline.code != 200)
    FUNC_0(FUNC_3(VAR_7));

  return VAR_1;
}
