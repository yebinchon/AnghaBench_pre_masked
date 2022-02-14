
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestr ;
typedef int time_t ;
struct getargs {int short_name; char* long_name; scalar_t__ type; char* help; } ;
typedef int cmd ;
typedef int buf ;


 scalar_t__ FUNC_0 (struct getargs) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int,int,struct getargs*,char* (*) (char const*)) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct getargs *VAR_1,
  size_t VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  char *(VAR_5)(const char *))
{
    size_t VAR_6;
    char VAR_7[64], VAR_8[64];
    char VAR_9[128];
    const char *VAR_10;
    time_t VAR_11;

    FUNC_3(".\\\" Things to fix:\n");
    FUNC_3(".\\\"   * correct section, and operating system\n");
    FUNC_3(".\\\"   * remove Op from mandatory flags\n");
    FUNC_3(".\\\"   * use better macros for arguments (like .Pa for files)\n");
    FUNC_3(".\\\"\n");
    VAR_11 = FUNC_8(((void*)0));
    FUNC_4(VAR_7, sizeof(VAR_7), "%B %e, %Y", FUNC_1(&VAR_11));
    FUNC_3(".Dd %s\n", VAR_7);
    VAR_10 = FUNC_6(VAR_3, '/');
    if(VAR_10) VAR_10++; else VAR_10 = VAR_3;
    FUNC_5(VAR_8, VAR_10, sizeof(VAR_8));
    FUNC_7(VAR_8);

    FUNC_3(".Dt %s SECTION\n", VAR_8);
    FUNC_3(".Os OPERATING_SYSTEM\n");
    FUNC_3(".Sh NAME\n");
    FUNC_3(".Nm %s\n", VAR_10);
    FUNC_3(".Nd in search of a description\n");
    FUNC_3(".Sh SYNOPSIS\n");
    FUNC_3(".Nm\n");
    for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++){


 if(FUNC_0(VAR_1[VAR_6]) ||
    VAR_1[VAR_6].short_name == 0 || VAR_1[VAR_6].long_name == ((void*)0)) {
     FUNC_3(".Op ");

     if(VAR_1[VAR_6].short_name) {
  FUNC_2(VAR_9, sizeof(VAR_9), 1, 0, VAR_1 + VAR_6, VAR_5);
  FUNC_3("Fl %c%s", VAR_1[VAR_6].short_name, VAR_9);
  if(VAR_1[VAR_6].long_name)
      FUNC_3(" | ");
     }
     if(VAR_1[VAR_6].long_name) {
  FUNC_2(VAR_9, sizeof(VAR_9), 1, 1, VAR_1 + VAR_6, VAR_5);
  FUNC_3("Fl Fl %s%s%s",
         VAR_1[VAR_6].type == VAR_0 ? "no-" : "",
         VAR_1[VAR_6].long_name, VAR_9);
     }
     FUNC_3("\n");
 } else {
     FUNC_2(VAR_9, sizeof(VAR_9), 1, 0, VAR_1 + VAR_6, VAR_5);
     FUNC_3(".Oo Fl %c%s \\*(Ba Xo\n", VAR_1[VAR_6].short_name, VAR_9);
     FUNC_2(VAR_9, sizeof(VAR_9), 1, 1, VAR_1 + VAR_6, VAR_5);
     FUNC_3(".Fl Fl %s%s\n.Xc\n.Oc\n", VAR_1[VAR_6].long_name, VAR_9);
 }




    }
    if (VAR_4 && *VAR_4)
 FUNC_3 (".Ar %s\n", VAR_4);
    FUNC_3(".Sh DESCRIPTION\n");
    FUNC_3("Supported options:\n");
    FUNC_3(".Bl -tag -width Ds\n");
    for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++){
 FUNC_3(".It Xo\n");
 if(VAR_1[VAR_6].short_name){
     FUNC_3(".Fl %c", VAR_1[VAR_6].short_name);
     FUNC_2(VAR_9, sizeof(VAR_9), 1, 0, VAR_1 + VAR_6, VAR_5);
     FUNC_3("%s", VAR_9);
     if(VAR_1[VAR_6].long_name)
  FUNC_3(" ,");
     FUNC_3("\n");
 }
 if(VAR_1[VAR_6].long_name){
     FUNC_3(".Fl Fl %s%s",
     VAR_1[VAR_6].type == VAR_0 ? "no-" : "",
     VAR_1[VAR_6].long_name);
     FUNC_2(VAR_9, sizeof(VAR_9), 1, 1, VAR_1 + VAR_6, VAR_5);
     FUNC_3("%s\n", VAR_9);
 }
 FUNC_3(".Xc\n");
 if(VAR_1[VAR_6].help)
     FUNC_3("%s\n", VAR_1[VAR_6].help);




    }
    FUNC_3(".El\n");
    FUNC_3(".\\\".Sh ENVIRONMENT\n");
    FUNC_3(".\\\".Sh FILES\n");
    FUNC_3(".\\\".Sh EXAMPLES\n");
    FUNC_3(".\\\".Sh DIAGNOSTICS\n");
    FUNC_3(".\\\".Sh SEE ALSO\n");
    FUNC_3(".\\\".Sh STANDARDS\n");
    FUNC_3(".\\\".Sh HISTORY\n");
    FUNC_3(".\\\".Sh AUTHORS\n");
    FUNC_3(".\\\".Sh BUGS\n");
}
