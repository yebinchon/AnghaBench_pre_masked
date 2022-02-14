
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct translated_stream_baton {int buf; int readbuf_off; int readbuf; int written; int out_baton; int in_baton; int stream; } ;
struct TYPE_4__ {void* buf; int readbuf_off; int readbuf; int written; void* out_baton; void* in_baton; } ;
struct TYPE_5__ {TYPE_1__ saved_baton; int mark; } ;
typedef TYPE_2__ mark_translated_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_2, svn_stream_mark_t **VAR_3, apr_pool_t *VAR_4)
{
  mark_translated_t *VAR_5;
  struct translated_stream_baton *VAR_6 = VAR_2;

  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  FUNC_0(FUNC_3(VAR_6->stream, &VAR_5->mark, VAR_4));


  VAR_5->saved_baton.in_baton = FUNC_2(VAR_4, VAR_6->in_baton,
                                         sizeof(*VAR_5->saved_baton.in_baton));
  VAR_5->saved_baton.out_baton = FUNC_2(VAR_4, VAR_6->out_baton,
                                          sizeof(*VAR_5->saved_baton.out_baton));
  VAR_5->saved_baton.written = VAR_6->written;
  VAR_5->saved_baton.readbuf = FUNC_4(VAR_6->readbuf, VAR_4);
  VAR_5->saved_baton.readbuf_off = VAR_6->readbuf_off;
  VAR_5->saved_baton.buf = FUNC_2(VAR_4, VAR_6->buf, VAR_1);

  *VAR_3 = (svn_stream_mark_t *)VAR_5;

  return VAR_0;
}
