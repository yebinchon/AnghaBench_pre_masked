
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_fifo_errors; int tx_errors; int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; int name; } ;
struct br2684_vcc {int dummy; } ;
struct br2684_dev {int dummy; } ;
typedef int netdev_tx_t ;


 struct br2684_dev* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,struct net_device*,struct br2684_vcc*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 struct br2684_vcc* FUNC_3 (struct sk_buff*,struct br2684_dev*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2,
         struct net_device *VAR_3)
{
 struct br2684_dev *VAR_4 = FUNC_0(VAR_3);
 struct br2684_vcc *VAR_5;

 FUNC_4("br2684_start_xmit, skb_dst(skb)=%p\n", FUNC_7(VAR_2));
 FUNC_5(&VAR_1);
 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_4("no vcc attached to dev %s\n", VAR_3->name);
  VAR_3->stats.tx_errors++;
  VAR_3->stats.tx_carrier_errors++;

  FUNC_2(VAR_2);
  FUNC_6(&VAR_1);
  return VAR_0;
 }
 if (!FUNC_1(VAR_2, VAR_3, VAR_5)) {







  VAR_3->stats.tx_errors++;
  VAR_3->stats.tx_fifo_errors++;
 }
 FUNC_6(&VAR_1);
 return VAR_0;
}
