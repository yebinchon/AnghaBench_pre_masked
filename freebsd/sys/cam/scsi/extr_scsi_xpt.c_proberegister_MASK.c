
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union ccb {int ccb_h; } ;
struct cam_periph {TYPE_3__* path; TYPE_2__* softc; } ;
struct TYPE_7__ {int action; struct cam_periph* periph; scalar_t__ flags; int request_ccbs; } ;
typedef TYPE_2__ probe_softc ;
typedef int cam_status ;
struct TYPE_9__ {int tqe; } ;
struct TYPE_8__ {TYPE_1__* bus; } ;
struct TYPE_6__ {int last_reset; } ;


 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*,int *,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct cam_periph*) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static cam_status
FUNC_9(struct cam_periph *VAR_8, void *VAR_9)
{
 union ccb *VAR_10;
 probe_softc *VAR_11;

 VAR_10 = (union ccb *)VAR_9;
 if (VAR_10 == ((void*)0)) {
  FUNC_6("proberegister: no probe CCB, "
         "can't register device\n");
  return(VAR_2);
 }

 VAR_11 = (probe_softc *)FUNC_5(sizeof(*VAR_11), VAR_3, VAR_4);

 if (VAR_11 == ((void*)0)) {
  FUNC_6("proberegister: Unable to probe new device. "
         "Unable to allocate softc\n");
  return(VAR_2);
 }
 FUNC_1(&VAR_11->request_ccbs);
 FUNC_2(&VAR_11->request_ccbs, &VAR_10->ccb_h,
     VAR_6.tqe);
 VAR_11->flags = 0;
 VAR_8->softc = VAR_11;
 VAR_11->periph = VAR_8;
 VAR_11->action = VAR_5;
 if (FUNC_3(VAR_8) != 0)
  return (VAR_2);

 FUNC_0(VAR_8->path, VAR_0, ("Probe started\n"));
 FUNC_8(VAR_8->path);






 FUNC_4(VAR_8, &VAR_8->path->bus->last_reset,
          VAR_7);
 FUNC_7(VAR_8);
 return(VAR_1);
}
