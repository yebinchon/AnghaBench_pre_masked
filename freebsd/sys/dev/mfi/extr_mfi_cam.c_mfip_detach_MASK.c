
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfip_softc {scalar_t__ state; int * devq; TYPE_1__* mfi_sc; int * sim; } ;
typedef int device_t ;
struct TYPE_2__ {int mfi_io_lock; int * mfi_cam_rescan_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mfip_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct mfip_softc *VAR_6;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_4(&VAR_6->mfi_sc->mfi_io_lock);
 if (VAR_6->state == VAR_4) {
  FUNC_5(&VAR_6->mfi_sc->mfi_io_lock);
  return (VAR_0);
 }
 VAR_6->state = VAR_3;
 FUNC_5(&VAR_6->mfi_sc->mfi_io_lock);

 VAR_6->mfi_sc->mfi_cam_rescan_cb = ((void*)0);

 if (VAR_6->sim != ((void*)0)) {
  FUNC_4(&VAR_6->mfi_sc->mfi_io_lock);
  FUNC_6(FUNC_1(VAR_6->sim));
  FUNC_0(VAR_6->sim, VAR_2);
  VAR_6->sim = ((void*)0);
  FUNC_5(&VAR_6->mfi_sc->mfi_io_lock);
 }

 if (VAR_6->devq != ((void*)0)) {
  FUNC_2(VAR_6->devq);
  VAR_6->devq = ((void*)0);
 }

 return (0);
}
