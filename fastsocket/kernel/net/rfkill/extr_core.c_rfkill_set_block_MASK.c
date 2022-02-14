
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {TYPE_1__ power_state; } ;
struct TYPE_7__ {TYPE_2__ power; } ;
struct rfkill {int state; int lock; int data; TYPE_4__* ops; TYPE_3__ dev; } ;
struct TYPE_8__ {int (* set_block ) (int ,int) ;int (* query ) (struct rfkill*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rfkill*) ;
 int FUNC_1 (struct rfkill*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct rfkill*,int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct rfkill *VAR_4, bool VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_6(VAR_4->dev.power.power_state.event & VAR_0))
  return;






 if (VAR_4->ops->query)
  VAR_4->ops->query(VAR_4, VAR_4->data);

 FUNC_2(&VAR_4->lock, VAR_6);
 if (VAR_4->state & VAR_1)
  VAR_4->state |= VAR_2;
 else
  VAR_4->state &= ~VAR_2;

 if (VAR_5)
  VAR_4->state |= VAR_1;
 else
  VAR_4->state &= ~VAR_1;

 VAR_4->state |= VAR_3;
 FUNC_3(&VAR_4->lock, VAR_6);

 VAR_7 = VAR_4->ops->set_block(VAR_4->data, VAR_5);

 FUNC_2(&VAR_4->lock, VAR_6);
 if (VAR_7) {





  if (VAR_4->state & VAR_2)
   VAR_4->state |= VAR_1;
  else
   VAR_4->state &= ~VAR_1;
 }
 VAR_4->state &= ~VAR_3;
 VAR_4->state &= ~VAR_2;
 FUNC_3(&VAR_4->lock, VAR_6);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
}
