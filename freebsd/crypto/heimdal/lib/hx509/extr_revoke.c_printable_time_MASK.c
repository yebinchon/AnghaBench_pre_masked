
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int s ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_2(time_t VAR_0)
{
    static char VAR_1[128];
    char *VAR_2;
    if ((VAR_2 = FUNC_0(&VAR_0)) == ((void*)0))
       FUNC_1(VAR_1, "?", sizeof(VAR_1));
    else {
       FUNC_1(VAR_1, VAR_2 + 4, sizeof(VAR_1));
       VAR_1[20] = 0;
    }
    return VAR_1;
}
