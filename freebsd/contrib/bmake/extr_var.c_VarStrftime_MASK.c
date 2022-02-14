
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char const*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_1, int VAR_2, time_t VAR_3)
{
    char VAR_4[VAR_0];

    if (!VAR_3)
 FUNC_4(&VAR_3);
    if (!*VAR_1)
 VAR_1 = "%c";
    FUNC_3(VAR_4, sizeof(VAR_4), VAR_1, VAR_2 ? FUNC_1(&VAR_3) : FUNC_2(&VAR_3));

    VAR_4[sizeof(VAR_4) - 1] = '\0';
    return FUNC_0(VAR_4);
}
