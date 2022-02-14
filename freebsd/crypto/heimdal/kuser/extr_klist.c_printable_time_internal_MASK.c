
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int s ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char*
FUNC_2(time_t VAR_0, int VAR_1)
{
    static char VAR_2[128];
    char *VAR_3;

    if ((VAR_3 = FUNC_0(&VAR_0)) == ((void*)0))
 FUNC_1(VAR_2, "?", sizeof(VAR_2));
    else
 FUNC_1(VAR_2, VAR_3 + 4, sizeof(VAR_2));
    VAR_2[VAR_1] = 0;
    return VAR_2;
}
