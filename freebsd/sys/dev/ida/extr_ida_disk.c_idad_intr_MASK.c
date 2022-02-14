
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idad_softc {int dummy; } ;
struct bio {int bio_flags; scalar_t__ bio_resid; int bio_error; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct idad_softc* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;

void
FUNC_1(struct bio *VAR_2)
{
 struct idad_softc *VAR_3;

 VAR_3 = VAR_2->bio_disk->d_drv1;

 if (VAR_2->bio_flags & VAR_0)
  VAR_2->bio_error = VAR_1;
 else
  VAR_2->bio_resid = 0;

 FUNC_0(VAR_2);
}
