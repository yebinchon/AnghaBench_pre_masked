
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cyapa_softc {int isselect; int selinfo; int rfifo; scalar_t__ data_signal; } ;
struct cdev {struct cyapa_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (struct cyapa_softc*) ;
 int FUNC_2 (struct cyapa_softc*,int *) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct cyapa_softc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->si_drv1;
 VAR_6 = 0;

 FUNC_0(VAR_5);
 if (VAR_3 & (VAR_0 | VAR_1)) {
  if (VAR_5->data_signal || !FUNC_2(VAR_5, &VAR_5->rfifo))
   VAR_6 = VAR_3 & (VAR_0 | VAR_1);
  else {
   VAR_5->isselect = 1;
   FUNC_3(VAR_4, &VAR_5->selinfo);
  }
 }
 FUNC_1(VAR_5);

 return (VAR_6);
}
