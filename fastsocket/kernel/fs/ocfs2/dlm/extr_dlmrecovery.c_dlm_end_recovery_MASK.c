
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int event; } ;
struct dlm_ctxt {TYPE_1__ reco; int spinlock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dlm_ctxt *VAR_1)
{
 FUNC_1(&VAR_1->spinlock);
 FUNC_0(!(VAR_1->reco.state & VAR_0));
 VAR_1->reco.state &= ~VAR_0;
 FUNC_2(&VAR_1->spinlock);
 FUNC_3(&VAR_1->reco.event);
}
