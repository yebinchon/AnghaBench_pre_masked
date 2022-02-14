
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct togglelist {char* name; char* help; int* variable; char* actionexplanation; scalar_t__* charp; int (* handler ) (char*) ;} ;
struct setlist {char* name; char* help; int* variable; char* actionexplanation; scalar_t__* charp; int (* handler ) (char*) ;} ;
typedef scalar_t__ cc_t ;


 scalar_t__ FUNC_0 (struct togglelist*) ;
 struct togglelist* FUNC_1 (char*) ;
 struct togglelist* VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,char*) ;
 struct togglelist* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(int VAR_3, char *VAR_4[])
{
    int VAR_5;
    struct setlist *VAR_6;
    struct togglelist *VAR_7;

    if (VAR_3 < 2 || VAR_3 > 3) {
 FUNC_6("Format is 'set Name Value'\r\n'set ?' for help.\r\n");
 return 0;
    }
    if ((VAR_3 == 2) && (FUNC_5(VAR_4[1], "?") || FUNC_5(VAR_4[1], "help"))) {
 for (VAR_6 = VAR_0; VAR_6->name; VAR_6++)
     FUNC_6("%-15s %s\r\n", VAR_6->name, VAR_6->help);
 FUNC_6("\r\n");
 FUNC_7(1);
 FUNC_6("%-15s %s\r\n", "?", "display help information");
 return 0;
    }

    VAR_6 = FUNC_4(VAR_4[1]);
    if (VAR_6 == 0) {
 VAR_7 = FUNC_1(VAR_4[1]);
 if (VAR_7 == 0) {
     FUNC_3(VAR_2, "'%s': unknown argument ('set ?' for help).\r\n",
   VAR_4[1]);
     return 0;
 } else if (FUNC_0(VAR_7)) {
     FUNC_3(VAR_2, "'%s': ambiguous argument ('set ?' for help).\r\n",
   VAR_4[1]);
     return 0;
 }
 if (VAR_7->variable) {
     if ((VAR_3 == 2) || (FUNC_10("on", VAR_4[2]) == 0))
  *VAR_7->variable = 1;
     else if (FUNC_10("off", VAR_4[2]) == 0)
  *VAR_7->variable = 0;
     else {
  FUNC_6("Format is 'set togglename [on|off]'\r\n'set ?' for help.\r\n");
  return 0;
     }
     if (VAR_7->actionexplanation) {
  FUNC_6("%s %s.\r\n", *VAR_7->variable? "Will" : "Won't",
       VAR_7->actionexplanation);
     }
 }
 if (VAR_7->handler)
     (*VAR_7->handler)(1);
    } else if (VAR_3 != 3) {
 FUNC_6("Format is 'set Name Value'\r\n'set ?' for help.\r\n");
 return 0;
    } else if (FUNC_0(VAR_6)) {
 FUNC_3(VAR_2, "'%s': ambiguous argument ('set ?' for help).\r\n",
   VAR_4[1]);
 return 0;
    } else if (VAR_6->handler) {
 (*VAR_6->handler)(VAR_4[2]);
 FUNC_6("%s set to \"%s\".\r\n", VAR_6->name, (char *)VAR_6->charp);
    } else {
 if (FUNC_10("off", VAR_4[2])) {
     VAR_5 = FUNC_9(VAR_4[2]);
 } else {
     VAR_5 = VAR_1;
 }
 *(VAR_6->charp) = (cc_t)VAR_5;
 FUNC_6("%s character is '%s'.\r\n", VAR_6->name, FUNC_2(*(VAR_6->charp)));
    }
    FUNC_8();
    return 1;
}
