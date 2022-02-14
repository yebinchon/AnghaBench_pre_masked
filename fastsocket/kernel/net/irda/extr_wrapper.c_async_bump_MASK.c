
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; struct net_device* dev; int data; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ truesize; int head; int data; struct sk_buff* skb; } ;
typedef TYPE_1__ iobuff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_7(struct net_device *VAR_2,
    struct net_device_stats *VAR_3,
    iobuff_t *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7;







 VAR_7 = ((VAR_4->skb == ((void*)0)) ||
    (VAR_4->len < VAR_1));


 VAR_5 = FUNC_0(VAR_7 ? VAR_4->len + 1 : VAR_4->truesize);
 if (!VAR_5) {
  VAR_3->rx_dropped++;



  return;
 }




 FUNC_5(VAR_5, 1);

 if(VAR_7) {

  FUNC_3(VAR_5, VAR_4->data,
     VAR_4->len - 2);

  VAR_6 = VAR_5;
 } else {

  VAR_6 = VAR_4->skb;

  VAR_4->skb = VAR_5;
  VAR_4->head = VAR_5->data;

 }


 FUNC_4(VAR_6, VAR_4->len - 2);


 VAR_6->dev = VAR_2;
 FUNC_6(VAR_6);
 VAR_6->protocol = FUNC_1(VAR_0);

 FUNC_2(VAR_6);

 VAR_3->rx_packets++;
 VAR_3->rx_bytes += VAR_4->len;


 VAR_4->data = VAR_4->head;
 VAR_4->len = 0;
}
