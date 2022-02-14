
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static BOOLEAN
FUNC_3 (
    char *VAR_2)
{
    UINT64 VAR_3 = FUNC_2(VAR_2);
    char *VAR_4 = VAR_2 + VAR_3 - 4;
    UINT64 VAR_5;


    if ((VAR_3 > 4) && FUNC_0 (VAR_4, ".dsl"))
    {
        return (VAR_0);
    }

    for(VAR_5 = 0; VAR_5<VAR_3; ++VAR_5)
    {
        if (!FUNC_1 ((int) VAR_2[VAR_5]))
        {
            return (VAR_0);
        }
    }

    return (VAR_1);
}
