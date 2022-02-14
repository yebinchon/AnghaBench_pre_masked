
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ func_code; } ;
struct ccb_scsiio {TYPE_1__ ccb_h; } ;
struct TYPE_9__ {int error; int rq; struct ccb_scsiio* cmd_token; TYPE_4__* isp; } ;
typedef TYPE_3__ mush_t ;
struct TYPE_8__ {int dmat; } ;
struct TYPE_10__ {TYPE_2__ isp_osinfo; } ;
typedef TYPE_4__ ispsoftc_t ;
typedef int isp_ddir_t ;
typedef int bus_dma_segment_t ;
struct TYPE_11__ {int dmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_0 (struct ccb_scsiio*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct ccb_scsiio*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int *,int,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_10, bus_dma_segment_t *VAR_11, int VAR_12, int VAR_13)
{
 mush_t *VAR_14 = (mush_t *) VAR_10;
 ispsoftc_t *VAR_15 = VAR_14->isp;
 struct ccb_scsiio *VAR_16 = VAR_14->cmd_token;
 isp_ddir_t VAR_17;
 int VAR_18;

 if (VAR_13) {
  VAR_14->error = VAR_13;
  return;
 }
 if (VAR_12 == 0) {
  VAR_17 = VAR_6;
 } else {
  if ((VAR_16->ccb_h.flags & VAR_3) == VAR_2) {
   VAR_17 = VAR_5;
  } else {
   VAR_17 = VAR_7;
  }
  if ((VAR_16->ccb_h.func_code == VAR_9) ^
      ((VAR_16->ccb_h.flags & VAR_3) == VAR_2)) {
   VAR_18 = VAR_0;
  } else {
   VAR_18 = VAR_1;
  }
  FUNC_2(VAR_15->isp_osinfo.dmat, FUNC_0(VAR_16)->dmap,
      VAR_18);
 }

 if (FUNC_3(VAR_15, VAR_14->rq, VAR_11, VAR_12, FUNC_1(VAR_16),
     VAR_17, ((void*)0)) != VAR_4) {
  VAR_14->error = VAR_8;
 }
}
