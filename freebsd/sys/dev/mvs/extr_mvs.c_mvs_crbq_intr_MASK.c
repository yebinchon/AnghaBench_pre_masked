
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_1__ res; } ;
union ccb {TYPE_2__ ataio; } ;
typedef int uint32_t ;
typedef int uint16_t ;
struct mvs_crpb {int id; int rspflg; } ;
struct TYPE_7__ {int workrp_bus; int workrp_map; int workrp_tag; scalar_t__ workrp; } ;
struct mvs_channel {int in_idx; scalar_t__ numtslots; TYPE_3__ dma; int r_mem; int rslots; TYPE_4__* slot; } ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ state; union ccb* ccb; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ,int ,int ) ;
 struct mvs_channel* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_15)
{
 struct mvs_channel *VAR_16 = FUNC_3(VAR_15);
 struct mvs_crpb *VAR_17;
 union ccb *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23;
 uint16_t VAR_24;

 VAR_23 = FUNC_0(VAR_16->r_mem, VAR_3);
 if (VAR_23 == 0)
  VAR_23 = FUNC_0(VAR_16->r_mem, VAR_3);
 VAR_19 = (VAR_23 & VAR_5) >>
     VAR_6;
 FUNC_2(VAR_16->dma.workrp_tag, VAR_16->dma.workrp_map,
     VAR_0);
 VAR_20 = VAR_21 = VAR_16->in_idx;
 VAR_16->in_idx = VAR_19;
 while (VAR_19 != VAR_21) {
  VAR_17 = (struct mvs_crpb *)
      (VAR_16->dma.workrp + VAR_9 +
      (VAR_10 * VAR_21));
  VAR_22 = FUNC_5(VAR_17->id) & VAR_11;
  VAR_24 = FUNC_5(VAR_17->rspflg);





  if (VAR_17->id == 0xffff && VAR_17->rspflg == 0xffff) {
   FUNC_4(VAR_15, "Unfilled CRPB "
       "%d (%d->%d) tag %d flags %04x rs %08x\n",
       VAR_21, VAR_20, VAR_19, VAR_22, VAR_24, VAR_16->rslots);
  } else

  if (VAR_16->numtslots != 0 ||
      (VAR_24 & VAR_2) == 0) {

   VAR_17->id = 0xffff;
   VAR_17->rspflg = 0xffff;

   if (VAR_16->slot[VAR_22].state >= VAR_14) {
    VAR_18 = VAR_16->slot[VAR_22].ccb;
    VAR_18->ataio.res.status =
        (VAR_24 & VAR_7) >>
        VAR_8;
    FUNC_6(&VAR_16->slot[VAR_22], VAR_12);
   } else {
    FUNC_4(VAR_15, "Unused tag in CRPB "
        "%d (%d->%d) tag %d flags %04x rs %08x\n",
        VAR_21, VAR_20, VAR_19, VAR_22, VAR_24,
        VAR_16->rslots);
   }
  } else {
   FUNC_4(VAR_15,
       "CRPB with error %d tag %d flags %04x\n",
       VAR_21, VAR_22, VAR_24);
  }
  VAR_21 = (VAR_21 + 1) & (VAR_13 - 1);
 }
 FUNC_2(VAR_16->dma.workrp_tag, VAR_16->dma.workrp_map,
     VAR_1);
 if (VAR_21 == VAR_16->in_idx) {
  FUNC_1(VAR_16->r_mem, VAR_4,
      VAR_16->dma.workrp_bus | (VAR_21 << VAR_6));
 }
}
