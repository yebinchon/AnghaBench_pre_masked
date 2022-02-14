
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct pass_softc {int flags; int open_count; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct cam_periph *VAR_11;
 struct pass_softc *VAR_12;
 int VAR_13;

 VAR_11 = (struct cam_periph *)VAR_7->si_drv1;
 if (FUNC_0(VAR_11) != 0)
  return (VAR_1);

 FUNC_1(VAR_11);

 VAR_12 = (struct pass_softc *)VAR_11->softc;

 if (VAR_12->flags & VAR_6) {
  FUNC_2(VAR_11);
  FUNC_3(VAR_11);
  return(VAR_1);
 }




 VAR_13 = FUNC_4(VAR_10->td_ucred, 1);
 if (VAR_13) {
  FUNC_2(VAR_11);
  FUNC_3(VAR_11);
  return(VAR_13);
 }




 if (((VAR_8 & VAR_4) == 0) || ((VAR_8 & VAR_3) == 0)) {
  FUNC_2(VAR_11);
  FUNC_3(VAR_11);
  return(VAR_2);
 }




 if ((VAR_8 & VAR_5) != 0) {
  FUNC_5(VAR_11->path, "can't do nonblocking access\n");
  FUNC_2(VAR_11);
  FUNC_3(VAR_11);
  return(VAR_0);
 }

 VAR_12->open_count++;

 FUNC_3(VAR_11);

 return (VAR_13);
}
