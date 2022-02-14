
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv64; } ;
struct sk_buff {scalar_t__ mark; int protocol; int pkt_type; TYPE_1__ tstamp; scalar_t__ iif; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct net_device *VAR_2, struct sk_buff *VAR_3)
{
 FUNC_7(VAR_3);
 FUNC_4(VAR_3);

 if (FUNC_8(!FUNC_1(VAR_2, VAR_3))) {
  FUNC_2(VAR_3);
  return VAR_0;
 }
 VAR_3->iif = 0;
 FUNC_6(VAR_3);
 VAR_3->tstamp.tv64 = 0;
 VAR_3->pkt_type = VAR_1;
 VAR_3->protocol = FUNC_0(VAR_3, VAR_2);
 VAR_3->mark = 0;
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 return FUNC_3(VAR_3);
}
