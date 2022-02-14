
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handler_baton; int handler; scalar_t__ read_pos; int hit_eof; int window_buffer; int * txstream; int scratch_pool; } ;
typedef TYPE_1__ svndiff_stream_baton_t ;
typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

svn_stream_t *
FUNC_7(svn_txdelta_stream_t *VAR_3,
                              int VAR_4,
                              int VAR_5,
                              apr_pool_t *VAR_6)
{
  svndiff_stream_baton_t *VAR_7;
  svn_stream_t *VAR_8;
  svn_stream_t *VAR_9;

  VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));
  VAR_7->scratch_pool = FUNC_1(VAR_6);
  VAR_7->txstream = VAR_3;
  VAR_7->window_buffer = FUNC_5(VAR_6);
  VAR_7->hit_eof = VAR_0;
  VAR_7->read_pos = 0;

  VAR_8 = FUNC_2(VAR_7, VAR_6);
  FUNC_4(VAR_8, VAR_2);







  FUNC_6(&VAR_7->handler, &VAR_7->handler_baton,
                          VAR_8, VAR_4,
                          VAR_5, VAR_6);

  VAR_9 = FUNC_2(VAR_7, VAR_6);
  FUNC_3(VAR_9, ((void*)0), VAR_1);

  return VAR_9;
}
