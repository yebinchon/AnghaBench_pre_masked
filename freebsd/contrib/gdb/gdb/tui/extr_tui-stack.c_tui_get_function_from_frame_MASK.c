
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (struct frame_info*) ;
 int FUNC_1 (int ,struct ui_file*,int ,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (struct ui_file*) ;
 struct ui_file* FUNC_5 (int) ;
 int FUNC_6 (struct ui_file*) ;

__attribute__((used)) static char*
FUNC_7 (struct frame_info *VAR_1)
{
  static char VAR_2[256];
  struct ui_file *VAR_3 = FUNC_5 (256);
  char *VAR_4;

  FUNC_1 (FUNC_0 (VAR_1), VAR_3, VAR_0, "");
  VAR_4 = FUNC_4 (VAR_3);




  if (*VAR_4 == '<')
    VAR_4++;
  FUNC_3 (VAR_2, VAR_4, sizeof (VAR_2));
  VAR_4 = FUNC_2 (VAR_2, '(');
  if (!VAR_4)
    VAR_4 = FUNC_2 (VAR_2, '>');
  if (VAR_4)
    *VAR_4 = 0;
  VAR_4 = FUNC_2 (VAR_2, '+');
  if (VAR_4)
    *VAR_4 = 0;
  FUNC_6 (VAR_3);
  return VAR_2;
}
