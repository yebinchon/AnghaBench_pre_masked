
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ func_code; int flags; int timeout; } ;
struct TYPE_5__ {int flags; int control; } ;
struct TYPE_6__ {TYPE_1__ cmd; } ;
union ccb {TYPE_4__ ccb_h; TYPE_2__ ataio; } ;
typedef int u_int64_t ;
typedef int timeout_t ;
struct siis_slot {int slot; int timeout; int state; union ccb* ccb; int dev; } ;
struct siis_cmd {int control; int protocol_override; scalar_t__ transfer_count; } ;
struct TYPE_7__ {int work; int work_bus; int work_map; int work_tag; } ;
struct siis_channel {int rslots; int r_mem; TYPE_3__ dma; int sim; int recoverycmd; int dev; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int *,struct siis_slot*,int ) ;
 struct siis_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct siis_slot*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct siis_cmd*,union ccb*,int) ;
 scalar_t__ VAR_22 ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static void
FUNC_13(struct siis_slot *VAR_23)
{
 device_t VAR_24 = VAR_23->dev;
 struct siis_channel *VAR_25 = FUNC_5(VAR_24);
 struct siis_cmd *VAR_26;
 union ccb *VAR_27 = VAR_23->ccb;
 u_int64_t VAR_28;

 FUNC_8(&VAR_25->mtx, VAR_7);

 VAR_26 = (struct siis_cmd *)
  (VAR_25->dma.work + VAR_9 + (VAR_10 * VAR_23->slot));
 VAR_26->control = 0;
 VAR_26->protocol_override = 0;
 VAR_26->transfer_count = 0;

 if (VAR_27->ccb_h.func_code == VAR_20) {
  if (VAR_27->ataio.cmd.flags & VAR_2) {
   VAR_26->control |= FUNC_7(VAR_18);
  } else {
   VAR_26->control |= FUNC_7(VAR_14);
   if (VAR_27->ataio.cmd.flags & VAR_3) {
    VAR_26->protocol_override |=
        FUNC_7(VAR_15);
   }
   if ((VAR_27->ccb_h.flags & VAR_5) == VAR_4) {
    VAR_26->protocol_override |=
        FUNC_7(VAR_16);
   } else
   if ((VAR_27->ccb_h.flags & VAR_5) == VAR_6) {
    VAR_26->protocol_override |=
        FUNC_7(VAR_17);
   }
  }
 } else if (VAR_27->ccb_h.func_code == VAR_21) {
  if ((VAR_27->ccb_h.flags & VAR_5) == VAR_4)
   VAR_26->control |= FUNC_7(VAR_12);
  else
  if ((VAR_27->ccb_h.flags & VAR_5) == VAR_6)
   VAR_26->control |= FUNC_7(VAR_13);
 }

 if ((VAR_27->ccb_h.func_code == VAR_20) &&
     (VAR_27->ataio.cmd.flags & VAR_2) &&
     (VAR_27->ataio.cmd.control & VAR_0)) {

  FUNC_10(VAR_24);
 }

 if (!FUNC_11(VAR_24, VAR_26, VAR_27, VAR_23->slot)) {
  FUNC_6(VAR_25->dev, "Setting up SATA FIS failed\n");
  if (!VAR_25->recoverycmd)
   FUNC_12(VAR_25->sim, 1);
  FUNC_9(VAR_23, VAR_11);
  return;
 }
 FUNC_3(VAR_25->dma.work_tag, VAR_25->dma.work_map,
     VAR_1);

 VAR_23->state = VAR_19;
 VAR_25->rslots |= (1 << VAR_23->slot);
 VAR_28 = VAR_25->dma.work_bus +
       VAR_9 + (VAR_10 * VAR_23->slot);
 FUNC_0(VAR_25->r_mem, FUNC_2(VAR_23->slot), VAR_28);
 FUNC_0(VAR_25->r_mem, FUNC_1(VAR_23->slot), VAR_28 >> 32);

 FUNC_4(&VAR_23->timeout, VAR_8 * VAR_27->ccb_h.timeout, 0,
     (timeout_t*)VAR_22, VAR_23, 0);
 return;
}
