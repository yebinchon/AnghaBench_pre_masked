
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_boolean_t ;
struct decode_baton {scalar_t__ window_header_len; int error_on_early_close; scalar_t__ header_bytes; scalar_t__ last_sview_len; scalar_t__ last_sview_offset; int * pool; int buffer; void* subpool; void* consumer_baton; scalar_t__ consumer_func; } ;
typedef int apr_pool_t ;


 struct decode_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int *) ;
 int * FUNC_2 (struct decode_baton*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

svn_stream_t *
FUNC_6(svn_txdelta_window_handler_t VAR_4,
                          void *VAR_5,
                          svn_boolean_t VAR_6,
                          apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;

  if (VAR_4 != VAR_2)
    {
      apr_pool_t *VAR_9 = FUNC_1(VAR_7);
      struct decode_baton *VAR_10 = FUNC_0(VAR_7, sizeof(*VAR_10));

      VAR_10->consumer_func = VAR_4;
      VAR_10->consumer_baton = VAR_5;
      VAR_10->pool = VAR_9;
      VAR_10->subpool = FUNC_1(VAR_9);
      VAR_10->buffer = FUNC_5(VAR_10->pool);
      VAR_10->last_sview_offset = 0;
      VAR_10->last_sview_len = 0;
      VAR_10->header_bytes = 0;
      VAR_10->error_on_early_close = VAR_6;
      VAR_10->window_header_len = 0;
      VAR_8 = FUNC_2(VAR_10, VAR_7);

      FUNC_4(VAR_8, VAR_3);
      FUNC_3(VAR_8, VAR_0);
    }
  else
    {


      VAR_8 = FUNC_2(((void*)0), VAR_7);
      FUNC_4(VAR_8, VAR_1);
    }
  return VAR_8;
}
