
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ read_size; scalar_t__ aborted_read_size; int result_stream; scalar_t__ aborted_read; TYPE_3__* handler; } ;
typedef TYPE_2__ stream_ctx_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_4__ {int code; } ;
struct TYPE_6__ {TYPE_1__ sline; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int,char const**,scalar_t__*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,char const*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_10(serf_request_t *VAR_1,
              serf_bucket_t *VAR_2,
              void *VAR_3,
              apr_pool_t *VAR_4)
{
  stream_ctx_t *VAR_5 = VAR_3;
  apr_status_t VAR_6;

  if (VAR_5->handler->sline.code != 200)
    return FUNC_6(FUNC_7(VAR_5->handler));

  while (1)
    {
      const char *VAR_7;
      apr_size_t VAR_8;

      VAR_6 = FUNC_5(VAR_2, 8000, &VAR_7, &VAR_8);
      if (FUNC_2(VAR_6))
        {
          return FUNC_8(VAR_6, ((void*)0));
        }

      VAR_5->read_size += VAR_8;

      if (VAR_5->aborted_read)
        {
          apr_off_t VAR_9;


          if (VAR_5->read_size < VAR_5->aborted_read_size)
            {

              if (FUNC_1(VAR_6))
                {
                  FUNC_4();
                }


              if (FUNC_0(VAR_6))
                {
                  return FUNC_8(VAR_6, ((void*)0));
                }
              continue;
            }


          VAR_5->aborted_read = VAR_0;


          VAR_9 = VAR_8 - (VAR_5->read_size - VAR_5->aborted_read_size);
          VAR_7 += VAR_9;
          VAR_8 -= (apr_size_t)VAR_9;
        }

      if (VAR_8)
        {
          apr_size_t VAR_10;

          VAR_10 = VAR_8;

          FUNC_3(FUNC_9(VAR_5->result_stream, VAR_7,
                                   &VAR_10));
        }

      if (VAR_6)
        {
          return FUNC_8(VAR_6, ((void*)0));
        }
    }

}
