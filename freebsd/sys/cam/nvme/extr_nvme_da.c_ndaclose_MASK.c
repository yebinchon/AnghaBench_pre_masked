
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ccb {int nvmeio; } ;
struct nda_softc {int flags; scalar_t__ refcount; scalar_t__ outstanding_cmds; TYPE_1__* disk; } ;
struct disk {scalar_t__ d_drv1; } ;
struct cam_periph {int flags; int path; scalar_t__ softc; } ;
struct TYPE_2__ {int d_devstat; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 scalar_t__ FUNC_3 (struct cam_periph*,int ) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (union ccb*,int ,int ,int ,int ) ;
 int FUNC_7 (struct cam_periph*,scalar_t__*,int ,char*,int) ;
 int FUNC_8 (struct cam_periph*) ;
 int FUNC_9 (struct cam_periph*) ;
 int FUNC_10 (struct nda_softc*,int *) ;
 int VAR_7 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (union ccb*) ;

__attribute__((used)) static int
FUNC_13(struct disk *VAR_8)
{
 struct cam_periph *VAR_9;
 struct nda_softc *VAR_10;
 union ccb *VAR_11;
 int VAR_12;

 VAR_9 = (struct cam_periph *)VAR_8->d_drv1;
 VAR_10 = (struct nda_softc *)VAR_9->softc;
 FUNC_4(VAR_9);

 FUNC_0(VAR_9->path, VAR_1 | VAR_0,
     ("ndaclose\n"));

 if ((VAR_10->flags & VAR_4) != 0 &&
     (VAR_9->flags & VAR_2) == 0 &&
     FUNC_3(VAR_9, VAR_6) == 0) {

  VAR_11 = FUNC_2(VAR_9, VAR_3);
  FUNC_10(VAR_10, &VAR_11->nvmeio);
  VAR_12 = FUNC_6(VAR_11, VAR_7, 0,
                     0, VAR_10->disk->d_devstat);

  if (VAR_12 != 0)
   FUNC_11(VAR_9->path, "Synchronize cache failed\n");
  else
   VAR_10->flags &= ~VAR_4;
  FUNC_12(VAR_11);
  FUNC_8(VAR_9);
 }

 VAR_10->flags &= ~VAR_5;

 while (VAR_10->refcount != 0)
  FUNC_7(VAR_9, &VAR_10->refcount, VAR_6, "ndaclose", 1);
 FUNC_1(VAR_10->outstanding_cmds == 0,
     ("nda %d outstanding commands", VAR_10->outstanding_cmds));
 FUNC_9(VAR_9);
 FUNC_5(VAR_9);
 return (0);
}
