
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct disk {scalar_t__ d_drv1; } ;
struct cd_softc {int flags; TYPE_2__* disk; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct TYPE_4__ {TYPE_1__* d_devstat; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (struct cam_periph*) ;
 int FUNC_7 (struct cam_periph*,int ) ;

__attribute__((used)) static int
FUNC_8(struct disk *VAR_8)
{
 struct cam_periph *VAR_9;
 struct cd_softc *VAR_10;

 VAR_9 = (struct cam_periph *)VAR_8->d_drv1;
 VAR_10 = (struct cd_softc *)VAR_9->softc;

 FUNC_2(VAR_9);
 if (FUNC_1(VAR_9, VAR_6) != 0) {
  FUNC_6(VAR_9);
  FUNC_3(VAR_9);
  return (0);
 }

 FUNC_0(VAR_9->path, VAR_1 | VAR_0,
     ("cdclose\n"));

 if ((VAR_10->flags & VAR_2) != 0)
  FUNC_7(VAR_9, VAR_7);





 VAR_10->disk->d_devstat->flags |= VAR_5;




 VAR_10->flags &= ~(VAR_3|VAR_4);

 FUNC_5(VAR_9);
 FUNC_4(VAR_9);
 FUNC_6(VAR_9);

 return (0);
}
