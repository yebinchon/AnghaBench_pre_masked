
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int target_id; int flags; scalar_t__ func_code; int timeout; } ;
struct TYPE_8__ {int flags; int control; scalar_t__ command; } ;
struct TYPE_9__ {TYPE_3__ cmd; } ;
union ccb {TYPE_5__ ccb_h; TYPE_4__ ataio; } ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int32_t ;
typedef int timeout_t ;
struct TYPE_6__ {int nsegs; } ;
struct ahci_slot {int slot; int timeout; int state; TYPE_1__ dma; union ccb* ccb; struct ahci_channel* ch; } ;
struct ahci_cmd_tab {int dummy; } ;
struct ahci_cmd_list {int cmd_table_phys; void* cmd_flags; scalar_t__ bytecount; void* prd_length; } ;
struct TYPE_7__ {int* rfis; int rfis_map; int rfis_tag; int work_map; int work_tag; scalar_t__ work_bus; scalar_t__ work; } ;
struct ahci_channel {int rslots; int quirks; int eslots; int r_mem; int dev; TYPE_2__ dma; scalar_t__ fbs_enabled; } ;
typedef enum ahci_err_type { ____Placeholder_ahci_err_type } ahci_err_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
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
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (int) ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_3 (struct ahci_channel*) ;
 int FUNC_4 (struct ahci_slot*,int) ;
 int FUNC_5 (struct ahci_channel*,struct ahci_cmd_tab*,union ccb*,int) ;
 int FUNC_6 (struct ahci_channel*,int ) ;
 int FUNC_7 (struct ahci_channel*) ;
 scalar_t__ VAR_40 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,int,int ,int *,struct ahci_slot*,int ) ;
 int FUNC_10 (int ,char*,...) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13(struct ahci_slot *VAR_41)
{
 struct ahci_channel *VAR_42 = VAR_41->ch;
 struct ahci_cmd_tab *VAR_43;
 struct ahci_cmd_list *VAR_44;
 union ccb *VAR_45 = VAR_41->ccb;
 int VAR_46 = VAR_45->ccb_h.target_id & 0x0f;
 int VAR_47, VAR_48, VAR_49;
 uint8_t *VAR_50 = VAR_42->dma.rfis + 0x40;
 uint8_t VAR_51;
 uint16_t VAR_52;


 VAR_43 = (struct ahci_cmd_tab *)
  (VAR_42->dma.work + VAR_7 + (VAR_8 * VAR_41->slot));

 if (!(VAR_47 = FUNC_5(VAR_42, VAR_43, VAR_45, VAR_41->slot))) {
  FUNC_10(VAR_42->dev, "Setting up SATA FIS failed\n");
  FUNC_4(VAR_41, VAR_9);
  return;
 }

 VAR_44 = (struct ahci_cmd_list *)
     (VAR_42->dma.work + VAR_0 + (VAR_1 * VAR_41->slot));
 VAR_52 =
      (VAR_45->ccb_h.flags & VAR_36 ? VAR_6 : 0) |
      (VAR_45->ccb_h.func_code == VAR_39 ?
       (VAR_2 | VAR_4) : 0) |
      (VAR_47 / sizeof(u_int32_t)) |
      (VAR_46 << 12);
 VAR_44->prd_length = FUNC_11(VAR_41->dma.nsegs);

 if ((VAR_45->ccb_h.func_code == VAR_38) &&
     (VAR_45->ataio.cmd.flags & VAR_34)) {
  if (VAR_45->ataio.cmd.control & VAR_27) {
   VAR_49 = 1;

   FUNC_7(VAR_42);
   FUNC_3(VAR_42);
   FUNC_6(VAR_42, 0);
   VAR_52 |= VAR_5 | VAR_3;
  } else {
   VAR_49 = 2;

   for (VAR_48 = 0; VAR_48 < 20; VAR_48++)
    VAR_50[VAR_48] = 0xff;
  }
 } else
  VAR_49 = 0;
 VAR_44->bytecount = 0;
 VAR_44->cmd_flags = FUNC_11(VAR_52);
 VAR_44->cmd_table_phys = FUNC_12(VAR_42->dma.work_bus + VAR_7 +
      (VAR_8 * VAR_41->slot));
 FUNC_8(VAR_42->dma.work_tag, VAR_42->dma.work_map,
     VAR_32 | VAR_33);
 FUNC_8(VAR_42->dma.rfis_tag, VAR_42->dma.rfis_map,
     VAR_32);

 if ((VAR_45->ccb_h.func_code == VAR_38) &&
     (VAR_45->ataio.cmd.flags & VAR_35)) {
  FUNC_1(VAR_42->r_mem, VAR_20, 1 << VAR_41->slot);
 }

 if (VAR_42->fbs_enabled) {
  FUNC_1(VAR_42->r_mem, VAR_15, VAR_17 |
      (VAR_46 << VAR_16));
 }

 VAR_41->state = VAR_26;
 VAR_42->rslots |= (1 << VAR_41->slot);
 FUNC_1(VAR_42->r_mem, VAR_13, (1 << VAR_41->slot));

 if (VAR_45->ccb_h.func_code == VAR_38 &&
     (VAR_45->ataio.cmd.command == VAR_28 || VAR_49)) {
  int VAR_53, VAR_54 = VAR_45->ccb_h.timeout * 100;
  enum ahci_err_type VAR_55 = VAR_10;

  for (VAR_53 = 0; VAR_53 < VAR_54; VAR_53++) {
   FUNC_2(10);
   if (!(FUNC_0(VAR_42->r_mem, VAR_13) & (1 << VAR_41->slot)))
    break;
   if ((FUNC_0(VAR_42->r_mem, VAR_22) & VAR_30) &&
       VAR_49 != 1) {





    VAR_55 = VAR_11;
    break;
   }

   if (VAR_45->ccb_h.target_id == 15 &&
       (VAR_42->quirks & VAR_23) &&
       (FUNC_0(VAR_42->r_mem, VAR_18) & VAR_19)) {
    VAR_55 = VAR_12;
    break;
   }
  }






  if (VAR_42->quirks & VAR_24)
   FUNC_2(50000);
  if ((VAR_42->quirks & VAR_25) == 0 &&
      (VAR_42->quirks & VAR_23) == 0 &&
      VAR_49 == 2 && VAR_55 == VAR_10) {
   for ( ; VAR_53 < VAR_54; VAR_53++) {
    FUNC_8(VAR_42->dma.rfis_tag,
        VAR_42->dma.rfis_map, VAR_31);
    VAR_51 = VAR_50[2];
    FUNC_8(VAR_42->dma.rfis_tag,
        VAR_42->dma.rfis_map, VAR_32);
    if ((VAR_51 & VAR_29) == 0)
     break;
    FUNC_2(10);
   }
  }

  if (VAR_54 && (VAR_53 >= VAR_54)) {
   FUNC_10(VAR_42->dev, "Poll timeout on slot %d port %d\n",
       VAR_41->slot, VAR_46);
   FUNC_10(VAR_42->dev, "is %08x cs %08x ss %08x "
       "rs %08x tfd %02x serr %08x cmd %08x\n",
       FUNC_0(VAR_42->r_mem, VAR_18),
       FUNC_0(VAR_42->r_mem, VAR_13),
       FUNC_0(VAR_42->r_mem, VAR_20), VAR_42->rslots,
       FUNC_0(VAR_42->r_mem, VAR_22),
       FUNC_0(VAR_42->r_mem, VAR_21),
       FUNC_0(VAR_42->r_mem, VAR_14));
   VAR_55 = VAR_12;
  }


  if (VAR_49 == 2)
   VAR_42->eslots |= (1 << VAR_41->slot);
  FUNC_4(VAR_41, VAR_55);
  return;
 }

 FUNC_9(&VAR_41->timeout, VAR_37 * VAR_45->ccb_h.timeout / 2,
     0, (timeout_t*)VAR_40, VAR_41, 0);
 return;
}
