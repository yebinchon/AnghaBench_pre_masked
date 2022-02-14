
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hwstate; int swstate; int queue; int lock; } ;
typedef TYPE_1__ vwsnd_port_t ;
typedef scalar_t__ vwsnd_port_hwstate_t ;
struct TYPE_8__ {TYPE_1__ wport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct TYPE_9__ {int state; } ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 TYPE_4__* VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(vwsnd_dev_t *VAR_5)
{
 vwsnd_port_t *VAR_6 = &VAR_5->wport;
 FUNC_3(VAR_4, VAR_3);
 unsigned long VAR_7;
 vwsnd_port_hwstate_t VAR_8;

 FUNC_0("(devc=0x%p)\n", VAR_5);
 FUNC_4(&VAR_6->queue, &VAR_4);
 while (1) {
  FUNC_7(VAR_2);
  FUNC_8(&VAR_6->lock, VAR_7);
  {
   VAR_8 = VAR_6->hwstate;
  }
  FUNC_9(&VAR_6->lock, VAR_7);
  if (VAR_8 == VAR_0)
   break;
  FUNC_6();
 }
 VAR_3->state = VAR_1;
 FUNC_5(&VAR_6->queue, &VAR_4);
 FUNC_1("swstate = %d, hwstate = %d\n", VAR_6->swstate, VAR_6->hwstate);
 FUNC_2();
}
