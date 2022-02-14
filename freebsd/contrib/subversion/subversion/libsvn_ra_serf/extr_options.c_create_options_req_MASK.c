
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_ra_serf__xml_context_t ;
struct TYPE_11__ {int path; } ;
struct TYPE_12__ {TYPE_1__ session_url; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
struct TYPE_13__ {char* method; char* body_type; TYPE_4__* response_baton; int response_handler; int body_delegate; int path; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_14__ {struct TYPE_14__* inner_baton; int inner_handler; TYPE_3__* handler; int youngest_rev; TYPE_2__* session; int * pool; } ;
typedef TYPE_4__ options_context_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int *,int *,int *) ;
 int * FUNC_2 (int ,int *,int ,int *,TYPE_4__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(options_context_t **VAR_6,
                   svn_ra_serf__session_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  options_context_t *VAR_9;
  svn_ra_serf__xml_context_t *VAR_10;
  svn_ra_serf__handler_t *VAR_11;

  VAR_9 = FUNC_0(VAR_8, sizeof(*VAR_9));
  VAR_9->pool = VAR_8;
  VAR_9->session = VAR_7;

  VAR_9->youngest_rev = VAR_0;

  VAR_10 = FUNC_2(VAR_5,
                                           ((void*)0), VAR_3, ((void*)0),
                                           VAR_9,
                                           VAR_8);
  VAR_11 = FUNC_1(VAR_7, VAR_10, ((void*)0), VAR_8);

  VAR_11->method = "OPTIONS";
  VAR_11->path = VAR_7->session_url.path;
  VAR_11->body_delegate = VAR_2;
  VAR_11->body_type = "text/xml";

  VAR_9->handler = VAR_11;

  VAR_9->inner_handler = VAR_11->response_handler;
  VAR_9->inner_baton = VAR_11->response_baton;
  VAR_11->response_handler = VAR_4;
  VAR_11->response_baton = VAR_9;

  *VAR_6 = VAR_9;

  return VAR_1;
}
