
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int instance; } ;
struct irlap_cb {TYPE_1__ notify; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

void FUNC_2(struct irlap_cb *VAR_2, struct sk_buff *VAR_3,
      int VAR_4)
{

 FUNC_1(VAR_3, VAR_0+VAR_1);

 FUNC_0(VAR_2->notify.instance, VAR_3, VAR_4);
}
