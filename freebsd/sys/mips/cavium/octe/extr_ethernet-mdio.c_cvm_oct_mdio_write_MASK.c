
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct TYPE_6__ {int dat; scalar_t__ pending; } ;
struct TYPE_7__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_smi_wr_dat_t ;
struct TYPE_5__ {int phy_adr; int reg_adr; scalar_t__ phy_op; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_smi_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct ifnet *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 cvmx_smi_cmd_t VAR_6;
 cvmx_smi_wr_dat_t VAR_7;

 FUNC_0();
 VAR_7.u64 = 0;
 VAR_7.s.dat = VAR_5;
 FUNC_4(VAR_1, VAR_7.u64);

 VAR_6.u64 = 0;
 VAR_6.s.phy_op = 0;
 VAR_6.s.phy_adr = VAR_3;
 VAR_6.s.reg_adr = VAR_4;
 FUNC_4(VAR_0, VAR_6.u64);

 do {
  FUNC_3(1000);
  VAR_7.u64 = FUNC_2(VAR_1);
 } while (VAR_7.s.pending);
 FUNC_1();
}
