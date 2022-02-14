
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cnt; } ;
struct TYPE_4__ {TYPE_1__ ctl; } ;
struct ti_pruss_irqsc {int sc_selinfo; TYPE_2__ tstamps; } ;
struct thread {int dummy; } ;
struct ctl {scalar_t__ cnt; } ;
struct cdev {struct ti_pruss_irqsc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct ctl* VAR_5;
 struct ti_pruss_irqsc *VAR_6;
 VAR_6 = VAR_2->si_drv1;

 FUNC_0((void**)&VAR_5);

 if (VAR_3 & (VAR_0 | VAR_1)) {
  if (VAR_6->tstamps.ctl.cnt != VAR_5->cnt)
   return VAR_3 & (VAR_0 | VAR_1);
  else
   FUNC_1(VAR_4, &VAR_6->sc_selinfo);
 }
 return 0;
}
