
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cd_softc {int flags; int bio_queue; } ;
struct cam_periph {scalar_t__ softc; int path; } ;
struct bio {TYPE_1__* bio_disk; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bio*,int *,int ) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*,int ) ;
 int FUNC_6 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_5)
{
 struct cam_periph *VAR_6;
 struct cd_softc *VAR_7;

 VAR_6 = (struct cam_periph *)VAR_5->bio_disk->d_drv1;
 FUNC_3(VAR_6);
 FUNC_0(VAR_6->path, VAR_0,
     ("cdstrategy(%p)\n", VAR_5));

 VAR_7 = (struct cd_softc *)VAR_6->softc;




 if ((VAR_7->flags & VAR_2)) {
  FUNC_4(VAR_6);
  FUNC_1(VAR_5, ((void*)0), VAR_4);
  return;
 }




 FUNC_2(&VAR_7->bio_queue, VAR_5);





 if ((VAR_7->flags & VAR_3) == 0)
  FUNC_5(VAR_6, 0);
 else
  FUNC_6(VAR_6, VAR_1);

 FUNC_4(VAR_6);
 return;
}
