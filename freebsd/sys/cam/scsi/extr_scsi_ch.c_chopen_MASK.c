
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ch_softc {int flags; int open_count; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*,int) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;
 int FUNC_6 (struct cam_periph*) ;
 int FUNC_7 (struct cam_periph*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct cam_periph *VAR_8;
 struct ch_softc *VAR_9;
 int VAR_10;

 VAR_8 = (struct cam_periph *)VAR_4->si_drv1;
 if (FUNC_0(VAR_8) != 0)
  return (VAR_1);

 VAR_9 = (struct ch_softc *)VAR_8->softc;

 FUNC_2(VAR_8);

 if (VAR_9->flags & VAR_0) {
  FUNC_4(VAR_8);
  FUNC_6(VAR_8);
  return(VAR_1);
 }

 if ((VAR_10 = FUNC_1(VAR_8, VAR_3 | VAR_2)) != 0) {
  FUNC_6(VAR_8);
  FUNC_3(VAR_8);
  return (VAR_10);
 }




 if ((VAR_10 = FUNC_7(VAR_8)) != 0) {
  FUNC_5(VAR_8);
  FUNC_4(VAR_8);
  FUNC_6(VAR_8);
  return(VAR_10);
 }

 FUNC_5(VAR_8);

 VAR_9->open_count++;

 FUNC_6(VAR_8);

 return(VAR_10);
}
