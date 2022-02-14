
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct tui_stream {int * ts_magic; } ;


 int FUNC_0 (struct ui_file*,struct tui_stream*,int ) ;
 int FUNC_1 (struct ui_file*,int ) ;
 int FUNC_2 (struct ui_file*,int ) ;
 int FUNC_3 (struct ui_file*,int ) ;
 int FUNC_4 (struct ui_file*,int ) ;
 int FUNC_5 (struct ui_file*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ui_file* FUNC_6 () ;
 struct tui_stream* FUNC_7 (int) ;

__attribute__((used)) static struct ui_file *
FUNC_8 (void)
{
  struct tui_stream *VAR_7 = FUNC_7 (sizeof (struct tui_stream));
  struct ui_file *VAR_8 = FUNC_6 ();
  FUNC_0 (VAR_8, VAR_7, VAR_0);
  FUNC_1 (VAR_8, VAR_1);
  FUNC_2 (VAR_8, VAR_2);
  FUNC_3 (VAR_8, VAR_3);
  FUNC_5 (VAR_8, VAR_6);
  FUNC_4 (VAR_8, VAR_5);
  VAR_7->ts_magic = &VAR_4;
  return VAR_8;
}
