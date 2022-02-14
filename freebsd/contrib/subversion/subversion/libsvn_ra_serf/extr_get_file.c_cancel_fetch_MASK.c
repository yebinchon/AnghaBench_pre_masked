
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {scalar_t__ read_size; scalar_t__ aborted_read_size; scalar_t__ aborted_read; scalar_t__ read_headers; } ;
typedef TYPE_1__ stream_ctx_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;


 int FUNC_0 () ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_1(serf_request_t *VAR_2,
             serf_bucket_t *VAR_3,
             int VAR_4,
             void *VAR_5)
{
  stream_ctx_t *VAR_6 = VAR_5;






  if (!VAR_3)
    {




      if (VAR_6->read_headers)
        {
          if (!VAR_6->aborted_read && VAR_6->read_size)
            {
              VAR_6->aborted_read = VAR_1;
              VAR_6->aborted_read_size = VAR_6->read_size;
            }
          VAR_6->read_size = 0;
        }

      return VAR_0;
    }


  FUNC_0();
}
