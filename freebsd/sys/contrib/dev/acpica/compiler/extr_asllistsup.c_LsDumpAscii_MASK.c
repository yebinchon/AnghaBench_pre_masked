
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef size_t UINT32 ;


 int FUNC_0 (size_t,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2 (
    UINT32 VAR_0,
    UINT32 VAR_1,
    UINT8 *VAR_2)
{
    UINT8 VAR_3;
    UINT32 VAR_4;


    FUNC_0 (VAR_0, "    \"");
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
        VAR_3 = VAR_2[VAR_4];
        if (FUNC_1 (VAR_3))
        {
            FUNC_0 (VAR_0, "%c", VAR_3);
        }
        else
        {


            FUNC_0 (VAR_0, ".");
        }
    }

    FUNC_0 (VAR_0, "\"");
}
