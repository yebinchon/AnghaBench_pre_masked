
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sched; } ;
struct TYPE_7__ {scalar_t__ sched; } ;
struct TYPE_6__ {TYPE_1__ expires; TYPE_3__ incr; } ;
struct TYPE_8__ {TYPE_2__ cpu; } ;
struct k_itimer {int it_requeue_pending; TYPE_4__ it; int it_process; int * sigq; } ;


 int FUNC_0 (struct k_itimer*) ;
 scalar_t__ FUNC_1 (struct k_itimer*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct k_itimer *VAR_0)
{
 if (FUNC_2(VAR_0->sigq == ((void*)0))) {




  FUNC_3(VAR_0->it_process);
  VAR_0->it.cpu.expires.sched = 0;
 } else if (VAR_0->it.cpu.incr.sched == 0) {



  FUNC_1(VAR_0, 0);
  VAR_0->it.cpu.expires.sched = 0;
 } else if (FUNC_1(VAR_0, ++VAR_0->it_requeue_pending)) {






  FUNC_0(VAR_0);
 }
}
