
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pass_softc {int read_select; int done_queue; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct cam_periph *VAR_7;
 struct pass_softc *VAR_8;
 int VAR_9;

 VAR_7 = (struct cam_periph *)VAR_4->si_drv1;
 VAR_8 = (struct pass_softc *)VAR_7->softc;

 VAR_9 = VAR_5 & (VAR_1 | VAR_3);
 if ((VAR_5 & (VAR_0 | VAR_2)) != 0) {
  FUNC_1(VAR_7);

  if (!FUNC_0(&VAR_8->done_queue)) {
   VAR_9 |= VAR_5 & (VAR_0 | VAR_2);
  }
  FUNC_2(VAR_7);
  if (VAR_9 == 0)
   FUNC_3(VAR_6, &VAR_8->read_select);
 }

 return (VAR_9);
}
