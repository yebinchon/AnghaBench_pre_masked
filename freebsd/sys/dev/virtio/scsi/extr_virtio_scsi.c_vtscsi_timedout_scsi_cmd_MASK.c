
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scsi_cmd_timeouts; } ;
struct vtscsi_softc {int vtscsi_flags; TYPE_1__ vtscsi_stats; int vtscsi_request_vq; } ;
struct vtscsi_request {scalar_t__ vsr_state; int vsr_flags; int vsr_ccb; struct vtscsi_softc* vsr_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_1 (struct vtscsi_softc*,int ) ;
 int FUNC_2 (struct vtscsi_softc*,int ,char*,...) ;
 int FUNC_3 (struct vtscsi_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7)
{
 struct vtscsi_softc *VAR_8;
 struct vtscsi_request *VAR_9;

 VAR_9 = VAR_7;
 VAR_8 = VAR_9->vsr_softc;

 FUNC_2(VAR_8, VAR_2, "timedout req=%p ccb=%p state=%#x\n",
     VAR_9, VAR_9->vsr_ccb, VAR_9->vsr_state);


 if (VAR_8->vtscsi_flags & VAR_1)
  return;





 if (VAR_9->vsr_state != VAR_5 ||
     (VAR_9->vsr_flags & VAR_3) == 0)
  return;





 FUNC_1(VAR_8, VAR_8->vtscsi_request_vq);
 if (VAR_9->vsr_state == VAR_4)
  return;

 VAR_8->vtscsi_stats.scsi_cmd_timeouts++;
 VAR_9->vsr_state = VAR_6;

 if (FUNC_0(VAR_8, VAR_9) == 0)
  return;

 FUNC_2(VAR_8, VAR_0, "resetting bus\n");
 FUNC_3(VAR_8);
}
