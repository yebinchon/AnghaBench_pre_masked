
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfip_softc {int * devq; int * sim; struct mfi_softc* mfi_sc; int state; int dev; } ;
struct mfi_softc {int mfi_io_lock; int mfi_cam_rescan_cb; int mfi_cam_start; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,char*,struct mfip_softc*,int ,int *,int,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_9)
{
 struct mfip_softc *VAR_10;
 struct mfi_softc *VAR_11;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_5(FUNC_4(VAR_9));
 VAR_10->dev = VAR_9;
 VAR_10->state = VAR_3;
 VAR_10->mfi_sc = VAR_11;
 VAR_11->mfi_cam_start = VAR_8;

 if ((VAR_10->devq = FUNC_2(VAR_4)) == ((void*)0))
  return (VAR_1);

 VAR_10->sim = FUNC_0(VAR_5, VAR_6, "mfi", VAR_10,
    FUNC_6(VAR_9), &VAR_11->mfi_io_lock, 1,
    VAR_4, VAR_10->devq);
 if (VAR_10->sim == ((void*)0)) {
  FUNC_3(VAR_10->devq);
  VAR_10->devq = ((void*)0);
  FUNC_7(VAR_9, "CAM SIM attach failed\n");
  return (VAR_0);
 }

 VAR_11->mfi_cam_rescan_cb = VAR_7;

 FUNC_8(&VAR_11->mfi_io_lock);
 if (FUNC_10(VAR_10->sim, VAR_9, 0) != 0) {
  FUNC_7(VAR_9, "XPT bus registration failed\n");
  FUNC_1(VAR_10->sim, VAR_2);
  VAR_10->sim = ((void*)0);
  FUNC_3(VAR_10->devq);
  VAR_10->devq = ((void*)0);
  FUNC_9(&VAR_11->mfi_io_lock);
  return (VAR_0);
 }
 FUNC_9(&VAR_11->mfi_io_lock);

 return (0);
}
