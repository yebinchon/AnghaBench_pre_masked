
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2 (
    char *VAR_3,
    UINT32 VAR_4)
{
    UINT32 VAR_5;
    BOOLEAN VAR_6 = VAR_2;


    *VAR_3 = 0;
    if (VAR_4 == 0)
    {
        FUNC_1 (VAR_3, "NoReturnValue");
        return;
    }

    for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++)
    {
        if (VAR_4 & 0x00000001)
        {
            if (!VAR_6)
            {
                FUNC_1 (VAR_3, "|");
            }

            VAR_6 = VAR_1;
            FUNC_1 (VAR_3, FUNC_0 (VAR_5));
        }
        VAR_4 >>= 1;
    }

    if (VAR_4 & 0x00000001)
    {
        if (!VAR_6)
        {
            FUNC_1 (VAR_3, "|");
        }

        VAR_6 = VAR_1;
        FUNC_1 (VAR_3, "Reference");
    }

    VAR_4 >>= 1;
    if (VAR_4 & 0x00000001)
    {
        if (!VAR_6)
        {
            FUNC_1 (VAR_3, "|");
        }

        FUNC_1 (VAR_3, "Resource");
    }
}
