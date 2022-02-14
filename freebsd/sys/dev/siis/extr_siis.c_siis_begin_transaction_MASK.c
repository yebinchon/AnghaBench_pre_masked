
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ func_code; size_t target_id; int flags; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_2__ cmd; } ;
union ccb {TYPE_4__ ccb_h; TYPE_3__ ataio; } ;
struct TYPE_12__ {int data_map; scalar_t__ nsegs; } ;
struct siis_slot {int slot; TYPE_6__ dma; int state; union ccb* ccb; } ;
struct TYPE_11__ {int data_tag; } ;
struct siis_channel {int oslots; int aslots; TYPE_5__ dma; int * numtslots; int numrslots; struct siis_slot* slot; TYPE_1__* curr; int mtx; } ;
typedef int device_t ;
struct TYPE_7__ {int tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,union ccb*,int ,struct siis_slot*,int ) ;
 struct siis_channel* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct siis_slot*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_10, union ccb *VAR_11)
{
 struct siis_channel *VAR_12 = FUNC_1(VAR_10);
 struct siis_slot *VAR_13;
 int VAR_14, VAR_15;

 FUNC_3(&VAR_12->mtx, VAR_5);

 VAR_15 = VAR_6;
 if ((VAR_11->ccb_h.func_code == VAR_8) &&
     (VAR_11->ataio.cmd.flags & VAR_1))
  VAR_15 = VAR_12->curr[VAR_11->ccb_h.target_id].tags;
 VAR_14 = FUNC_2((~VAR_12->oslots) & (0x7fffffff >> (31 - VAR_15))) - 1;

 VAR_13 = &VAR_12->slot[VAR_14];
 VAR_13->ccb = VAR_11;

 VAR_12->oslots |= (1 << VAR_13->slot);
 VAR_12->numrslots++;
 if ((VAR_11->ccb_h.func_code == VAR_8) &&
     (VAR_11->ataio.cmd.flags & VAR_1)) {
  VAR_12->numtslots[VAR_11->ccb_h.target_id]++;
 }
 if ((VAR_11->ccb_h.func_code == VAR_8) &&
     (VAR_11->ataio.cmd.flags & (VAR_0 | VAR_2)))
  VAR_12->aslots |= (1 << VAR_13->slot);
 VAR_13->dma.nsegs = 0;

 if ((VAR_11->ccb_h.flags & VAR_3) != VAR_4) {
  VAR_13->state = VAR_7;
  FUNC_0(VAR_12->dma.data_tag, VAR_13->dma.data_map,
      VAR_11, VAR_9, VAR_13, 0);
 } else
  FUNC_4(VAR_13);
}
