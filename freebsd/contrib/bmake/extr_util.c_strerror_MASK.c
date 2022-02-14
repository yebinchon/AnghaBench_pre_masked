
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;
 char** VAR_0 ;
 int VAR_1 ;

char *
FUNC_1(int VAR_2)
{
    static char VAR_3[100];
    if (VAR_2 < 0 || VAR_2 >= VAR_1) {
 FUNC_0(VAR_3, sizeof(VAR_3), "Unknown error %d", VAR_2);
 return VAR_3;
    }
    else
 return VAR_0[VAR_2];
}
