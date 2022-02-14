
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ciss_softc {int ciss_max_logical_bus; int ciss_max_physical_bus; int ciss_mtx; int ciss_dev; int ** ciss_cam_sim; int * ciss_cam_devq; scalar_t__ ciss_max_requests; TYPE_2__* ciss_controllers; } ;
struct cam_sim {int dummy; } ;
struct TYPE_3__ {scalar_t__ bus; } ;
struct TYPE_4__ {TYPE_1__ physical; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,char*,struct ciss_softc*,int ,int *,int,scalar_t__,int *) ;
 int * FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ciss_softc*,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int ** FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct ciss_softc *VAR_8)
{
    int VAR_9, VAR_10;

    FUNC_3(1);





    if ((VAR_8->ciss_cam_devq = FUNC_1(VAR_8->ciss_max_requests - 2)) == ((void*)0)) {
 FUNC_2(VAR_8, "can't allocate CAM SIM queue\n");
 return(VAR_2);
    }
    VAR_10 = FUNC_6(VAR_8->ciss_max_logical_bus, VAR_8->ciss_max_physical_bus +
   VAR_1);
    VAR_8->ciss_cam_sim = FUNC_5(VAR_10 * sizeof(struct cam_sim*),
         VAR_0, VAR_4 | VAR_5);
    if (VAR_8->ciss_cam_sim == ((void*)0)) {
 FUNC_2(VAR_8, "can't allocate memory for controller SIM\n");
 return(VAR_2);
    }

    for (VAR_9 = 0; VAR_9 < VAR_8->ciss_max_logical_bus; VAR_9++) {
 if ((VAR_8->ciss_cam_sim[VAR_9] = FUNC_0(VAR_6, VAR_7,
       "ciss", VAR_8,
       FUNC_4(VAR_8->ciss_dev),
       &VAR_8->ciss_mtx,
       2,
       VAR_8->ciss_max_requests - 2,
       VAR_8->ciss_cam_devq)) == ((void*)0)) {
     FUNC_2(VAR_8, "can't allocate CAM SIM for controller %d\n", VAR_9);
     return(VAR_2);
 }




 FUNC_7(&VAR_8->ciss_mtx);
 if (VAR_9 == 0 || VAR_8->ciss_controllers[VAR_9].physical.bus != 0) {
     if (FUNC_9(VAR_8->ciss_cam_sim[VAR_9], VAR_8->ciss_dev, VAR_9) != 0) {
  FUNC_2(VAR_8, "can't register SCSI bus %d\n", VAR_9);
  FUNC_8(&VAR_8->ciss_mtx);
  return (VAR_3);
     }
 }
 FUNC_8(&VAR_8->ciss_mtx);
    }

    for (VAR_9 = VAR_1; VAR_9 < VAR_8->ciss_max_physical_bus +
  VAR_1; VAR_9++) {
 if ((VAR_8->ciss_cam_sim[VAR_9] = FUNC_0(VAR_6, VAR_7,
       "ciss", VAR_8,
       FUNC_4(VAR_8->ciss_dev),
       &VAR_8->ciss_mtx, 1,
       VAR_8->ciss_max_requests - 2,
       VAR_8->ciss_cam_devq)) == ((void*)0)) {
     FUNC_2(VAR_8, "can't allocate CAM SIM for controller %d\n", VAR_9);
     return (VAR_2);
 }

 FUNC_7(&VAR_8->ciss_mtx);
 if (FUNC_9(VAR_8->ciss_cam_sim[VAR_9], VAR_8->ciss_dev, VAR_9) != 0) {
     FUNC_2(VAR_8, "can't register SCSI bus %d\n", VAR_9);
     FUNC_8(&VAR_8->ciss_mtx);
     return (VAR_3);
 }
 FUNC_8(&VAR_8->ciss_mtx);
    }

    return(0);
}
