
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int buf ;



__attribute__((used)) static char *
FUNC_0 (u_int VAR_0)
{
    static char VAR_1[20];
    u_int VAR_2;

    VAR_2 = 0;
    VAR_1[VAR_2] = '\0';




    if (sizeof(VAR_1) < ((VAR_0/8) + (VAR_0 %8) + 2)) {
 return VAR_1;
    }




    VAR_1[VAR_2] = '\n';
    VAR_2++;

    while (VAR_0 >= 8) {
 VAR_1[VAR_2] = '\t';
 VAR_2++;
 VAR_0 -= 8;
    }

    while (VAR_0 > 0) {
 VAR_1[VAR_2] = ' ';
 VAR_2++;
 VAR_0--;
    }




    VAR_1[VAR_2] = '\0';

    return VAR_1;
}
