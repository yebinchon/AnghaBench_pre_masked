
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef enum frame_type { ____Placeholder_frame_type } frame_type ;






 int FUNC_0 (struct ui_file*,char*) ;

__attribute__((used)) static void
FUNC_1 (struct ui_file *VAR_0, enum frame_type VAR_1)
{
  switch (VAR_1)
    {
    case 128:
      FUNC_0 (VAR_0, "UNKNOWN_FRAME");
      return;
    case 130:
      FUNC_0 (VAR_0, "NORMAL_FRAME");
      return;
    case 131:
      FUNC_0 (VAR_0, "DUMMY_FRAME");
      return;
    case 129:
      FUNC_0 (VAR_0, "SIGTRAMP_FRAME");
      return;
    default:
      FUNC_0 (VAR_0, "<unknown type>");
      return;
    };
}
