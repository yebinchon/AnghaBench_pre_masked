
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct net_device {int trans_start; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct irlan_cb {scalar_t__ max_header_size; TYPE_1__ stats; int tsap_data; scalar_t__ use_udata; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int VAR_1 ;
 struct irlan_cb* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_2,
     struct net_device *VAR_3)
{
 struct irlan_cb *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;


 if ((FUNC_4(VAR_2) < VAR_4->max_header_size) || (FUNC_6(VAR_2))) {
  struct sk_buff *VAR_6 =
   FUNC_5(VAR_2, VAR_4->max_header_size);


  FUNC_0(VAR_2);


  if (VAR_6 == ((void*)0))
   return VAR_0;


  VAR_2 = VAR_6;
 }

 VAR_3->trans_start = VAR_1;


 if (VAR_4->use_udata)
  VAR_5 = FUNC_2(VAR_4->tsap_data, VAR_2);
 else
  VAR_5 = FUNC_1(VAR_4->tsap_data, VAR_2);

 if (VAR_5 < 0) {
  VAR_4->stats.tx_dropped++;
 } else {
  VAR_4->stats.tx_packets++;
  VAR_4->stats.tx_bytes += VAR_2->len;
 }

 return VAR_0;
}
