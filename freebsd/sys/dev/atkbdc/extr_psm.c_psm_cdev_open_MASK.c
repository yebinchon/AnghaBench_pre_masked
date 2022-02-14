
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct psm_softc {int state; int unit; } ;
struct cdev {struct psm_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct psm_softc*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct psm_softc *VAR_11;
 int VAR_12 = 0;


 VAR_11 = VAR_7->si_drv1;
 if ((VAR_11 == ((void*)0)) || (VAR_11->state & VAR_5) == 0) {

  return (VAR_1);
 }


 if (VAR_11->state & VAR_4)
  return (VAR_0);

 FUNC_1(FUNC_0(VAR_6, VAR_11->unit));





  VAR_12 = FUNC_3(VAR_11);

 if (VAR_12 == 0)
  VAR_11->state |= VAR_4;
 else
  FUNC_2(FUNC_0(VAR_6, VAR_11->unit));

 return (VAR_12);
}
