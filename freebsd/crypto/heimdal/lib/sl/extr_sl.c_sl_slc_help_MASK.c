
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* help; int (* func ) (int,char**) ;scalar_t__ name; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ SL_cmd ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,int,char**) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,char**) ;

void
FUNC_4 (SL_cmd *VAR_1, int VAR_2, char **VAR_3)
{
    if(VAR_2 == 0) {
 FUNC_1(VAR_1, 1, VAR_3 - 1 );
    } else {
 SL_cmd *VAR_4 = FUNC_2 (VAR_1, VAR_3[0], 0);
  if(VAR_4 == ((void*)0)) {
     FUNC_0 (VAR_0, "No such command: %s. "
       "Try \"help\" for a list of commands\n",
       VAR_3[0]);
 } else {
     if(VAR_4->func) {
  static char VAR_5[] = "--help";
  char *VAR_6[3];
  VAR_6[0] = VAR_3[0];
  VAR_6[1] = VAR_5;
  VAR_6[2] = ((void*)0);
  (*VAR_4->func)(2, VAR_6);
  FUNC_0(VAR_0, "\n");
     }
     if(VAR_4->help && *VAR_4->help)
  FUNC_0 (VAR_0, "%s\n", VAR_4->help);
     if((++VAR_4)->name && VAR_4->func == ((void*)0)) {
  int VAR_7 = 0;
  FUNC_0 (VAR_0, "Synonyms:");
  while (VAR_4->name && VAR_4->func == ((void*)0)) {
      FUNC_0 (VAR_0, "%s%ld", VAR_7 ? ", " : " ", (VAR_4++)->name);
      VAR_7 = 1;
  }
  FUNC_0 (VAR_0, "\n");
     }
 }
    }
}
