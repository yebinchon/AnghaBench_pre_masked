
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpgamgr_a10_softc {TYPE_1__* mgr_cdev; int dev; int * res; int bsh_data; int bst_data; } ;
typedef int device_t ;
struct TYPE_2__ {struct fpgamgr_a10_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct fpgamgr_a10_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct fpgamgr_a10_softc *VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 VAR_6->dev = VAR_5;

 if (FUNC_0(VAR_5, VAR_4, VAR_6->res)) {
  FUNC_3(VAR_5, "Could not allocate resources.\n");
  return (VAR_0);
 }


 VAR_6->bst_data = FUNC_6(VAR_6->res[1]);
 VAR_6->bsh_data = FUNC_5(VAR_6->res[1]);

 VAR_6->mgr_cdev = FUNC_4(&VAR_3, 0, VAR_2, VAR_1,
     0600, "fpga%d", FUNC_2(VAR_6->dev));

 if (VAR_6->mgr_cdev == ((void*)0)) {
  FUNC_3(VAR_5, "Failed to create character device.\n");
  return (VAR_0);
 }

 VAR_6->mgr_cdev->si_drv1 = VAR_6;

 return (0);
}
