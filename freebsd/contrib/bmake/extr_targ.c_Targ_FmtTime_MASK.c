
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,struct tm*) ;

char *
FUNC_2(time_t VAR_0)
{
    struct tm *VAR_1;
    static char VAR_2[128];

    VAR_1 = FUNC_0(&VAR_0);
    (void)FUNC_1(VAR_2, sizeof VAR_2, "%k:%M:%S %b %d, %Y", VAR_1);
    return(VAR_2);
}
