
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_stream {int stream; } ;
struct ui_out {int dummy; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,long*) ;
 int FUNC_4 (struct ui_out*,char const*) ;
 int FUNC_5 (struct ui_out*,char const*,char*) ;
 int VAR_0 ;

void
FUNC_6 (struct ui_out *VAR_1,
       const char *VAR_2,
       struct ui_stream *VAR_3)
{
  long VAR_4;
  char *VAR_5 = FUNC_3 (VAR_3->stream, &VAR_4);
  struct cleanup *VAR_6 = FUNC_1 (VAR_0, VAR_5);
  if (VAR_4 > 0)
    FUNC_5 (VAR_1, VAR_2, VAR_5);
  else
    FUNC_4 (VAR_1, VAR_2);
  FUNC_2 (VAR_3->stream);
  FUNC_0 (VAR_6);
}
