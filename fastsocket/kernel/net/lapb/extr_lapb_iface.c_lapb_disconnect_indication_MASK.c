
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* disconnect_indication ) (int ,int) ;} ;
struct lapb_cb {int dev; TYPE_1__ callbacks; } ;


 int FUNC_0 (int ,int) ;

void FUNC_1(struct lapb_cb *VAR_0, int VAR_1)
{
 if (VAR_0->callbacks.disconnect_indication)
  VAR_0->callbacks.disconnect_indication(VAR_0->dev, VAR_1);
}
