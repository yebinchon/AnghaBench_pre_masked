
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct tui_stream {scalar_t__ ts_buflen; int * ts_strbuf; int * ts_filestream; int ts_streamtype; } ;
typedef int FILE ;


 int VAR_0 ;
 struct ui_file* FUNC_0 () ;
 struct tui_stream* FUNC_1 (struct ui_file*) ;

struct ui_file *
FUNC_2 (FILE *VAR_1)
{
  struct ui_file *VAR_2 = FUNC_0 ();
  struct tui_stream *VAR_3 = FUNC_1 (VAR_2);
  VAR_3->ts_streamtype = VAR_0;
  VAR_3->ts_filestream = VAR_1;
  VAR_3->ts_strbuf = ((void*)0);
  VAR_3->ts_buflen = 0;
  return VAR_2;
}
