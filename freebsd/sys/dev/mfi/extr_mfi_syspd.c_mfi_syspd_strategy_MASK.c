
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_system_pd {scalar_t__ pd_id; struct mfi_softc* pd_controller; } ;
struct mfi_softc {int mfi_io_lock; } ;
struct bio {void* bio_driver2; void* bio_driver1; int bio_bcount; int bio_resid; int bio_flags; int bio_error; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct mfi_system_pd* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct mfi_softc*,struct bio*) ;
 int FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_3)
{
 struct mfi_system_pd *VAR_4;
 struct mfi_softc *VAR_5;

 VAR_4 = VAR_3->bio_disk->d_drv1;

 if (VAR_4 == ((void*)0)) {
  VAR_3->bio_error = VAR_1;
  VAR_3->bio_flags |= VAR_0;
  VAR_3->bio_resid = VAR_3->bio_bcount;
  FUNC_0(VAR_3);
  return;
 }

 VAR_5 = VAR_4->pd_controller;
 VAR_3->bio_driver1 = (void *)(uintptr_t)VAR_4->pd_id;

 VAR_3->bio_driver2 = (void *)VAR_2;
 FUNC_3(&VAR_5->mfi_io_lock);
 FUNC_1(VAR_5, VAR_3);
 FUNC_2(VAR_5);
 FUNC_4(&VAR_5->mfi_io_lock);
 return;
}
