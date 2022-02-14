
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (unsigned long,char*,int) ;

char *FUNC_1(unsigned long VAR_0, char *VAR_1)
{
    static char VAR_2[256];

    if (VAR_1 == ((void*)0))
        VAR_1 = VAR_2;
    FUNC_0(VAR_0, VAR_1, (int)sizeof(VAR_2));
    return VAR_1;
}
