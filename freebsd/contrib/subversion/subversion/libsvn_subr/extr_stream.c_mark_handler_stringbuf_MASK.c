
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct stringbuf_stream_mark {int pos; } ;
struct stringbuf_stream_baton {int amt_read; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 struct stringbuf_stream_mark* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, svn_stream_mark_t **VAR_2, apr_pool_t *VAR_3)
{
  struct stringbuf_stream_baton *VAR_4;
  struct stringbuf_stream_mark *VAR_5;

  VAR_4 = VAR_1;

  VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5));
  VAR_5->pos = VAR_4->amt_read;
  *VAR_2 = (svn_stream_mark_t *)VAR_5;
  return VAR_0;
}
