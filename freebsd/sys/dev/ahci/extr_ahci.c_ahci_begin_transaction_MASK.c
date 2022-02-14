
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
struct TYPE_12__ {scalar_t__ nsegs; int data_map; } ;
struct ahci_slot {TYPE_6__ dma; int state; union ccb* ccb; } ;
struct TYPE_11__ {int data_tag; } ;
struct ahci_channel {int numslots; int lastslot; int oslots; scalar_t__ numrslots; int pm_level; size_t taggedtarget; int aslots; TYPE_5__ dma; int * numtslotspd; int numtslots; int * numrslotspd; int pm_timer; struct ahci_slot* slot; TYPE_1__* curr; } ;
struct TYPE_7__ {int tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ahci_slot*) ;
 int FUNC_1 (int ,int ,union ccb*,int ,struct ahci_slot*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct ahci_channel *VAR_8, union ccb *VAR_9)
{
 struct ahci_slot *VAR_10;
 int VAR_11, VAR_12;


 VAR_12 = VAR_8->numslots;
 if ((VAR_9->ccb_h.func_code == VAR_6) &&
     (VAR_9->ataio.cmd.flags & VAR_2))
  VAR_12 = VAR_8->curr[VAR_9->ccb_h.target_id].tags;
 if (VAR_8->lastslot + 1 < VAR_12)
  VAR_11 = FUNC_3(~(VAR_8->oslots >> (VAR_8->lastslot + 1)));
 else
  VAR_11 = 0;
 if (VAR_11 == 0 || VAR_11 + VAR_8->lastslot >= VAR_12)
  VAR_11 = FUNC_3(~VAR_8->oslots) - 1;
 else
  VAR_11 += VAR_8->lastslot;
 VAR_8->lastslot = VAR_11;

 VAR_10 = &VAR_8->slot[VAR_11];
 VAR_10->ccb = VAR_9;

 if (VAR_8->numrslots == 0 && VAR_8->pm_level > 3)
  FUNC_2(&VAR_8->pm_timer);

 VAR_8->oslots |= (1 << VAR_11);
 VAR_8->numrslots++;
 VAR_8->numrslotspd[VAR_9->ccb_h.target_id]++;
 if ((VAR_9->ccb_h.func_code == VAR_6) &&
     (VAR_9->ataio.cmd.flags & VAR_2)) {
  VAR_8->numtslots++;
  VAR_8->numtslotspd[VAR_9->ccb_h.target_id]++;
  VAR_8->taggedtarget = VAR_9->ccb_h.target_id;
 }
 if ((VAR_9->ccb_h.func_code == VAR_6) &&
     (VAR_9->ataio.cmd.flags & (VAR_1 | VAR_3)))
  VAR_8->aslots |= (1 << VAR_11);
 if ((VAR_9->ccb_h.flags & VAR_4) != VAR_5) {
  VAR_10->state = VAR_0;
  FUNC_1(VAR_8->dma.data_tag, VAR_10->dma.data_map, VAR_9,
      VAR_7, VAR_10, 0);
 } else {
  VAR_10->dma.nsegs = 0;
  FUNC_0(VAR_10);
 }
}
