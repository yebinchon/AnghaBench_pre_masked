
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct sg_softc {int flags; int open_count; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct cam_periph *VAR_6;
 struct sg_softc *VAR_7;
 int VAR_8 = 0;

 VAR_6 = (struct cam_periph *)VAR_2->si_drv1;
 if (FUNC_0(VAR_6) != 0)
  return (VAR_0);




 VAR_8 = FUNC_5(VAR_5->td_ucred, 1);
 if (VAR_8) {
  FUNC_2(VAR_6);
  return (VAR_8);
 }

 FUNC_1(VAR_6);

 VAR_7 = (struct sg_softc *)VAR_6->softc;
 if (VAR_7->flags & VAR_1) {
  FUNC_3(VAR_6);
  FUNC_4(VAR_6);
  return (VAR_0);
 }

 VAR_7->open_count++;

 FUNC_4(VAR_6);

 return (VAR_8);
}
