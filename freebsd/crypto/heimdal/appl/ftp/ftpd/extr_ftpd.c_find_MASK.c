
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*,int,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int FUNC_9 (char*) ;

int
FUNC_10(char *VAR_0)
{
    char VAR_1[1024];
    FILE *VAR_2;

    FUNC_8(VAR_1, sizeof(VAR_1),
      "/bin/locate -d %s -- %s",
      FUNC_1("/etc/locatedb"),
      VAR_0);
    VAR_2 = FUNC_3(VAR_1, "r", 1, 1);
    if(VAR_2 == ((void*)0)){
 FUNC_6(550, "/bin/locate");
 return 1;
    }
    FUNC_4(200, "Output from find.");
    while(FUNC_0(VAR_1, sizeof(VAR_1), VAR_2)){
 if(VAR_1[FUNC_9(VAR_1)-1] == '\n')
     VAR_1[FUNC_9(VAR_1)-1] = 0;
 FUNC_5("%s", VAR_1);
    }
    FUNC_7(200, "Done");
    FUNC_2(VAR_2);
    return 0;
}
