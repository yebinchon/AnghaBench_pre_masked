
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_softc {int flags; int bio_queue; } ;
struct cam_periph {scalar_t__ softc; } ;
struct bio {int bio_bcount; int bio_resid; TYPE_1__* bio_dev; } ;
struct TYPE_2__ {scalar_t__ si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*,int *,int ) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_3)
{
 struct cam_periph *VAR_4;
 struct pt_softc *VAR_5;

 VAR_4 = (struct cam_periph *)VAR_3->bio_dev->si_drv1;
 VAR_3->bio_resid = VAR_3->bio_bcount;
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, ((void*)0), VAR_1);
  return;
 }
 FUNC_2(VAR_4);
 VAR_5 = (struct pt_softc *)VAR_4->softc;




 if ((VAR_5->flags & VAR_2)) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_3, ((void*)0), VAR_1);
  return;
 }




 FUNC_1(&VAR_5->bio_queue, VAR_3);




 FUNC_4(VAR_4, VAR_0);
 FUNC_3(VAR_4);

 return;
}
