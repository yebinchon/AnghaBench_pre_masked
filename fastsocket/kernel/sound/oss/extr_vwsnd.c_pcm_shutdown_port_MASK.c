
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hwstate; scalar_t__ byte_count; int * swbuf; int chan; int queue; int lock; int swstate; } ;
typedef TYPE_1__ vwsnd_port_t ;
typedef scalar_t__ vwsnd_port_hwstate_t ;
struct TYPE_8__ {int lith; TYPE_1__ rport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct TYPE_9__ {int state; } ;


 int FUNC_0 (int ,TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 TYPE_5__* VAR_4 ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_12(vwsnd_dev_t *VAR_6,
         vwsnd_port_t *VAR_7,
         unsigned int VAR_8)
{
 unsigned long VAR_9;
 vwsnd_port_hwstate_t VAR_10;
 FUNC_0(VAR_5, VAR_4);

 VAR_7->swstate = VAR_1;
 FUNC_3(&VAR_7->queue, &VAR_5);
 while (1) {
  FUNC_8(VAR_3);
  FUNC_9(&VAR_7->lock, VAR_9);
  {
   VAR_10 = VAR_7->hwstate;
  }
  FUNC_10(&VAR_7->lock, VAR_9);
  if (VAR_10 == VAR_0)
   break;
  FUNC_7();
 }
 VAR_4->state = VAR_2;
 FUNC_6(&VAR_7->queue, &VAR_5);
 FUNC_4(&VAR_6->lith, VAR_8);
 if (VAR_7 == &VAR_6->rport)
  FUNC_1(&VAR_6->lith);
 else
  FUNC_2(&VAR_6->lith);
 FUNC_5(&VAR_7->chan);
 FUNC_11(VAR_7->swbuf);
 VAR_7->swbuf = ((void*)0);
 VAR_7->byte_count = 0;
}
