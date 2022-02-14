
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,char**) ;

__attribute__((used)) static int
FUNC_6(char *VAR_4)
{


    FILE *VAR_5;
    int VAR_6 = 0;
    char *VAR_7, *VAR_8, VAR_9[VAR_1];
    char *VAR_10;

    VAR_5 = FUNC_2(VAR_3, "r");

    if(VAR_5 == ((void*)0))
 return VAR_6;

    while (FUNC_1(VAR_9, sizeof(VAR_9), VAR_5) != ((void*)0)) {
 VAR_10 = ((void*)0);
 VAR_7 = FUNC_5(VAR_9, " \t\n", &VAR_10);
 if (VAR_7 == ((void*)0) || VAR_7[0] == '#')
     continue;
 VAR_8 = FUNC_5(((void*)0), " \t\n", &VAR_10);
 if (FUNC_3(VAR_7, VAR_4) == 0){
     if(VAR_8 && FUNC_4(VAR_8, "allow") == 0)
  VAR_6 = 0;
     else
  VAR_6 = 1;
     break;
 }
    }
    FUNC_0(VAR_5);
    return VAR_6;
}
