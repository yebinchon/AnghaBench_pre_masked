
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct enc_softc {int enc_flags; int open_count; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct cam_periph *VAR_7;
 struct enc_softc *VAR_8;
 int VAR_9 = 0;

 VAR_7 = (struct cam_periph *)VAR_3->si_drv1;
 if (FUNC_0(VAR_7) != 0)
  return (VAR_2);

 FUNC_1(VAR_7);

 VAR_8 = (struct enc_softc *)VAR_7->softc;

 if ((VAR_8->enc_flags & VAR_0) == 0) {
  VAR_9 = VAR_2;
  goto out;
 }
 if (VAR_8->enc_flags & VAR_1) {
  VAR_9 = VAR_2;
  goto out;
 }
out:
 if (VAR_9 != 0)
  FUNC_2(VAR_7);
 else
  VAR_8->open_count++;

 FUNC_3(VAR_7);

 return (VAR_9);
}
