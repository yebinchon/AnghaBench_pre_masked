
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct mfip_softc {scalar_t__ state; struct cam_sim* sim; } ;
struct mfi_softc {int mfi_io_lock; int mfi_dev; } ;
struct cam_sim {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cam_sim*) ;
 int * FUNC_1 (int ,char*,int) ;
 struct mfip_softc* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 union ccb* FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int *,int ,int ,int ) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static void
FUNC_10(struct mfi_softc *VAR_6, uint32_t VAR_7)
{
 union ccb *VAR_8;
 struct mfip_softc *VAR_9;
 struct cam_sim *VAR_10;
 device_t VAR_11;

 FUNC_4(&VAR_2);
 VAR_11 = FUNC_1(VAR_6->mfi_dev, "mfip", -1);
 FUNC_5(&VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_6->mfi_dev, "Couldn't find mfip child device!\n");
  return;
 }

 FUNC_4(&VAR_6->mfi_io_lock);
 VAR_9 = FUNC_2(VAR_11);
 if (VAR_9->state == VAR_3) {
  FUNC_5(&VAR_6->mfi_io_lock);
  return;
 }
 VAR_9->state = VAR_5;

 VAR_8 = FUNC_6();
 if (VAR_8 == ((void*)0)) {
  FUNC_5(&VAR_6->mfi_io_lock);
  FUNC_3(VAR_6->mfi_dev,
      "Cannot allocate ccb for bus rescan.\n");
  return;
 }

 VAR_10 = VAR_9->sim;
 if (FUNC_7(&VAR_8->ccb_h.path, ((void*)0), FUNC_0(VAR_10),
     VAR_7, VAR_0) != VAR_1) {
  FUNC_8(VAR_8);
  FUNC_5(&VAR_6->mfi_io_lock);
  FUNC_3(VAR_6->mfi_dev,
      "Cannot create path for bus rescan.\n");
  return;
 }
 FUNC_9(VAR_8);

 VAR_9->state = VAR_4;
 FUNC_5(&VAR_6->mfi_io_lock);
}
