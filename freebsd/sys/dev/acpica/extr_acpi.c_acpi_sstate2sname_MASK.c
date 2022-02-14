
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_3)
{
    static const char *VAR_4[] = { "S0", "S1", "S2", "S3", "S4", "S5" };

    if (VAR_3 >= VAR_0 && VAR_3 <= VAR_1)
 return (VAR_4[VAR_3]);
    else if (VAR_3 == VAR_2)
 return ("NONE");
    return (((void*)0));
}
