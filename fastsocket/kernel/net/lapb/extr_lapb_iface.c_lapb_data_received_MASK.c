
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct lapb_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lapb_cb*,struct sk_buff*) ;
 struct lapb_cb* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lapb_cb*) ;

int FUNC_3(struct net_device *VAR_2, struct sk_buff *VAR_3)
{
 struct lapb_cb *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_0;

 if (VAR_4) {
  FUNC_0(VAR_4, VAR_3);
  FUNC_2(VAR_4);
  VAR_5 = VAR_1;
 }

 return VAR_5;
}
