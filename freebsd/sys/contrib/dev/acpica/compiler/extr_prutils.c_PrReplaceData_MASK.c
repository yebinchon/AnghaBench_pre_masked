
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

void
FUNC_2 (
    char *VAR_0,
    UINT32 VAR_1,
    char *VAR_2,
    UINT32 VAR_3)
{
    UINT32 VAR_4;




    VAR_4 = FUNC_1 (VAR_0) + 1;

    if (VAR_1 != VAR_3)
    {





        if (VAR_1 > 0)
        {
            FUNC_0 ((VAR_0 + VAR_3), (VAR_0 + VAR_1),
                (VAR_4 - VAR_1));
        }
    }



    if (VAR_3 > 0)
    {
        FUNC_0 (VAR_0, VAR_2, VAR_3);
    }
}
