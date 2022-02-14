
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct TYPE_5__ {int cclk; } ;
struct TYPE_6__ {int vpd_cap_addr; } ;
struct TYPE_4__ {int rev; int cim_la_size; int fpga; int nports; int portvec; TYPE_2__ vpd; int b_wnd; int a_wnd; TYPE_3__ pci; int chipid; } ;
struct adapter {TYPE_1__ params; int * chip_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,TYPE_3__*) ;
 int FUNC_5 (struct adapter*,TYPE_2__*,int,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct adapter*,int) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*,int ) ;
 int FUNC_11 (struct adapter*,int ,int*) ;
 int FUNC_12 (struct adapter*,int ) ;

int FUNC_13(struct adapter *VAR_6, u32 *VAR_7)
{
 int VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;

 FUNC_4(VAR_6, &VAR_6->params.pci);

 VAR_10 = FUNC_12(VAR_6, VAR_0);
 VAR_6->params.chipid = FUNC_1(VAR_10);
 VAR_6->params.rev = FUNC_2(VAR_10);
 if (VAR_6->params.chipid == 0) {

  VAR_6->params.chipid = VAR_1;


  if (VAR_6->params.rev == 1) {
   FUNC_0(VAR_6, "T4 rev 1 chip is not supported.\n");
   return -VAR_3;
  }
 }

 VAR_6->chip_params = FUNC_8(FUNC_3(VAR_6));
 if (VAR_6->chip_params == ((void*)0))
  return -VAR_3;

 VAR_6->params.pci.vpd_cap_addr =
     FUNC_10(VAR_6, VAR_4);

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_11(VAR_6, VAR_5, &VAR_9);
 if (VAR_9 >> 12 == FUNC_3(VAR_6))
  VAR_6->params.cim_la_size = VAR_2;
 else {

  VAR_6->params.fpga = 1;
  VAR_6->params.cim_la_size = 2 * VAR_2;
 }

 VAR_8 = FUNC_5(VAR_6, &VAR_6->params.vpd, VAR_9, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_6(VAR_6->params.a_wnd, VAR_6->params.b_wnd);




 VAR_6->params.nports = 1;
 VAR_6->params.portvec = 1;
 VAR_6->params.vpd.cclk = 50000;


 FUNC_7(VAR_6, 0xd);
 return 0;
}
