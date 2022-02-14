
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_19__ {int ht_slave; int ht_msimap; int ht_msictrl; int ht_msiaddr; } ;
struct TYPE_18__ {int ea_location; } ;
struct TYPE_17__ {int pcie_location; int pcie_type; } ;
struct TYPE_16__ {int pcix_location; } ;
struct TYPE_15__ {int vpd_reg; } ;
struct TYPE_14__ {int msix_location; int msix_ctrl; int msix_table_offset; int msix_pba_offset; void* msix_pba_bar; void* msix_table_bar; int msix_msgnum; } ;
struct TYPE_13__ {int msi_location; int msi_ctrl; int msi_msgnum; } ;
struct TYPE_12__ {int pp_cap; int pp_data; int pp_bse; int pp_status; } ;
struct TYPE_20__ {int hdrtype; int subvendor; int subdevice; TYPE_8__ ht; int func; int slot; int bus; int domain; TYPE_7__ ea; TYPE_6__ pcie; TYPE_5__ pcix; TYPE_4__ vpd; TYPE_3__ msix; TYPE_2__ msi; TYPE_1__ pp; } ;
typedef TYPE_9__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,...) ;
 int FUNC_4 (int ,TYPE_9__*) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_29, pcicfgregs *VAR_30)
{



 uint64_t VAR_31;

 uint32_t VAR_32;
 int VAR_33, VAR_34, VAR_35;

 switch (VAR_30->hdrtype & VAR_5) {
 case 138:
 case 140:
  VAR_35 = VAR_13;
  break;
 case 139:
  VAR_35 = VAR_14;
  break;
 default:
  return;
 }
 VAR_34 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_35, 1);




 while (VAR_34 != 0) {

  if (VAR_34 > 255) {
   FUNC_5("illegal PCI extended capability offset %d\n",
       VAR_34);
   return;
  }

  VAR_33 = VAR_34;
  VAR_34 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_2, 1);


  switch (FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_1, 1)) {
  case 130:
   if (VAR_30->pp.pp_cap == 0) {
    VAR_30->pp.pp_cap = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_23, 2);
    VAR_30->pp.pp_status = VAR_33 + VAR_25;
    VAR_30->pp.pp_bse = VAR_33 + VAR_22;
    if ((VAR_34 - VAR_33) > VAR_24)
     VAR_30->pp.pp_data = VAR_33 + VAR_24;
   }
   break;
  case 134:

   VAR_32 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_17, 2);

   if ((VAR_32 & 0xe000) == VAR_6)
    VAR_30->ht.ht_slave = VAR_33;


   switch (VAR_32 & VAR_7) {
   case 137:
    if (!(VAR_32 & VAR_9)) {

     VAR_31 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_15, 4);

     VAR_31 <<= 32;
     VAR_31 |= FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_16, 4);

     if (VAR_31 != VAR_0)
      FUNC_3(VAR_29,
     "HT device at pci%d:%d:%d:%d has non-default MSI window 0x%llx\n",
          VAR_30->domain, VAR_30->bus,
          VAR_30->slot, VAR_30->func,
          (long long)VAR_31);
    } else
     VAR_31 = VAR_0;

    VAR_30->ht.ht_msimap = VAR_33;
    VAR_30->ht.ht_msictrl = VAR_32;
    VAR_30->ht.ht_msiaddr = VAR_31;
    break;
   }

   break;
  case 133:
   VAR_30->msi.msi_location = VAR_33;
   VAR_30->msi.msi_ctrl = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_21, 2);
   VAR_30->msi.msi_msgnum = 1 << ((VAR_30->msi.msi_ctrl &
           VAR_10)>>1);
   break;
  case 132:
   VAR_30->msix.msix_location = VAR_33;
   VAR_30->msix.msix_ctrl = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_18, 2);
   VAR_30->msix.msix_msgnum = (VAR_30->msix.msix_ctrl &
       VAR_11) + 1;
   VAR_32 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_20, 4);
   VAR_30->msix.msix_table_bar = FUNC_0(VAR_32 &
       VAR_12);
   VAR_30->msix.msix_table_offset = VAR_32 & ~VAR_12;
   VAR_32 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_19, 4);
   VAR_30->msix.msix_pba_bar = FUNC_0(VAR_32 &
       VAR_12);
   VAR_30->msix.msix_pba_offset = VAR_32 & ~VAR_12;
   break;
  case 128:
   VAR_30->vpd.vpd_reg = VAR_33;
   break;
  case 129:

   if ((VAR_30->hdrtype & VAR_5) ==
       140) {
    VAR_32 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_26, 4);
    VAR_30->subvendor = VAR_32 & 0xffff;
    VAR_30->subdevice = VAR_32 >> 16;
   }
   break;
  case 131:







   if ((VAR_30->hdrtype & VAR_5) ==
       140)
    VAR_28 = 1;
   VAR_30->pcix.pcix_location = VAR_33;
   break;
  case 135:




   VAR_27 = 1;
   VAR_30->pcie.pcie_location = VAR_33;
   VAR_32 = FUNC_0(VAR_29, VAR_30->bus, VAR_30->slot, VAR_30->func, VAR_33 + VAR_4, 2);
   VAR_30->pcie.pcie_type = VAR_32 & VAR_3;
   break;
  case 136:
   VAR_30->ea.ea_location = VAR_33;
   FUNC_4(VAR_29, VAR_30);
   break;
  default:
   break;
  }
 }
}
