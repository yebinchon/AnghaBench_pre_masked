
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ocs_softc {int dbg_lock; TYPE_1__* cdev; int dev; } ;
typedef int int32_t ;
struct TYPE_2__ {struct ocs_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ocs_softc*) ;
 int FUNC_7 (int ,int ,char*,int *) ;

void
FUNC_8(void *VAR_5)
{
 struct ocs_softc *VAR_6 = VAR_5;
 int VAR_7 = 0;
 char *VAR_8 = ((void*)0);
 int32_t VAR_9 = VAR_1;
 uint32_t VAR_10 = 0;

 VAR_8 = "debug_mask";
 if (0 == (VAR_7 = FUNC_7(FUNC_0(VAR_6->dev), FUNC_1(VAR_6->dev),
    VAR_8, &VAR_10))) {
  FUNC_2(VAR_6->dev, "setting %s to %010x\n", VAR_8, VAR_10);
  FUNC_5(VAR_10);
 }

 VAR_9 = FUNC_1(VAR_6->dev);
 VAR_6->cdev = FUNC_3(&VAR_4, VAR_9, VAR_3, VAR_0, 0640,
   "ocs%d", VAR_9);
 if (VAR_6->cdev) {
  VAR_6->cdev->si_drv1 = VAR_6;
 }


 FUNC_6(VAR_6);
 FUNC_4(&VAR_6->dbg_lock, "ocs_dbg_lock", ((void*)0), VAR_2);
}
