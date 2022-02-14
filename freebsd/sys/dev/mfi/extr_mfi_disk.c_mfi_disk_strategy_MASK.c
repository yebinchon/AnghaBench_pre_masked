
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_softc {scalar_t__ issuepend_done; int mfi_io_lock; scalar_t__ hw_crit_error; scalar_t__ adpreset; } ;
struct mfi_disk {scalar_t__ ld_id; struct mfi_softc* ld_controller; } ;
struct bio {void* bio_driver2; void* bio_driver1; void* bio_error; int bio_bcount; int bio_resid; int bio_flags; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct mfi_disk* d_drv1; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct mfi_softc*,struct bio*) ;
 int FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_4)
{
 struct mfi_disk *VAR_5;
 struct mfi_softc *VAR_6;

 VAR_5 = VAR_4->bio_disk->d_drv1;

 if (VAR_5 == ((void*)0)) {
  VAR_4->bio_error = VAR_2;
  VAR_4->bio_flags |= VAR_0;
  VAR_4->bio_resid = VAR_4->bio_bcount;
  FUNC_0(VAR_4);
  return;
 }

 VAR_6 = VAR_5->ld_controller;
 if (VAR_6->adpreset) {
  VAR_4->bio_error = VAR_1;
  return;
 }

 if (VAR_6->hw_crit_error) {
  VAR_4->bio_error = VAR_1;
  return;
 }

 if (VAR_6->issuepend_done == 0) {
  VAR_4->bio_error = VAR_1;
  return;
 }

 VAR_4->bio_driver1 = (void *)(uintptr_t)VAR_5->ld_id;

 VAR_4->bio_driver2 = (void *)VAR_3;
 FUNC_3(&VAR_6->mfi_io_lock);
 FUNC_1(VAR_6, VAR_4);
 FUNC_2(VAR_6);
 FUNC_4(&VAR_6->mfi_io_lock);
 return;
}
