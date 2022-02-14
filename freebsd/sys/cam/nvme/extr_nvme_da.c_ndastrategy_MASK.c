
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nda_softc {int cam_iosched; int deletes; } ;
struct cam_periph {int flags; int path; scalar_t__ softc; } ;
struct bio {scalar_t__ bio_cmd; TYPE_1__* bio_disk; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bio*,int *,int ) ;
 int FUNC_2 (int ,struct bio*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_4)
{
 struct cam_periph *VAR_5;
 struct nda_softc *VAR_6;

 VAR_5 = (struct cam_periph *)VAR_4->bio_disk->d_drv1;
 VAR_6 = (struct nda_softc *)VAR_5->softc;

 FUNC_3(VAR_5);

 FUNC_0(VAR_5->path, VAR_1, ("ndastrategy(%p)\n", VAR_4));




 if ((VAR_5->flags & VAR_2) != 0) {
  FUNC_4(VAR_5);
  FUNC_1(VAR_4, ((void*)0), VAR_3);
  return;
 }

 if (VAR_4->bio_cmd == VAR_0)
  VAR_6->deletes++;




 FUNC_2(VAR_6->cam_iosched, VAR_4);




 FUNC_5(VAR_5);
 FUNC_4(VAR_5);

 return;
}
