
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {unsigned int vpd_cap_addr; } ;
struct TYPE_4__ {TYPE_1__ pci; } ;
struct adapter {int vpd_busy; int vpd_flag; TYPE_2__ params; } ;


 int FUNC_0 (struct adapter*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,scalar_t__,int*) ;
 int FUNC_3 (struct adapter*,scalar_t__,int ) ;
 int FUNC_4 (struct adapter*) ;

int FUNC_5(struct adapter *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 unsigned int VAR_8 = VAR_5->params.pci.vpd_cap_addr;
 int VAR_9;




 if (VAR_6 >= VAR_0 || (VAR_6 & 3))
  return -VAR_1;





 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_5, "VPD still busy from previous operation\n");
  return VAR_9;
 }







 FUNC_3(VAR_5, VAR_8 + VAR_2, (u16)VAR_6);
 VAR_5->vpd_busy = 1;
 VAR_5->vpd_flag = VAR_3;
 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_5, "VPD read of address %#x failed\n", VAR_6);
  return VAR_9;
 }





 FUNC_2(VAR_5, VAR_8 + VAR_4, VAR_7);
 *VAR_7 = FUNC_1(*VAR_7);
 return 0;
}
