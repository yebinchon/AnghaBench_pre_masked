
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ board_type; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(int VAR_5)
{
    if (FUNC_5()->board_type == VAR_0)
    {
        if (VAR_5 == 0)
        {

            FUNC_7(FUNC_1(1, VAR_5), 0);
            FUNC_7(FUNC_0(1, VAR_5), 0);


            FUNC_7(FUNC_1(0, VAR_5), 0xc);
            FUNC_7(FUNC_0(0, VAR_5), 0xc);
        }
    }
    else if (FUNC_5()->board_type == VAR_4)
    {
        if (VAR_5 == 0)
        {
            FUNC_7(FUNC_1(0, VAR_5), 16);
            FUNC_7(FUNC_0(0, VAR_5), 16);
        }
    }
    else if (FUNC_5()->board_type == VAR_1)
    {



        if (VAR_5 == 0)
        {




            int VAR_6 = FUNC_3(0);
            if (VAR_6 != -1)
            {
                int VAR_7 = FUNC_4(VAR_6 >> 8, VAR_6 & 0xff, 0x2);

                if (VAR_7 == 0x0143)
                {
                    FUNC_2("\n");
                    FUNC_2("ERROR:\n");
                    FUNC_2("ERROR: Board type is CVMX_BOARD_TYPE_CN3010_EVB_HS5, but Broadcom PHY found.\n");
                    FUNC_2("ERROR: The board type is mis-configured, and software malfunctions are likely.\n");
                    FUNC_2("ERROR: All boards require a unique board type to identify them.\n");
                    FUNC_2("ERROR:\n");
                    FUNC_2("\n");
                    FUNC_6(1000000000);
                    FUNC_7(FUNC_0(0, VAR_5), 5);
                    FUNC_7(FUNC_1(0, VAR_5), 5);
                }
            }
        }
    }
    return 0;
}
