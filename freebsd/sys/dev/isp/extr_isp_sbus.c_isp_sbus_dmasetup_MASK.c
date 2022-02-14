
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_scsiio {int dummy; } ;
struct TYPE_9__ {int error; void* rq; struct ccb_scsiio* cmd_token; TYPE_3__* isp; } ;
typedef TYPE_2__ mush_t ;
struct TYPE_8__ {int dmat; } ;
struct TYPE_10__ {TYPE_1__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;
struct TYPE_11__ {int dmap; } ;


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
 TYPE_7__* FUNC_0 (struct ccb_scsiio*) ;
 int FUNC_1 (struct ccb_scsiio*,int ) ;
 int FUNC_2 (int ,int ,union ccb*,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(ispsoftc_t *VAR_12, struct ccb_scsiio *VAR_13, void *VAR_14)
{
 mush_t VAR_15, *VAR_16;
 int VAR_17;

 VAR_16 = &VAR_15;
 VAR_16->isp = VAR_12;
 VAR_16->cmd_token = VAR_13;
 VAR_16->rq = VAR_14;
 VAR_16->error = 0;

 VAR_17 = FUNC_2(VAR_12->isp_osinfo.dmat,
     FUNC_0(VAR_13)->dmap, (union ccb *)VAR_13, VAR_11, VAR_16, 0);
 if (VAR_17 == VAR_7) {
  FUNC_3(VAR_12->isp_osinfo.dmat, FUNC_0(VAR_13)->dmap);
  VAR_16->error = VAR_8;
  FUNC_4(VAR_12, VAR_9,
      "deferred dma allocation not supported");
 } else if (VAR_17 && VAR_16->error == 0) {



  VAR_16->error = VAR_17;
 }
 if (VAR_16->error) {
  int VAR_18 = VAR_3;
  if (VAR_16->error == VAR_10) {
   VAR_18 = VAR_4;
  } else if (VAR_16->error == VAR_6) {
   FUNC_1(VAR_13, VAR_1);
  } else if (VAR_16->error == VAR_8) {
   FUNC_1(VAR_13, VAR_0);
  } else {
   FUNC_1(VAR_13, VAR_2);
  }
  return (VAR_18);
 }
 return (VAR_5);
}
