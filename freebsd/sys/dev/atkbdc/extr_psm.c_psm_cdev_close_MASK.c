
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct psm_softc {int state; int unit; int * async; } ;
struct cdev {struct psm_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **) ;
 int VAR_5 ;
 int FUNC_3 (struct psm_softc*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_6, int VAR_7, int VAR_8, struct thread *VAR_9)
{
 struct psm_softc *VAR_10;
 int VAR_11 = 0;


 VAR_10 = VAR_6->si_drv1;
 if ((VAR_10 == ((void*)0)) || (VAR_10->state & VAR_4) == 0) {

  return (VAR_0);
 }





  VAR_11 = FUNC_3(VAR_10);

 if (VAR_11 == 0) {
  VAR_10->state &= ~VAR_3;

  if (VAR_10->async != ((void*)0)) {
   FUNC_2(&VAR_10->async);
   VAR_10->async = ((void*)0);
  }
  FUNC_1(FUNC_0(VAR_5, VAR_10->unit));
 }

 return (VAR_11);
}
