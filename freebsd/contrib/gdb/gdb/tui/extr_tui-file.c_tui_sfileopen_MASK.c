
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct tui_stream {char* ts_strbuf; int ts_buflen; int * ts_filestream; int ts_streamtype; } ;


 int VAR_0 ;
 struct ui_file* FUNC_0 () ;
 struct tui_stream* FUNC_1 (struct ui_file*) ;
 char* FUNC_2 (int) ;

struct ui_file *
FUNC_3 (int VAR_1)
{
  struct ui_file *VAR_2 = FUNC_0 ();
  struct tui_stream *VAR_3 = FUNC_1 (VAR_2);
  VAR_3->ts_streamtype = VAR_0;
  VAR_3->ts_filestream = ((void*)0);
  if (VAR_1 > 0)
    {
      VAR_3->ts_strbuf = FUNC_2 ((VAR_1 + 1) * sizeof (char));
      VAR_3->ts_strbuf[0] = '\0';
    }
  else


    VAR_3->ts_strbuf = ((void*)0);
  VAR_3->ts_buflen = VAR_1;
  return VAR_2;
}
