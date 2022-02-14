
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void
FUNC_3 (
    UINT32 VAR_7,
    UINT32 VAR_8,
    UINT32 VAR_9)
{



    if ((VAR_9 == VAR_0) ||
        (VAR_9 == VAR_1))
    {
        return;
    }

    VAR_3 = VAR_8;



    FUNC_1 (VAR_9);



    if (VAR_5 < VAR_3)
    {




        if (VAR_4)
        {
            FUNC_0 (VAR_9, "\n");
            VAR_4 = VAR_6;
        }

        if (VAR_9 == VAR_2)
        {
            FUNC_0 (VAR_9, "    /*\n");
        }



        while ((VAR_5 < VAR_3) &&
                FUNC_2 (VAR_9))
        { ; }

        if (VAR_9 == VAR_2)
        {
            FUNC_0 (VAR_9, "     */");
        }

        FUNC_0 (VAR_9, "\n");
    }
}
