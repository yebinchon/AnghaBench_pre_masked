
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;


 size_t FUNC_0 (char const**) ;
 char const** VAR_0 ;
 char const** VAR_1 ;
 scalar_t__ VAR_2 ;

const char *
FUNC_1 (
    UINT8 VAR_3)
{


    if (VAR_3 >= FUNC_0 (VAR_0))
    {
        return ("Unknown exception level");
    }



    if (VAR_2)
    {
        return (VAR_0[VAR_3]);
    }

    return (VAR_1[VAR_3]);
}
