
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int (* svn_txdelta_window_handler_t ) (int *,void*) ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
struct txdelta_baton {int * checksum; int context; int * result_pool; int buf; scalar_t__ pos; void* more; void* more_source; int * target; int * source; int member_0; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,struct txdelta_baton*,int *) ;

svn_error_t *
FUNC_8(svn_stream_t *VAR_3,
                svn_stream_t *VAR_4,
                svn_txdelta_window_handler_t VAR_5,
                void *VAR_6,
                svn_checksum_kind_t VAR_7,
                svn_checksum_t **VAR_8,
                svn_cancel_func_t VAR_9,
                void *VAR_10,
                apr_pool_t *VAR_11,
                apr_pool_t *VAR_12)
{
  apr_pool_t *VAR_13 = FUNC_5(VAR_12);
  struct txdelta_baton VAR_14 = { 0 };
  svn_txdelta_window_t *VAR_15;

  VAR_14.source = VAR_3;
  VAR_14.target = VAR_4;
  VAR_14.more_source = VAR_2;
  VAR_14.more = VAR_2;
  VAR_14.pos = 0;
  VAR_14.buf = FUNC_1(VAR_12, 2 * VAR_0);
  VAR_14.result_pool = VAR_11;

  if (VAR_8 != ((void*)0))
    VAR_14.context = FUNC_3(VAR_7, VAR_12);

  do
    {

      FUNC_4(VAR_13);


      FUNC_0(FUNC_7(&VAR_15, &VAR_14, VAR_13));


      FUNC_0((*VAR_5)(VAR_15, VAR_6));

      if (VAR_9)
        FUNC_0(VAR_9(VAR_10));
    }
  while (VAR_15 != ((void*)0));

  FUNC_6(VAR_13);

  if (VAR_8 != ((void*)0))
    *VAR_8 = VAR_14.checksum;

  return VAR_1;
}
