
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct pt_softc {int io_timeout; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (struct cam_periph*,int,scalar_t__,int ) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct cam_periph *VAR_7;
 struct pt_softc *VAR_8;
 int VAR_9 = 0;

 VAR_7 = (struct cam_periph *)VAR_2->si_drv1;
 VAR_8 = (struct pt_softc *)VAR_7->softc;

 FUNC_1(VAR_7);

 switch(VAR_3) {
 case 129:
  if (VAR_8->io_timeout >= 1000)
   *(int *)VAR_4 = VAR_8->io_timeout / 1000;
  else
   *(int *)VAR_4 = 0;
  break;
 case 128:
  if (*(int *)VAR_4 < 1) {
   VAR_9 = VAR_0;
   break;
  }

  VAR_8->io_timeout = *(int *)VAR_4 * 1000;

  break;
 default:
  VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_4, VAR_1);
  break;
 }

 FUNC_2(VAR_7);

 return(VAR_9);
}
