
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct togglelist {char* actionexplanation; int (* handler ) (int ) ;scalar_t__* variable; } ;
struct setlist {char* name; char* help; int * charp; int (* handler ) (int ) ;} ;


 scalar_t__ FUNC_0 (void*) ;
 struct togglelist* FUNC_1 (char*) ;
 struct setlist* VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct setlist* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(int VAR_3, char *VAR_4[])
{
    struct setlist *VAR_5;
    struct togglelist *VAR_6;
    char *VAR_7;

    if (VAR_3 < 2) {
 FUNC_3(VAR_2,
     "Need an argument to 'unset' command.  'unset ?' for help.\n");
 return 0;
    }
    if (FUNC_5(VAR_4[1], "?") || FUNC_5(VAR_4[1], "help")) {
 for (VAR_5 = VAR_0; VAR_5->name; VAR_5++)
     FUNC_6("%-15s %s\n", VAR_5->name, VAR_5->help);
 FUNC_6("\n");
 FUNC_7(0);
 FUNC_6("%-15s %s\n", "?", "display help information");
 return 0;
    }

    VAR_3--;
    VAR_4++;
    while (VAR_3--) {
 VAR_7 = *VAR_4++;
 VAR_5 = FUNC_4(VAR_7);
 if (VAR_5 == 0) {
     VAR_6 = FUNC_1(VAR_7);
     if (VAR_6 == 0) {
  FUNC_3(VAR_2, "'%s': unknown argument ('unset ?' for help).\n",
   VAR_7);
  return 0;
     } else if (FUNC_0((void *)VAR_6)) {
  FUNC_3(VAR_2, "'%s': ambiguous argument ('unset ?' for help).\n",
   VAR_7);
  return 0;
     }
     if (VAR_6->variable) {
  *VAR_6->variable = 0;
  if (VAR_6->actionexplanation) {
      FUNC_6("%s %s.\n", *VAR_6->variable? "Will" : "Won't",
       VAR_6->actionexplanation);
  }
     }
     if (VAR_6->handler)
  (*VAR_6->handler)(0);
 } else if (FUNC_0((void *)VAR_5)) {
     FUNC_3(VAR_2, "'%s': ambiguous argument ('unset ?' for help).\n",
   VAR_7);
     return 0;
 } else if (VAR_5->handler) {
     (*VAR_5->handler)(0);
     FUNC_6("%s reset to \"%s\".\n", VAR_5->name, (char *)VAR_5->charp);
 } else {
     *(VAR_5->charp) = VAR_1;
     FUNC_6("%s character is '%s'.\n", VAR_5->name, FUNC_2(*(VAR_5->charp)));
 }
    }
    return 1;
}
