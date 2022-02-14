
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_stream_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_boolean_t ;
struct txdelta_baton {int * result_pool; int * context; int buf; void* more; void* more_source; int * target; int * source; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct txdelta_baton* FUNC_1 (int *,int) ;
 int * FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_3 (struct txdelta_baton*,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(svn_txdelta_stream_t **VAR_5,
             svn_stream_t *VAR_6,
             svn_stream_t *VAR_7,
             svn_boolean_t VAR_8,
             apr_pool_t *VAR_9)
{
  struct txdelta_baton *VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10));

  VAR_10->source = VAR_6;
  VAR_10->target = VAR_7;
  VAR_10->more_source = VAR_1;
  VAR_10->more = VAR_1;
  VAR_10->buf = FUNC_0(VAR_9, 2 * VAR_0);
  VAR_10->context = VAR_8
             ? FUNC_2(VAR_2, VAR_9)
             : ((void*)0);
  VAR_10->result_pool = VAR_9;

  *VAR_5 = FUNC_3(VAR_10, VAR_4,
                                      VAR_3, VAR_9);
}
