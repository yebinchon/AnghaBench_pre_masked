
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int Time ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 struct tm* FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int
FUNC_4(const Time *VAR_1, char **VAR_2)
{
    time_t VAR_3;
    char *VAR_4;
    struct tm *VAR_5;

    *VAR_2 = ((void*)0);
    VAR_3 = FUNC_0(VAR_1);
    VAR_5 = FUNC_1 (&VAR_3);
    VAR_4 = FUNC_2(30);
    if (VAR_4 == ((void*)0))
 return VAR_0;
    FUNC_3(VAR_4, 30, "%Y-%m-%d %H:%M:%S", VAR_5);
    *VAR_2 = VAR_4;
    return 0;
}
