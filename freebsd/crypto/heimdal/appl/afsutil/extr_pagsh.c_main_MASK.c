
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tf ;
struct passwd {char* pw_shell; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (char*,char**) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int,char**,int*) ;
 int VAR_4 ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_5 ;
 struct passwd* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int ) ;
 char* FUNC_14 (int ,int ) ;
 char* FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ,int *,int *) ;
 int FUNC_17 (int ,int,scalar_t__,char*) ;
 int FUNC_18 (int ,int,char*) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int *) ;
 char** FUNC_21 (unsigned int) ;
 int FUNC_22 (char*) ;
 int VAR_6 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*,int,char*,char*,...) ;
 char* FUNC_26 (char*) ;
 char* FUNC_27 (char*,char) ;
 int VAR_7 ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (int) ;
 scalar_t__ VAR_8 ;

int
FUNC_31(int VAR_9, char **VAR_10)
{
    int VAR_11;
    char VAR_12[1024];
    char *VAR_13;

    char *VAR_14;
    char **VAR_15;
    unsigned int VAR_16;
    int VAR_17 = 0;

    FUNC_24(VAR_10[0]);
    if(FUNC_7(VAR_4, VAR_6, VAR_9, VAR_10, &VAR_17))
 FUNC_30(1);
    if(VAR_5)
 FUNC_30(0);
    if(VAR_8) {
 FUNC_23(((void*)0));
 FUNC_6(0);
    }

    VAR_9 -= VAR_17;
    VAR_10 += VAR_17;
    FUNC_25 (VAR_12, sizeof(VAR_12), "%s_XXXXXX", VAR_1);
    VAR_11 = FUNC_22 (VAR_12);
    if (VAR_11 < 0)
 FUNC_1(1, "mkstemp failed");
    FUNC_0 (VAR_11);
    FUNC_28 (VAR_12);
    FUNC_3("KRBTKFILE", VAR_12, 1);

    VAR_16 = 0;

    VAR_15 = (char **) FUNC_21((VAR_9 + 10)*sizeof(char *));
    if (VAR_15 == ((void*)0))
 FUNC_2 (1, "Out of memory allocating %lu bytes",
       (unsigned long)((VAR_9 + 10)*sizeof(char *)));

    if(*VAR_10 == ((void*)0)) {
 VAR_14 = FUNC_8("SHELL");
 if(VAR_14 == ((void*)0)){
     struct passwd *VAR_18 = FUNC_10(FUNC_9());
     if (VAR_18 == ((void*)0))
  FUNC_2(1, "no such user: %d", (int)FUNC_9());
     VAR_14 = FUNC_26(VAR_18->pw_shell);
 }
    } else {
 VAR_14 = FUNC_26(*VAR_10++);
    }
    if (VAR_14 == ((void*)0))
 FUNC_2 (1, "Out of memory copying path");

    VAR_13=FUNC_27(VAR_14, '/');
    if(VAR_13)
 VAR_15[VAR_16] = FUNC_26(VAR_13+1);
    else
 VAR_15[VAR_16] = FUNC_26(VAR_14);

    if (VAR_15[VAR_16++] == ((void*)0))
 FUNC_2 (1, "Out of memory copying arguments");

    while(*VAR_10)
 VAR_15[VAR_16++] = *VAR_10++;

    VAR_15[VAR_16++] = ((void*)0);

    if(FUNC_11())
 FUNC_12();

    FUNC_29("PAGPID");
    FUNC_5(VAR_14, VAR_15);
    if (VAR_3 == VAR_0 || VAR_2) {
 char **VAR_19 = FUNC_21 ((VAR_16 + 2) * sizeof(char *));
 unsigned int VAR_20;

 if (VAR_19 == ((void*)0))
     FUNC_2 (1, "Out of memory copying sh arguments");
 for (VAR_20 = 1; VAR_20 < VAR_16; ++VAR_20)
     VAR_19[VAR_20 + 2] = VAR_15[VAR_20];
 VAR_19[0] = "sh";
 VAR_19[1] = "-c";
 VAR_19[2] = VAR_14;
 FUNC_4 ("/bin/sh", VAR_19);
    }
    FUNC_1 (1, "execvp");
}
