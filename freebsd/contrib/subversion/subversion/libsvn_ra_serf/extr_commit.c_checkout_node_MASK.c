
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int code; } ;
struct TYPE_11__ {char* body_type; char* method; char const* path; int * location; TYPE_1__ sline; struct TYPE_11__* response_baton; int response_handler; void* body_delegate_baton; int body_delegate; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ activity_url; int session; } ;
typedef TYPE_3__ commit_context_t ;
struct TYPE_13__ {int path; } ;
typedef TYPE_4__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_4__*) ;
 int VAR_2 ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 char* FUNC_8 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_4,
              const commit_context_t *VAR_5,
              const char *VAR_6,
              apr_pool_t *VAR_7,
              apr_pool_t *VAR_8)
{
  svn_ra_serf__handler_t *VAR_9;
  apr_status_t VAR_10;
  apr_uri_t VAR_11;



  VAR_9 = FUNC_6(VAR_5->session, VAR_8);

  VAR_9->body_delegate = VAR_2;
  VAR_9->body_delegate_baton = ( void *)VAR_5->activity_url;
  VAR_9->body_type = "text/xml";

  VAR_9->response_handler = VAR_3;
  VAR_9->response_baton = VAR_9;

  VAR_9->method = "CHECKOUT";
  VAR_9->path = VAR_6;

  FUNC_0(FUNC_5(VAR_9, VAR_8));

  if (VAR_9->sline.code != 201)
    return FUNC_4(FUNC_7(VAR_9));

  if (VAR_9->location == ((void*)0))
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("No Location header received"));






  VAR_10 = FUNC_2(VAR_8, VAR_9->location, &VAR_11);
  if (VAR_10)
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("Error parsing Location header value"));

  *VAR_4 = FUNC_8(VAR_11.path, VAR_7);

  return VAR_1;
}
