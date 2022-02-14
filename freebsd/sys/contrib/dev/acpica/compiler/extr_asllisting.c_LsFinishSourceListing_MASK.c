
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5 (
    UINT32 VAR_6)
{

    if ((VAR_6 == VAR_0) ||
        (VAR_6 == VAR_1))
    {
        return;
    }

    FUNC_2 (VAR_6);
    VAR_4 = 0;



    if (VAR_6 == VAR_2)
    {
        FUNC_1 (VAR_6, "    /*\n");
    }

    while (FUNC_3 (VAR_6))
    { ; }

    if (VAR_6 == VAR_2)
    {
        FUNC_1 (VAR_6, "\n     */\n    };\n");
    }

    FUNC_1 (VAR_6, "\n");

    if (VAR_6 == VAR_3)
    {


        FUNC_1 (VAR_6, "\n\nSummary of errors and warnings\n\n");
        FUNC_0 (VAR_6);
        FUNC_1 (VAR_6, "\n");
        FUNC_4 (VAR_6, VAR_5);
        FUNC_1 (VAR_6, "\n");
    }
}
