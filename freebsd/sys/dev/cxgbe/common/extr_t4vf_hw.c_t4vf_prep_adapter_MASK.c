
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cclk; } ;
struct TYPE_4__ {int pmask; } ;
struct TYPE_6__ {int chipid; int fpga; int nports; TYPE_2__ vpd; TYPE_1__ vfres; } ;
struct adapter {int * chip_params; TYPE_3__ params; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*) ;

int FUNC_4(struct adapter *VAR_1)
{
 int VAR_2;




 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->params.chipid = FUNC_1(VAR_1->dev) >> 12;
 if (VAR_1->params.chipid >= 0xa) {
  VAR_1->params.chipid -= (0xa - 0x4);
  VAR_1->params.fpga = 1;
 }





 VAR_1->params.nports = 1;
 VAR_1->params.vfres.pmask = 1;
 VAR_1->params.vpd.cclk = 50000;

 VAR_1->chip_params = FUNC_2(FUNC_0(VAR_1));
 if (VAR_1->chip_params == ((void*)0))
  return -VAR_0;

 return 0;
}
