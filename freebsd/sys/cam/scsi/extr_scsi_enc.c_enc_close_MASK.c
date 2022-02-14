
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mtx {int dummy; } ;
struct enc_softc {int open_count; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {struct enc_softc* softc; } ;


 struct mtx* FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct cam_periph *VAR_4;
 struct enc_softc *VAR_5;
 struct mtx *VAR_6;

 VAR_4 = (struct cam_periph *)VAR_0->si_drv1;
 VAR_6 = FUNC_0(VAR_4);
 FUNC_2(VAR_6);

 VAR_5 = VAR_4->softc;
 VAR_5->open_count--;

 FUNC_1(VAR_4);
 FUNC_3(VAR_6);

 return (0);
}
