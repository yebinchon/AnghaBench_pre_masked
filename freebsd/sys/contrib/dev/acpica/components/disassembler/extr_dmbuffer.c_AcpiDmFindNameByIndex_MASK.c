
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT64 ;
typedef size_t UINT32 ;



__attribute__((used)) static const char *
FUNC_0 (
    UINT64 VAR_0,
    const char **VAR_1)
{
    const char *VAR_2;
    UINT32 VAR_3;




    VAR_2 = VAR_1[0];
    VAR_3 = 0;

    while (VAR_2)
    {
        VAR_3++;
        VAR_2 = VAR_1[VAR_3];
    }

    if (VAR_0 >= VAR_3)
    {


        return ("");
    }

    return (VAR_1[VAR_0]);
}
