
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* name; char* usage; char* help; int * func; } ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_3__ SL_cmd ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,char*,int ) ;

void
FUNC_4 (SL_cmd *VAR_0, int VAR_1, char **VAR_2)
{
    SL_cmd *VAR_3, *VAR_4;

    if (FUNC_0("SLMANDOC")) {
 FUNC_1(VAR_0, ((void*)0));
 return;
    }

    if (VAR_1 == 1) {
 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3->name; ++VAR_3) {
     if (VAR_3->func) {
  if(VAR_4)
      FUNC_2 ("\n\t%s%s", VAR_4->usage ? VAR_4->usage : "",
       VAR_4->usage ? "\n" : "");
  VAR_4 = VAR_3;
  FUNC_2 ("%s", VAR_3->name);
     } else
  FUNC_2 (", %s", VAR_3->name);
 }
 if(VAR_4)
     FUNC_2 ("\n\t%s%s", VAR_4->usage ? VAR_4->usage : "",
      VAR_4->usage ? "\n" : "");
    } else {
 VAR_3 = FUNC_3 (VAR_0, VAR_2[1], 0);
 if (VAR_3 == ((void*)0))
     FUNC_2 ("No such command: %s. "
      "Try \"help\" for a list of all commands\n",
      VAR_2[1]);
 else {
     FUNC_2 ("%s\t%s\n", VAR_3->name, VAR_3->usage);
     if(VAR_3->help && *VAR_3->help)
  FUNC_2 ("%s\n", VAR_3->help);
     if((++VAR_3)->name && VAR_3->func == ((void*)0)) {
  FUNC_2 ("Synonyms:");
  while (VAR_3->name && VAR_3->func == ((void*)0))
      FUNC_2 ("\t%s", (VAR_3++)->name);
  FUNC_2 ("\n");
     }
 }
    }
}
