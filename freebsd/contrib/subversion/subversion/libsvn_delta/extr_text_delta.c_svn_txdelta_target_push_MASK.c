
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
struct tpush_baton {scalar_t__ target_len; int source_done; scalar_t__ source_len; scalar_t__ source_offset; void* buf; int * pool; void* whb; int wh; int * source; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int * FUNC_1 (struct tpush_baton*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

svn_stream_t *
FUNC_4(svn_txdelta_window_handler_t VAR_4,
                        void *VAR_5, svn_stream_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  struct tpush_baton *VAR_8;
  svn_stream_t *VAR_9;


  VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->source = VAR_6;
  VAR_8->wh = VAR_4;
  VAR_8->whb = VAR_5;
  VAR_8->pool = VAR_7;
  VAR_8->buf = FUNC_0(VAR_7, 2 * VAR_1);
  VAR_8->source_offset = 0;
  VAR_8->source_len = 0;
  VAR_8->source_done = VAR_0;
  VAR_8->target_len = 0;


  VAR_9 = FUNC_1(VAR_8, VAR_7);
  FUNC_3(VAR_9, VAR_3);
  FUNC_2(VAR_9, VAR_2);
  return VAR_9;
}
