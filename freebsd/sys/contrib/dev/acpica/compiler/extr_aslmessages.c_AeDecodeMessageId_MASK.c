
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef scalar_t__ UINT16 ;


 size_t FUNC_0 (char**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;

const char *
FUNC_1 (
    UINT16 VAR_8)
{
    UINT32 VAR_9;
    const char **VAR_10;




    if (VAR_8 <= VAR_0)
    {
        VAR_10 = VAR_5;
        VAR_9 = VAR_8;

        if (VAR_9 >= FUNC_0 (VAR_5))
        {
            return ("[Unknown ASL Compiler exception ID]");
        }
    }



    else if (VAR_8 <= VAR_4)
    {
        VAR_10 = VAR_7;
        VAR_9 = VAR_8 - VAR_3;

        if (VAR_9 >= FUNC_0 (VAR_7))
        {
            return ("[Unknown Table Compiler exception ID]");
        }
    }



    else if (VAR_8 <= VAR_2)
    {
        VAR_10 = VAR_6;
        VAR_9 = VAR_8 - VAR_1;

        if (VAR_9 >= FUNC_0 (VAR_6))
        {
            return ("[Unknown Preprocessor exception ID]");
        }
    }



    else
    {
        return ("[Unknown exception/component ID]");
    }

    return (VAR_10[VAR_9]);
}
