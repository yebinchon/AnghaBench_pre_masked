
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timestr ;
typedef int time_t ;
typedef int cmd ;
struct TYPE_3__ {char* name; char* usage; scalar_t__ func; } ;
typedef TYPE_1__ SL_cmd ;


 char* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(SL_cmd *VAR_0,
  const char *VAR_1)
{
    SL_cmd *VAR_2, *VAR_3;
    char VAR_4[64], VAR_5[64];
    const char *VAR_6;
    time_t VAR_7;

    FUNC_2(".\\\" Things to fix:\n");
    FUNC_2(".\\\"   * correct section, and operating system\n");
    FUNC_2(".\\\"   * remove Op from mandatory flags\n");
    FUNC_2(".\\\"   * use better macros for arguments (like .Pa for files)\n");
    FUNC_2(".\\\"\n");
    VAR_7 = FUNC_7(((void*)0));
    FUNC_3(VAR_4, sizeof(VAR_4), "%b %d, %Y", FUNC_1(&VAR_7));
    FUNC_2(".Dd %s\n", VAR_4);
    VAR_6 = FUNC_5(FUNC_0(), '/');
    if(VAR_6) VAR_6++; else VAR_6 = FUNC_0();
    FUNC_4(VAR_5, VAR_6, sizeof(VAR_5));
    VAR_5[sizeof(VAR_5)-1] = '\0';
    FUNC_6(VAR_5);

    FUNC_2(".Dt %s SECTION\n", VAR_5);
    FUNC_2(".Os OPERATING_SYSTEM\n");
    FUNC_2(".Sh NAME\n");
    FUNC_2(".Nm %s\n", VAR_6);
    FUNC_2(".Nd\n");
    FUNC_2("in search of a description\n");
    FUNC_2(".Sh SYNOPSIS\n");
    FUNC_2(".Nm\n");
    for(VAR_2 = VAR_0; VAR_2->name; ++VAR_2) {


 FUNC_2(".Op Fl %s", VAR_2->name);
 FUNC_2("\n");

    }
    if (VAR_1 && *VAR_1)
 FUNC_2 (".Ar %s\n", VAR_1);
    FUNC_2(".Sh DESCRIPTION\n");
    FUNC_2("Supported options:\n");
    FUNC_2(".Bl -tag -width Ds\n");
    VAR_3 = ((void*)0);
    for(VAR_2 = VAR_0; VAR_2->name; ++VAR_2) {
 if (VAR_2->func) {
     if (VAR_3)
  FUNC_2 ("\n%s\n", VAR_3->usage);

     FUNC_2 (".It Fl %s", VAR_2->name);
     VAR_3 = VAR_2;
 } else
     FUNC_2 (", %s\n", VAR_2->name);
    }
    if (VAR_3)
 FUNC_2 ("\n%s\n", VAR_3->usage);

    FUNC_2(".El\n");
    FUNC_2(".\\\".Sh ENVIRONMENT\n");
    FUNC_2(".\\\".Sh FILES\n");
    FUNC_2(".\\\".Sh EXAMPLES\n");
    FUNC_2(".\\\".Sh DIAGNOSTICS\n");
    FUNC_2(".\\\".Sh SEE ALSO\n");
    FUNC_2(".\\\".Sh STANDARDS\n");
    FUNC_2(".\\\".Sh HISTORY\n");
    FUNC_2(".\\\".Sh AUTHORS\n");
    FUNC_2(".\\\".Sh BUGS\n");
}
