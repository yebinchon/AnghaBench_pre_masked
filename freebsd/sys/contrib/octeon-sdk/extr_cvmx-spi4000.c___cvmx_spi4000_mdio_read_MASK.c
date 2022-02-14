
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mdi_command; int op_code; int phy_address; int reg_address; } ;
struct TYPE_4__ {int u32; TYPE_1__ s; } ;
typedef TYPE_2__ mdio_single_command_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
    mdio_single_command_t VAR_3;

    VAR_3.u32 = 0;
    VAR_3.s.mdi_command = 1;
    VAR_3.s.op_code = 2;
    VAR_3.s.phy_address = VAR_1;
    VAR_3.s.reg_address = VAR_2;
    FUNC_1(VAR_0, 0x0680, VAR_3.u32);

    do
    {
        VAR_3.u32 = FUNC_0(VAR_0, 0x0680);
    } while (VAR_3.s.mdi_command);

    return FUNC_0(VAR_0, 0x0681) >> 16;
}
