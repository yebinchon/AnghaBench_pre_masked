
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct tui_stream {scalar_t__ ts_streamtype; int ts_strbuf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,struct ui_file*) ;
 int FUNC_3 (char const*) ;
 struct tui_stream* FUNC_4 (struct ui_file*) ;

void
FUNC_5 (const char *VAR_1, struct ui_file *VAR_2)
{
  struct tui_stream *VAR_3 = FUNC_4 (VAR_2);

  if (VAR_3->ts_streamtype == VAR_0)
    {
      FUNC_2 (FUNC_1 (VAR_1), VAR_2);
      FUNC_0 (VAR_3->ts_strbuf, VAR_1);
    }
  else
    {
      FUNC_3 (VAR_1);
    }
}
