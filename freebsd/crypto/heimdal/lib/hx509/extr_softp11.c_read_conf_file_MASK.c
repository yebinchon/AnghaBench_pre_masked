
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int app_error_fatal; } ;
struct TYPE_4__ {TYPE_1__ flags; int * logfile; } ;
typedef int FILE ;
typedef int CK_USER_TYPE ;
typedef int CK_RV ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 void* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_6 (char*,...) ;
 int * VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char*,char**) ;

__attribute__((used)) static CK_RV
FUNC_11(const char *VAR_4, CK_USER_TYPE VAR_5, const char *VAR_6)
{
    char VAR_7[1024], *VAR_8, *VAR_9, *VAR_10;
    FILE *VAR_11;
    CK_RV VAR_12 = VAR_1;
    CK_RV VAR_13 = VAR_1;

    if (VAR_4 == ((void*)0)) {
        FUNC_6("Can't open configuration file.  No file specified\n");
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_4, "r");
    if (VAR_11 == ((void*)0)) {
 FUNC_6("can't open configuration file %s\n", VAR_4);
 return VAR_0;
    }
    FUNC_5(VAR_11);

    while(FUNC_2(VAR_7, sizeof(VAR_7), VAR_11) != ((void*)0)) {
 VAR_7[FUNC_9(VAR_7, "\n")] = '\0';

 FUNC_6("line: %s\n", VAR_7);

 VAR_10 = VAR_7;
 while (FUNC_4((unsigned char)*VAR_10))
     VAR_10++;
 if (*VAR_10 == '#')
     continue;
 while (FUNC_4((unsigned char)*VAR_10))
     VAR_10++;

 VAR_9 = ((void*)0);
 VAR_8 = FUNC_10(VAR_10, "\t", &VAR_9);
 if (VAR_8 == ((void*)0))
     continue;

 if (FUNC_7("certificate", VAR_8) == 0) {
     char *VAR_14, *VAR_15, *VAR_16;

     VAR_15 = FUNC_10(((void*)0), "\t", &VAR_9);
     if (VAR_15 == ((void*)0)) {
  FUNC_6("no id\n");
  continue;
     }
     FUNC_6("id: %s\n", VAR_15);
     VAR_16 = FUNC_10(((void*)0), "\t", &VAR_9);
     if (VAR_16 == ((void*)0)) {
  FUNC_6("no label\n");
  continue;
     }
     VAR_14 = FUNC_10(((void*)0), "\t", &VAR_9);
     if (VAR_14 == ((void*)0)) {
  FUNC_6("no certfiicate store\n");
  continue;
     }

     FUNC_6("adding: %s: %s in file %s\n", VAR_15, VAR_16, VAR_14);

     VAR_12 = FUNC_0(VAR_14, VAR_6, VAR_15, VAR_16);
     if (VAR_12)
  VAR_13 = VAR_12;
 } else if (FUNC_7("debug", VAR_8) == 0) {
     char *VAR_17;

     VAR_17 = FUNC_10(((void*)0), "\t", &VAR_9);
     if (VAR_17 == ((void*)0)) {
  FUNC_6("no filename\n");
  continue;
     }

     if (VAR_2.logfile)
  FUNC_1(VAR_2.logfile);

     if (FUNC_7(VAR_17, "stdout") == 0)
  VAR_2.logfile = VAR_3;
     else {
  VAR_2.logfile = FUNC_3(VAR_17, "a");
  if (VAR_2.logfile)
      FUNC_5(VAR_2.logfile);
     }
     if (VAR_2.logfile == ((void*)0))
  FUNC_6("failed to open file: %s\n", VAR_17);

 } else if (FUNC_7("app-fatal", VAR_8) == 0) {
     char *VAR_18;

     VAR_18 = FUNC_10(((void*)0), "\t", &VAR_9);
     if (VAR_18 == ((void*)0)) {
  FUNC_6("argument to app-fatal\n");
  continue;
     }

     if (FUNC_8(VAR_18, "true") == 0 || FUNC_8(VAR_18, "on") == 0)
  VAR_2.flags.app_error_fatal = 1;
     else if (FUNC_8(VAR_18, "false") == 0 || FUNC_8(VAR_18, "off") == 0)
  VAR_2.flags.app_error_fatal = 0;
     else
  FUNC_6("unknown app-fatal: %s\n", VAR_18);

 } else {
     FUNC_6("unknown type: %s\n", VAR_8);
 }
    }

    FUNC_1(VAR_11);

    return VAR_13;
}
