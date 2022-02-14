
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_1 (
    UINT16 VAR_2)
{
    UINT32 VAR_3;
    BOOLEAN VAR_4 = VAR_0;




    FUNC_0 ("{");



    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    {


        if (VAR_2 & 1)
        {
            if (VAR_4)
            {
                FUNC_0 (",");
            }

            VAR_4 = VAR_1;
            FUNC_0 ("%u", VAR_3);
        }

        VAR_2 >>= 1;
    }



    FUNC_0 ("}\n");
}
