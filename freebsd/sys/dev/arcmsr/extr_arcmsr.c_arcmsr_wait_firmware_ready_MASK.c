
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; int iop2drv_doorbell; } ;
struct AdapterControlBlock {int adapter_type; int pci_unit; scalar_t__ pmu; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5( struct AdapterControlBlock *VAR_11)
{
 int VAR_12=0;

 switch (VAR_11->adapter_type) {
 case 132: {
   while ((FUNC_0(VAR_6, 0, VAR_10) & VAR_5) == 0)
   {
    if (VAR_12++ > 2000)
    {
     FUNC_4( "arcmsr%d:timed out waiting for firmware \n", VAR_11->pci_unit);
     return;
    }
    FUNC_2(15000);
   }
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_13 = (struct HBB_MessageUnit *)VAR_11->pmu;
   while ((FUNC_1(0, VAR_13->iop2drv_doorbell) & VAR_4) == 0)
   {
    if (VAR_12++ > 2000)
    {
     FUNC_4( "arcmsr%d: timed out waiting for firmware \n", VAR_11->pci_unit);
     return;
    }
    FUNC_2(15000);
   }
   FUNC_3(0, VAR_13->drv2iop_doorbell, VAR_0);
  }
  break;
 case 130: {
   while ((FUNC_0(VAR_7, 0, VAR_10) & VAR_1) == 0)
   {
    if (VAR_12++ > 2000)
    {
     FUNC_4( "arcmsr%d:timed out waiting for firmware ready\n", VAR_11->pci_unit);
     return;
    }
    FUNC_2(15000);
   }
  }
  break;
 case 129: {
   while ((FUNC_0(VAR_8, 0, VAR_10) & VAR_2) == 0)
   {
    if (VAR_12++ > 2000)
    {
     FUNC_4( "arcmsr%d:timed out waiting for firmware ready\n", VAR_11->pci_unit);
     return;
    }
    FUNC_2(15000);
   }
  }
  break;
 case 128: {
   while ((FUNC_0(VAR_9, 0, VAR_10) & VAR_3) == 0)
   {
    if (VAR_12++ > 4000)
    {
     FUNC_4( "arcmsr%d:timed out waiting for firmware ready\n", VAR_11->pci_unit);
     return;
    }
    FUNC_2(15000);
   }
  }
  break;
 }
}
