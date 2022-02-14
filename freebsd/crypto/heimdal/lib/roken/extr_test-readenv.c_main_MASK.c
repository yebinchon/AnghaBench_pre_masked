
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fn ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char***) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ) ;

int
FUNC_6(int VAR_3, char **VAR_4)
{
    char **VAR_5 = ((void*)0);
    int VAR_6 = 0;
    char VAR_7[VAR_0];
    int VAR_8 = 0;

    FUNC_1(VAR_7, sizeof(VAR_7));

    FUNC_5(VAR_7, VAR_1);
    VAR_6 = FUNC_2(VAR_7, &VAR_5);
    if(VAR_6 != 3) {
 FUNC_4("test 1: variable count %d != 3", VAR_6);
 VAR_8++;
    }

    FUNC_5(VAR_7, VAR_2);
    VAR_6 = FUNC_2(VAR_7, &VAR_5);
    if(VAR_6 != 1) {
 FUNC_4("test 2: variable count %d != 1", VAR_6);
 VAR_8++;
    }

    FUNC_3(VAR_7);
    VAR_6 = FUNC_2(VAR_7, &VAR_5);
    if(VAR_6 != 0) {
 FUNC_4("test 3: variable count %d != 0", VAR_6);
 VAR_8++;
    }
    for(VAR_6 = 0; VAR_5 && VAR_5[VAR_6]; VAR_6++);
    if(VAR_6 != 3) {
 FUNC_4("total variable count %d != 3", VAR_6);
 VAR_8++;
    }
    FUNC_0(VAR_5);


    return VAR_8;
}
