
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
struct encoder_baton {int version; int compression_level; int scratch_pool; int header_done; int * output; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 struct encoder_baton* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

void
FUNC_2(svn_txdelta_window_handler_t *VAR_2,
                        void **VAR_3,
                        svn_stream_t *VAR_4,
                        int VAR_5,
                        int VAR_6,
                        apr_pool_t *VAR_7)
{
  struct encoder_baton *VAR_8;

  VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->output = VAR_4;
  VAR_8->header_done = VAR_0;
  VAR_8->scratch_pool = FUNC_1(VAR_7);
  VAR_8->version = VAR_5;
  VAR_8->compression_level = VAR_6;

  *VAR_2 = VAR_1;
  *VAR_3 = VAR_8;
}
