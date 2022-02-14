
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_cmdline {int index; char* options; scalar_t__* name; } ;


 int VAR_0 ;
 struct console_cmdline* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*) ;
 int FUNC_1 (scalar_t__*,char*,int) ;

int FUNC_2(char *VAR_2, int VAR_3, char *VAR_4, int VAR_5, char *VAR_6)
{
 struct console_cmdline *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0 && VAR_1[VAR_8].name[0]; VAR_8++)
  if (FUNC_0(VAR_1[VAR_8].name, VAR_2) == 0 &&
     VAR_1[VAR_8].index == VAR_3) {
    VAR_7 = &VAR_1[VAR_8];
    FUNC_1(VAR_7->name, VAR_4, sizeof(VAR_7->name));
    VAR_7->name[sizeof(VAR_7->name) - 1] = 0;
    VAR_7->options = VAR_6;
    VAR_7->index = VAR_5;
    return VAR_8;
  }

 return -1;
}
