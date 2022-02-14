
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1 (
    UINT8 VAR_2)
{

    if (VAR_2 >= VAR_0)
    {
        if (VAR_2 == 0x7F)
        {
            FUNC_0 ("FFixedHW, ");
        }
        else
        {
            FUNC_0 ("0x%.2X, ", VAR_2);
        }
    }
    else
    {
        FUNC_0 ("%s, ", VAR_1 [VAR_2]);
    }
}
