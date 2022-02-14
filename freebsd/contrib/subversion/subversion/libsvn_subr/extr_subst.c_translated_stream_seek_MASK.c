
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct translated_stream_baton {scalar_t__ readbuf_off; int readbuf; scalar_t__ written; TYPE_5__* out_baton; TYPE_3__* in_baton; int stream; int buf; int iterpool; } ;
struct TYPE_7__ {int buf; scalar_t__ readbuf_off; TYPE_1__* readbuf; scalar_t__ written; TYPE_5__* out_baton; TYPE_3__* in_baton; } ;
struct TYPE_9__ {TYPE_2__ saved_baton; int mark; } ;
typedef TYPE_4__ mark_translated_t ;
struct TYPE_10__ {scalar_t__ src_format_len; scalar_t__ keyword_off; scalar_t__ newline_off; } ;
struct TYPE_8__ {scalar_t__ src_format_len; scalar_t__ keyword_off; scalar_t__ newline_off; } ;
struct TYPE_6__ {int len; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_5__*,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3, const svn_stream_mark_t *VAR_4)
{
  struct translated_stream_baton *VAR_5 = VAR_3;

  if (VAR_4 != ((void*)0))
    {
      const mark_translated_t *VAR_6 = (const mark_translated_t *)VAR_4;


      if (VAR_5->written)
        FUNC_0(FUNC_6(VAR_5->stream, VAR_5->out_baton, ((void*)0), 0,
                                VAR_5->iterpool));

      FUNC_0(FUNC_3(VAR_5->stream, VAR_6->mark));


      *VAR_5->in_baton = *VAR_6->saved_baton.in_baton;
      *VAR_5->out_baton = *VAR_6->saved_baton.out_baton;
      VAR_5->written = VAR_6->saved_baton.written;
      FUNC_5(VAR_5->readbuf);
      FUNC_4(VAR_5->readbuf, VAR_6->saved_baton.readbuf->data,
                                VAR_6->saved_baton.readbuf->len);
      VAR_5->readbuf_off = VAR_6->saved_baton.readbuf_off;
      FUNC_1(VAR_5->buf, VAR_6->saved_baton.buf, VAR_2);
    }
  else
    {
      FUNC_0(FUNC_2(VAR_5->stream));

      VAR_5->in_baton->newline_off = 0;
      VAR_5->in_baton->keyword_off = 0;
      VAR_5->in_baton->src_format_len = 0;
      VAR_5->out_baton->newline_off = 0;
      VAR_5->out_baton->keyword_off = 0;
      VAR_5->out_baton->src_format_len = 0;

      VAR_5->written = VAR_0;
      FUNC_5(VAR_5->readbuf);
      VAR_5->readbuf_off = 0;
    }

  return VAR_1;
}
