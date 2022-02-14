
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct CommandControlBlock {int srb_flags; scalar_t__ srb_state; int dm_segs_dmamap; int ccb_callout; union ccb* pccb; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int srboutstandingcount; int acb_flags; int maxOutstanding; int pktReturnCount; int dm_segs_dmat; } ;
typedef int bus_dmasync_op_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct CommandControlBlock*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void FUNC_6(struct CommandControlBlock *VAR_9, int VAR_10)
{
 struct AdapterControlBlock *VAR_11 = VAR_9->acb;
 union ccb *VAR_12 = VAR_9->pccb;

 if(VAR_9->srb_flags & VAR_8)
  FUNC_4(&VAR_9->ccb_callout);
 if((VAR_12->ccb_h.flags & VAR_5) != VAR_6) {
  bus_dmasync_op_t VAR_13;

  if((VAR_12->ccb_h.flags & VAR_5) == VAR_4) {
   VAR_13 = VAR_2;
  } else {
   VAR_13 = VAR_3;
  }
  FUNC_2(VAR_11->dm_segs_dmat, VAR_9->dm_segs_dmamap, VAR_13);
  FUNC_3(VAR_11->dm_segs_dmat, VAR_9->dm_segs_dmamap);
 }
 if(VAR_10 == 1) {
  FUNC_1(&VAR_11->srboutstandingcount, 1);
  if((VAR_11->acb_flags & VAR_0) && (
  VAR_11->srboutstandingcount < (VAR_11->maxOutstanding -10))) {
   VAR_11->acb_flags &= ~VAR_0;
   VAR_12->ccb_h.status |= VAR_7;
  }
 }
 if(VAR_9->srb_state != VAR_1)
  FUNC_0(VAR_9);
 VAR_11->pktReturnCount++;
 FUNC_5(VAR_12);
}
