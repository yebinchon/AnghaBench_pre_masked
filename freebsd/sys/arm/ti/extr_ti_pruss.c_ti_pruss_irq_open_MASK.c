
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int idx; int cnt; } ;
struct TYPE_3__ {TYPE_2__ ctl; } ;
struct ti_pruss_irqsc {TYPE_1__ tstamps; } ;
struct thread {int dummy; } ;
struct ctl {int idx; int cnt; } ;
struct cdev {struct ti_pruss_irqsc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ctl*,int ) ;
 struct ctl* FUNC_1 (int,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct ctl* VAR_8;
 struct ti_pruss_irqsc *VAR_9;
 VAR_9 = VAR_4->si_drv1;

 VAR_8 = FUNC_1(sizeof(struct ctl), VAR_1, VAR_2);
 if (!VAR_8)
     return (VAR_0);

 VAR_8->cnt = VAR_9->tstamps.ctl.cnt;
 VAR_8->idx = VAR_9->tstamps.ctl.idx;

 return FUNC_0(VAR_8, VAR_3);
}
