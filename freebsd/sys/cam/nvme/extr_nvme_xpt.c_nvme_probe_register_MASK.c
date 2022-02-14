
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ccb {int ccb_h; } ;
struct cam_periph {int path; TYPE_1__* softc; } ;
struct TYPE_3__ {int action; struct cam_periph* periph; scalar_t__ flags; int request_ccbs; } ;
typedef TYPE_1__ nvme_probe_softc ;
typedef int cam_status ;
struct TYPE_4__ {int tqe; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (struct cam_periph*) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct cam_periph*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static cam_status
FUNC_7(struct cam_periph *VAR_8, void *VAR_9)
{
 union ccb *VAR_10;
 nvme_probe_softc *VAR_11;

 VAR_10 = (union ccb *)VAR_9;
 if (VAR_10 == ((void*)0)) {
  FUNC_6("nvme_probe_register: no probe CCB, "
         "can't register device\n");
  return(VAR_2);
 }

 VAR_11 = (nvme_probe_softc *)FUNC_4(sizeof(*VAR_11), VAR_3, VAR_5 | VAR_4);

 if (VAR_11 == ((void*)0)) {
  FUNC_6("nvme_probe_register: Unable to probe new device. "
         "Unable to allocate softc\n");
  return(VAR_2);
 }
 FUNC_1(&VAR_11->request_ccbs);
 FUNC_2(&VAR_11->request_ccbs, &VAR_10->ccb_h,
     VAR_7.tqe);
 VAR_11->flags = 0;
 VAR_8->softc = VAR_11;
 VAR_11->periph = VAR_8;
 VAR_11->action = VAR_6;
 if (FUNC_3(VAR_8) != 0)
  return (VAR_2);

 FUNC_0(VAR_8->path, VAR_0, ("Probe started\n"));


 FUNC_5(VAR_8);

 return(VAR_1);
}
