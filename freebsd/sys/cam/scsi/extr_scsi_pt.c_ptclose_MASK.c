
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pt_softc {int flags; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct cam_periph *VAR_5;
 struct pt_softc *VAR_6;

 VAR_5 = (struct cam_periph *)VAR_1->si_drv1;
 VAR_6 = (struct pt_softc *)VAR_5->softc;

 FUNC_0(VAR_5);

 VAR_6->flags &= ~VAR_0;
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 return (0);
}
