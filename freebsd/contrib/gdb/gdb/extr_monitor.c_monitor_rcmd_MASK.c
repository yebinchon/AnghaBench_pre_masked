
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct TYPE_2__ {char* prompt; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct ui_file*) ;
 int * VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2,
       struct ui_file *VAR_3)
{
  char *VAR_4;
  int VAR_5;
  char VAR_6[1000];

  if (VAR_1 == ((void*)0))
    FUNC_0 ("monitor target not open.");

  VAR_4 = VAR_0->prompt;




  FUNC_3 ("%s\r", (VAR_2 ? VAR_2 : ""));

  VAR_5 = FUNC_2 (VAR_6, sizeof VAR_6);

  FUNC_1 (VAR_6, VAR_3);
}
