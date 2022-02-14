
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(char *VAR_2, int VAR_3, char **VAR_4)
{
    int VAR_5;
    char VAR_6[VAR_0];

    FUNC_3(VAR_6, VAR_2, sizeof(VAR_6));
    for(VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
 if(VAR_5 > 1)
     FUNC_2(VAR_6, " ", sizeof(VAR_6));
 FUNC_2(VAR_6, VAR_4[VAR_5], sizeof(VAR_6));
    }
    if (FUNC_0("%s", VAR_6) == VAR_1) {
 while (FUNC_1(0) == VAR_1)
     continue;
    }
}
