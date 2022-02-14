
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct ti_pruss_irqsc {TYPE_1__ sc_selinfo; } ;
struct knote {int kn_filter; int * kn_fop; struct ti_pruss_irqsc* kn_hook; } ;
struct cdev {struct ti_pruss_irqsc* si_drv1; } ;


 int VAR_0 ;

 int FUNC_0 (int *,struct knote*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_2, struct knote *VAR_3)
{
 struct ti_pruss_irqsc *VAR_4 = VAR_2->si_drv1;

 switch (VAR_3->kn_filter) {
 case 128:
  VAR_3->kn_hook = VAR_4;
  VAR_3->kn_fop = &VAR_1;
  FUNC_0(&VAR_4->sc_selinfo.si_note, VAR_3, 0);
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
