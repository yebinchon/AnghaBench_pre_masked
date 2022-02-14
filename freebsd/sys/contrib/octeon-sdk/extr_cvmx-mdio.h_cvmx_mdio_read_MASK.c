
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mii_bus {int dummy; } ;
struct TYPE_7__ {int dat; scalar_t__ val; } ;
struct TYPE_8__ {TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_smix_rd_dat_t ;
struct TYPE_6__ {int phy_adr; int reg_adr; int phy_op; } ;
struct TYPE_9__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_smix_cmd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct mii_bus*,int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 struct mii_bus** VAR_2 ;

__attribute__((used)) static inline int FUNC_7(int VAR_3, int VAR_4, int VAR_5)
{
    cvmx_smix_cmd_t VAR_6;
    cvmx_smix_rd_dat_t VAR_7;

    if (FUNC_6(VAR_1))
        FUNC_3(VAR_3);

    VAR_6.u64 = 0;
    VAR_6.s.phy_op = VAR_0;
    VAR_6.s.phy_adr = VAR_4;
    VAR_6.s.reg_adr = VAR_5;
    FUNC_4(FUNC_1(VAR_3), VAR_6.u64);

    VAR_7 = FUNC_2(VAR_3);
    if (VAR_7.s.val)
        return VAR_7.s.dat;
    else
        return -1;

}
