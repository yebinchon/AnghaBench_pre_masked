
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 int FUNC_0 (char*,char*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_1 (
    UINT32 VAR_2,
    UINT32 VAR_3,
    char *VAR_4,
    UINT32 VAR_5)
{

    if (VAR_0 && !VAR_1)
    {
        if (VAR_3)
        {
            FUNC_0 ("[%.4d] %30s %3d : ",
                VAR_3, VAR_4, VAR_5);
        }
        else
        {
            FUNC_0 ("%36s % 3d : ",
                VAR_4, VAR_5);
        }
    }
    else
    {
        if (VAR_3)
        {
            FUNC_0 ("[%3.3Xh %4.4d %3d] %24s %3d : ",
                VAR_2, VAR_2, VAR_3, VAR_4, VAR_5);
        }
        else
        {
            FUNC_0 ("[%3.3Xh %4.4d   ] %24s %3d : ",
                VAR_2, VAR_2, VAR_4, VAR_5);
        }
    }
}
