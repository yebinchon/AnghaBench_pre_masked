
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpgamgr_s10_softc {TYPE_2__* mgr_cdev_partial; TYPE_1__* mgr_cdev; int sx; int dev; int * s10_svc_dev; } ;
typedef int device_t ;
typedef int * devclass_t ;
struct TYPE_4__ {struct fpgamgr_s10_softc* si_drv1; } ;
struct TYPE_3__ {struct fpgamgr_s10_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ) ;
 struct fpgamgr_s10_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 void* FUNC_5 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 struct fpgamgr_s10_softc *VAR_5;
 devclass_t VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->dev = VAR_4;

 VAR_6 = FUNC_0("s10_svc");
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_5->s10_svc_dev = FUNC_1(VAR_6, 0);
 if (VAR_5->s10_svc_dev == ((void*)0))
  return (VAR_0);

 VAR_5->mgr_cdev = FUNC_5(&VAR_3, 0, VAR_2, VAR_1,
     0600, "fpga%d", FUNC_3(VAR_5->dev));
 if (VAR_5->mgr_cdev == ((void*)0)) {
  FUNC_4(VAR_4, "Failed to create character device.\n");
  return (VAR_0);
 }

 VAR_5->mgr_cdev_partial = FUNC_5(&VAR_3, 0, VAR_2, VAR_1,
     0600, "fpga_partial%d", FUNC_3(VAR_5->dev));
 if (VAR_5->mgr_cdev_partial == ((void*)0)) {
  FUNC_4(VAR_4, "Failed to create character device.\n");
  return (VAR_0);
 }

 FUNC_6(&VAR_5->sx, "s10 fpga");

 VAR_5->mgr_cdev->si_drv1 = VAR_5;
 VAR_5->mgr_cdev_partial->si_drv1 = VAR_5;

 return (0);
}
