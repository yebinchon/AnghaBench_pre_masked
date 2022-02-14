
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct mmc_params {int dummy; } ;
struct cam_periph {TYPE_4__* path; TYPE_2__* softc; } ;
struct TYPE_6__ {scalar_t__ restart; int action; struct cam_periph* periph; scalar_t__ acmd41_count; scalar_t__ flags; } ;
typedef TYPE_2__ mmcprobe_softc ;
typedef int cam_status ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_5__ {int flags; int mmc_ident_data; } ;


 int FUNC_0 (TYPE_4__*,int ,char*) ;
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
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct cam_periph*,int ) ;

__attribute__((used)) static cam_status
FUNC_7(struct cam_periph *VAR_11, void *VAR_12)
{
 mmcprobe_softc *VAR_13;
 union ccb *VAR_14;
 int VAR_15;

 FUNC_0(VAR_11->path, VAR_1, ("mmcprobe_register\n"));

 VAR_14 = (union ccb *)VAR_12;
 if (VAR_14 == ((void*)0)) {
  FUNC_5("mmcprobe_register: no probe CCB, "
         "can't register device\n");
  return(VAR_5);
 }

 VAR_13 = (mmcprobe_softc *)FUNC_3(sizeof(*VAR_13), VAR_6, VAR_7);

 if (VAR_13 == ((void*)0)) {
  FUNC_5("proberegister: Unable to probe new device. "
         "Unable to allocate softc\n");
  return(VAR_5);
 }

 VAR_13->flags = 0;
 VAR_13->acmd41_count = 0;
 VAR_11->softc = VAR_13;
 VAR_13->periph = VAR_11;
 VAR_13->action = VAR_9;
        VAR_13->restart = 0;
 VAR_15 = FUNC_2(VAR_11);

        FUNC_4(&VAR_11->path->device->mmc_ident_data, 0, sizeof(struct mmc_params));
 if (VAR_15 != 0) {
  FUNC_5("proberegister: cam_periph_acquire failed (status=%d)\n",
   VAR_15);
  return (VAR_5);
 }
 FUNC_0(VAR_11->path, VAR_0, ("Probe started\n"));

 if (VAR_11->path->device->flags & VAR_2)
  FUNC_1(VAR_13, VAR_10);
 else
  FUNC_1(VAR_13, VAR_8);


 FUNC_6(VAR_11, VAR_3);

 return(VAR_4);
}
