
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct CommandControlBlock {scalar_t__ srb_state; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int adapter_type; int vir2phy_offset; int pci_unit; int srboutstandingcount; struct CommandControlBlock** psrb_pool; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct CommandControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*,struct CommandControlBlock*,int ) ;
 int FUNC_2 (char*,int,struct CommandControlBlock*,...) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_2, u_int32_t VAR_3, u_int16_t VAR_4)
{
 struct CommandControlBlock *VAR_5;


 switch (VAR_2->adapter_type) {
 case 132:
 case 131:
  VAR_5 = (struct CommandControlBlock *)(VAR_2->vir2phy_offset+(VAR_3 << 5));
  break;
 case 130:
 case 129:
  VAR_5 = (struct CommandControlBlock *)(VAR_2->vir2phy_offset+(VAR_3 & 0xFFFFFFE0));
  break;
 case 128:
  VAR_5 = VAR_2->psrb_pool[VAR_3];
  break;
 default:
  VAR_5 = (struct CommandControlBlock *)(VAR_2->vir2phy_offset+(VAR_3 << 5));
  break;
 }
 if((VAR_5->acb != VAR_2) || (VAR_5->srb_state != VAR_0)) {
  if(VAR_5->srb_state == VAR_1) {
   FUNC_0(VAR_5);
   FUNC_2("arcmsr%d: srb='%p' return srb has been timeouted\n", VAR_2->pci_unit, VAR_5);
   return;
  }
  FUNC_2("arcmsr%d: return srb has been completed\n"
   "srb='%p' srb_state=0x%x outstanding srb count=%d \n",
   VAR_2->pci_unit, VAR_5, VAR_5->srb_state, VAR_2->srboutstandingcount);
  return;
 }
 FUNC_1(VAR_2, VAR_5, VAR_4);
}
