
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xbd_softc {int xbd_io_lock; } ;
struct bio {int bio_bcount; int bio_resid; int bio_flags; int bio_error; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct xbd_softc* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xbd_softc*,struct bio*) ;
 int FUNC_4 (struct xbd_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_2)
{
 struct xbd_softc *VAR_3 = VAR_2->bio_disk->d_drv1;


 if (VAR_3 == ((void*)0)) {
  VAR_2->bio_error = VAR_1;
  VAR_2->bio_flags |= VAR_0;
  VAR_2->bio_resid = VAR_2->bio_bcount;
  FUNC_0(VAR_2);
  return;
 }




 FUNC_1(&VAR_3->xbd_io_lock);

 FUNC_3(VAR_3, VAR_2);
 FUNC_4(VAR_3);

 FUNC_2(&VAR_3->xbd_io_lock);
 return;
}
