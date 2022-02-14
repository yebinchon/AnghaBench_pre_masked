
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pt_softc {int flags; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (struct cdev*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct cam_periph *VAR_9;
 struct pt_softc *VAR_10;
 int VAR_11 = 0;

 VAR_9 = (struct cam_periph *)VAR_5->si_drv1;
 if (FUNC_1(VAR_9) != 0)
  return (VAR_2);

 VAR_10 = (struct pt_softc *)VAR_9->softc;

 FUNC_2(VAR_9);
 if (VAR_10->flags & VAR_3) {
  FUNC_4(VAR_9);
  FUNC_5(VAR_9);
  return(VAR_2);
 }

 if ((VAR_10->flags & VAR_4) == 0)
  VAR_10->flags |= VAR_4;
 else {
  VAR_11 = VAR_1;
  FUNC_3(VAR_9);
 }

 FUNC_0(VAR_9->path, VAR_0,
     ("ptopen: dev=%s\n", FUNC_6(VAR_5)));

 FUNC_5(VAR_9);
 return (VAR_11);
}
