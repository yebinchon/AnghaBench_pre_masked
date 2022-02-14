
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int,int,int,int) ;

const char *
FUNC_1(u_int VAR_0)
{
    u_int VAR_1,VAR_2,VAR_3,VAR_4;

    static char VAR_5[64];

    VAR_1 = VAR_0 % 1000;
    VAR_2 = VAR_0 / 1000;
    VAR_3 = VAR_2 / 60; VAR_2 -= VAR_3 * 60;
    VAR_4 = VAR_3 / 60; VAR_3 -= VAR_4 * 60;
    FUNC_0(VAR_5, sizeof(VAR_5), "%02u:%02u:%02u.%03u",VAR_4,VAR_3,VAR_2,VAR_1);
    return VAR_5;
}
