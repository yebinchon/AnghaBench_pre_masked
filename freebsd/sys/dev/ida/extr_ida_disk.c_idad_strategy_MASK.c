
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idad_softc {int flags; int controller; } ;
struct bio {scalar_t__ bio_cmd; int bio_bcount; int bio_resid; int bio_flags; struct idad_softc* bio_driver1; int bio_error; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {struct idad_softc* d_drv1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,struct bio*) ;

__attribute__((used)) static void
FUNC_2(struct bio *VAR_5)
{
 struct idad_softc *VAR_6;

 VAR_6 = VAR_5->bio_disk->d_drv1;
 if (VAR_6 == ((void*)0)) {
      VAR_5->bio_error = VAR_3;
  goto bad;
 }




 if (VAR_6->flags & VAR_2 && (VAR_5->bio_cmd == VAR_1)) {
  VAR_5->bio_error = VAR_4;
  goto bad;
 }

 VAR_5->bio_driver1 = VAR_6;
 FUNC_1(VAR_6->controller, VAR_5);
 return;

bad:
 VAR_5->bio_flags |= VAR_0;




 VAR_5->bio_resid = VAR_5->bio_bcount;
 FUNC_0(VAR_5);
 return;
}
