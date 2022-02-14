
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
struct adapter {int vpd_busy; scalar_t__ vpd_flag; TYPE_2__ params; } ;


 int FUNC_0 (struct adapter*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;
 int FUNC_3 (struct adapter*,scalar_t__,int ) ;
 int FUNC_4 (struct adapter*,int ,int*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct adapter *VAR_9, u32 VAR_10, u32 VAR_11)
{
 unsigned int VAR_12 = VAR_9->params.pci.vpd_cap_addr;
 int VAR_13;
 u32 VAR_14;
 int VAR_15;




 if (VAR_10 >= VAR_0 || (VAR_10 & 3))
  return -VAR_4;





 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13) {
  FUNC_0(VAR_9, "VPD still busy from previous operation\n");
  return VAR_13;
 }







 FUNC_3(VAR_9, VAR_12 + VAR_8,
     FUNC_1(VAR_11));
 FUNC_2(VAR_9, VAR_12 + VAR_6,
     (u16)VAR_10 | VAR_7);
 VAR_9->vpd_busy = 1;
 VAR_9->vpd_flag = 0;
 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13) {
  FUNC_0(VAR_9, "VPD write of address %#x failed\n", VAR_10);
  return VAR_13;
 }





 FUNC_3(VAR_9, VAR_12 + VAR_8, 0);
 VAR_15 = VAR_2;
 do {
  FUNC_6(VAR_1);
  FUNC_4(VAR_9, VAR_3, &VAR_14);
 } while ((VAR_14 & 0x1) && --VAR_15);
 if (!VAR_15)
  return -VAR_5;


 return 0;
}
