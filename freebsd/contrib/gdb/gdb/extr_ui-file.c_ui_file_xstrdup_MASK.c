
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct accumulated_ui_file {char* buffer; long length; } ;


 int VAR_0 ;
 int FUNC_0 (struct ui_file*,int ,struct accumulated_ui_file*) ;
 char* FUNC_1 (char*) ;

char *
FUNC_2 (struct ui_file *VAR_1,
    long *VAR_2)
{
  struct accumulated_ui_file VAR_3;
  VAR_3.buffer = ((void*)0);
  VAR_3.length = 0;
  FUNC_0 (VAR_1, VAR_0, &VAR_3);
  if (VAR_3.buffer == ((void*)0))
    VAR_3.buffer = FUNC_1 ("");
  *VAR_2 = VAR_3.length;
  return VAR_3.buffer;
}
