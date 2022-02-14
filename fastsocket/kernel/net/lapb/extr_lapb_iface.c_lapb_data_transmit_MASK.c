
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* data_transmit ) (int ,struct sk_buff*) ;} ;
struct lapb_cb {int dev; TYPE_1__ callbacks; } ;


 int FUNC_0 (int ,struct sk_buff*) ;

int FUNC_1(struct lapb_cb *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->callbacks.data_transmit) {
  VAR_0->callbacks.data_transmit(VAR_0->dev, VAR_1);
  VAR_2 = 1;
 }

 return VAR_2;
}
