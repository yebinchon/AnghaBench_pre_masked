
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_serf__server_error_t ;
struct TYPE_3__ {int discard_body; int * server_error; int handler_pool; } ;
typedef TYPE_1__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (int **,TYPE_1__*,int ,int ,int ) ;

svn_error_t *
FUNC_6(serf_request_t *VAR_2,
                                     serf_bucket_t *VAR_3,
                                     void *VAR_4,
                                     apr_pool_t *VAR_5)
{
  svn_ra_serf__handler_t *VAR_6 = VAR_4;
  FUNC_1(VAR_6->server_error == ((void*)0));

    {
      serf_bucket_t *VAR_7;
      const char *VAR_8;

      VAR_7 = FUNC_3(VAR_3);
      VAR_8 = FUNC_2(VAR_7, "Content-Type");
      if (VAR_8 && FUNC_4(VAR_8, "text/xml", sizeof("text/xml") - 1) == 0)
        {
          svn_ra_serf__server_error_t *VAR_9;

          FUNC_0(FUNC_5(&VAR_9,
                                                   VAR_6,
                                                   VAR_1,
                                                   VAR_6->handler_pool,
                                                   VAR_6->handler_pool));

          VAR_6->server_error = VAR_9;
        }
      else
        {


          VAR_6->discard_body = VAR_1;
        }
    }




  return VAR_0;
}
