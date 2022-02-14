
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct translated_stream_baton {scalar_t__ readbuf_off; TYPE_1__* readbuf; int iterpool; int in_baton; int * buf; int stream; } ;
typedef int apr_size_t ;
struct TYPE_3__ {scalar_t__ len; char* data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int *,int*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ,int *,int,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_2,
                       char *VAR_3,
                       apr_size_t *VAR_4)
{
  struct translated_stream_baton *VAR_5 = VAR_2;
  apr_size_t VAR_6 = VAR_1;
  apr_size_t VAR_7 = *VAR_4;
  apr_size_t VAR_8 = 0;
  if (VAR_7 == 1 && VAR_5->readbuf_off < VAR_5->readbuf->len)
    {

      *VAR_3 = VAR_5->readbuf->data[VAR_5->readbuf_off++];

      return VAR_0;
    }


  while (VAR_6 == VAR_1 && VAR_7 > 0)
    {
      apr_size_t VAR_9;
      apr_size_t VAR_10;

      FUNC_2(VAR_5->iterpool);

      if (! (VAR_5->readbuf_off < VAR_5->readbuf->len))
        {
          svn_stream_t *VAR_11;

          FUNC_6(VAR_5->readbuf);
          VAR_5->readbuf_off = 0;
          FUNC_0(FUNC_5(VAR_5->stream, VAR_5->buf, &VAR_6));
          VAR_11 = FUNC_4(VAR_5->readbuf, VAR_5->iterpool);

          FUNC_0(FUNC_7(VAR_11, VAR_5->in_baton, VAR_5->buf,
                                  VAR_6, VAR_5->iterpool));

          if (VAR_6 != VAR_1)
            FUNC_0(FUNC_7(VAR_11, VAR_5->in_baton, ((void*)0), 0,
                                    VAR_5->iterpool));

          FUNC_0(FUNC_3(VAR_11));
        }


      VAR_10 = VAR_5->readbuf->len - VAR_5->readbuf_off;
      VAR_9 = (VAR_10 > VAR_7)
        ? VAR_7 : VAR_10;
      FUNC_1(VAR_3 + VAR_8, VAR_5->readbuf->data + VAR_5->readbuf_off, VAR_9);
      VAR_8 += VAR_9;
      VAR_5->readbuf_off += VAR_9;
      VAR_7 -= VAR_9;
    }

  *VAR_4 -= VAR_7;

  return VAR_0;
}
