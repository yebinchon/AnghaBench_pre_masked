
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* help; int (* func ) (int,char**) ;scalar_t__ name; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ SL_cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int,char**) ;
 TYPE_2__* FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int,char**) ;

int
FUNC_4(void *VAR_2, int VAR_3, char **VAR_4)
{
    if(VAR_3 == 0) {
 FUNC_1(VAR_0, 1, VAR_4 - 1 );
    } else {
 SL_cmd *VAR_5 = FUNC_2 (VAR_0, VAR_4[0], 0);
  if(VAR_5 == ((void*)0)) {
     FUNC_0 (VAR_1, "No such command: %s. "
       "Try \"help\" for a list of commands\n",
       VAR_4[0]);
 } else {
     if(VAR_5->func) {
  static char VAR_6[] = "--help";
  char *VAR_7[3];
  VAR_7[0] = VAR_4[0];
  VAR_7[1] = VAR_6;
  VAR_7[2] = ((void*)0);
  (*VAR_5->func)(2, VAR_7);
  FUNC_0(VAR_1, "\n");
     }
     if(VAR_5->help && *VAR_5->help)
  FUNC_0 (VAR_1, "%s\n", VAR_5->help);
     if((++VAR_5)->name && VAR_5->func == ((void*)0)) {
  int VAR_8 = 0;
  FUNC_0 (VAR_1, "Synonyms:");
  while (VAR_5->name && VAR_5->func == ((void*)0)) {
      FUNC_0 (VAR_1, "%s%ld", VAR_8 ? ", " : " ", (VAR_5++)->name);
      VAR_8 = 1;
  }
  FUNC_0 (VAR_1, "\n");
     }
 }
    }
    return 0;
}
