
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_ra_serf__session_t ;
struct TYPE_14__ {int code; } ;
struct TYPE_15__ {char* method; char* body_type; TYPE_1__ sline; struct TYPE_15__* response_baton; int response_handler; TYPE_4__* body_delegate_baton; int body_delegate; TYPE_4__* header_delegate_baton; int header_delegate; int path; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
struct TYPE_16__ {scalar_t__ apr_err; struct TYPE_16__* child; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_17__ {int path; } ;
typedef TYPE_4__ proppatch_context_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t*
FUNC_4(svn_ra_serf__session_t *VAR_5,
                   proppatch_context_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  svn_ra_serf__handler_t *VAR_8;
  svn_error_t *VAR_9;

  VAR_8 = FUNC_2(VAR_5, VAR_7);

  VAR_8->method = "PROPPATCH";
  VAR_8->path = VAR_6->path;

  VAR_8->header_delegate = VAR_3;
  VAR_8->header_delegate_baton = VAR_6;

  VAR_8->body_delegate = VAR_2;
  VAR_8->body_delegate_baton = VAR_6;
  VAR_8->body_type = "text/xml";

  VAR_8->response_handler = VAR_4;
  VAR_8->response_baton = VAR_8;

  VAR_9 = FUNC_1(VAR_8, VAR_7);

  if (!VAR_9 && VAR_8->sline.code != 207)
    VAR_9 = FUNC_0(FUNC_3(VAR_8));



  if (VAR_9 && VAR_9->apr_err == VAR_1)
    {
      svn_error_t *VAR_10 = VAR_9;

      while (VAR_10 && VAR_10->apr_err == VAR_1)
        {
          VAR_10->apr_err = VAR_0;
          VAR_10 = VAR_10->child;
        }
    }

  return FUNC_0(VAR_9);
}
