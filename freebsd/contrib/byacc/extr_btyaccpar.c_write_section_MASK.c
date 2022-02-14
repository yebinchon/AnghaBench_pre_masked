
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int VAR_1 ;

void
FUNC_1(FILE * VAR_2, const char *const VAR_3[])
{
    int VAR_4;
    const char *VAR_5;

    for (VAR_4 = 0; (VAR_5 = VAR_3[VAR_4]) != 0; ++VAR_4)
    {
 if (VAR_2 == VAR_0)
     ++VAR_1;
 FUNC_0(VAR_2, "%s\n", VAR_5);
    }
}
