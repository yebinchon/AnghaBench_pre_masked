
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int code; } ;
struct TYPE_6__ {int no_fail_on_http_redirect_status; TYPE_1__ sline; scalar_t__ server_error; scalar_t__ no_fail_on_http_failure_status; int done; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_request_t *VAR_1,
              void *VAR_2,
              apr_pool_t *VAR_3)
{
  svn_ra_serf__handler_t *VAR_4 = VAR_2;

  FUNC_0(VAR_4->done);

  if (VAR_4->no_fail_on_http_failure_status)
    return VAR_0;

  if (VAR_4->server_error)
    return FUNC_2(VAR_4, VAR_3);

  if (VAR_4->sline.code >= 400 || VAR_4->sline.code <= 199)
    {
      return FUNC_1(FUNC_3(VAR_4));
    }

  if ((VAR_4->sline.code >= 300 && VAR_4->sline.code < 399)
      && !VAR_4->no_fail_on_http_redirect_status)
    {
      return FUNC_1(FUNC_3(VAR_4));
    }

  return VAR_0;
}
