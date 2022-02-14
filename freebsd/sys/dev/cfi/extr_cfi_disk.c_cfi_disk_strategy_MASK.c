
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfi_disk_softc {int iotask; int tq; int qlock; int bioq; } ;
struct bio {scalar_t__ bio_bcount; scalar_t__ bio_resid; int bio_cmd; int bio_error; int bio_flags; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct cfi_disk_softc* d_drv1; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_2)
{
 struct cfi_disk_softc *VAR_3 = VAR_2->bio_disk->d_drv1;

 if (VAR_3 == ((void*)0))
  goto invalid;
 if (VAR_2->bio_bcount == 0) {
  VAR_2->bio_resid = VAR_2->bio_bcount;
  FUNC_0(VAR_2);
  return;
 }
 switch (VAR_2->bio_cmd) {
 case 129:
 case 128:
  FUNC_2(&VAR_3->qlock);

  FUNC_1(&VAR_3->bioq, VAR_2);
  FUNC_3(&VAR_3->qlock);
  FUNC_4(VAR_3->tq, &VAR_3->iotask);
  return;
 }

invalid:
 VAR_2->bio_flags |= VAR_0;
 VAR_2->bio_error = VAR_1;
 FUNC_0(VAR_2);
}
