
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_serf__server_error_t ;
struct TYPE_4__ {int code; } ;
struct TYPE_5__ {int discard_body; int * server_error; int handler_pool; TYPE_1__ sline; } ;
typedef TYPE_2__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (int **,TYPE_2__*,int ,int ,int ) ;

svn_error_t *
FUNC_6(serf_request_t *VAR_3,
                               serf_bucket_t *VAR_4,
                               void *VAR_5,
                               apr_pool_t *VAR_6)
{
  svn_ra_serf__handler_t *VAR_7 = VAR_5;
  serf_bucket_t *VAR_8;
  const char *VAR_9;
  FUNC_1(VAR_7->server_error == ((void*)0));

  VAR_8 = FUNC_3(VAR_4);
  VAR_9 = FUNC_2(VAR_8, "Content-Type");
  if (VAR_9
      && (VAR_7->sline.code < 200 || VAR_7->sline.code >= 300)
      && FUNC_4(VAR_9, "text/xml", sizeof("text/xml") - 1) == 0)
    {
      svn_ra_serf__server_error_t *VAR_10;

      FUNC_0(FUNC_5(&VAR_10, VAR_7,
                                               VAR_0,
                                               VAR_7->handler_pool,
                                               VAR_7->handler_pool));

      VAR_7->server_error = VAR_10;
    }
  else
    {


      VAR_7->discard_body = VAR_2;
    }




  return VAR_1;
}
