
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_packets; } ;
struct tsap_cb {int send_credit; int rx_queue; int lock; int remote_credit; TYPE_1__ stats; } ;
struct sk_buff {int* data; int len; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tsap_cb*) ;
 int FUNC_2 (struct tsap_cb*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, void *VAR_1,
     struct sk_buff *VAR_2)
{
 struct tsap_cb *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_3 = (struct tsap_cb *) VAR_0;

 VAR_5 = VAR_2->data[0] & 0x7f;

 VAR_3->stats.rx_packets++;






 FUNC_4(&VAR_3->lock, VAR_4);
 VAR_3->send_credit += VAR_5;
 if (VAR_2->len > 1)
  VAR_3->remote_credit--;
 FUNC_5(&VAR_3->lock, VAR_4);





 if (VAR_2->len > 1) {




  FUNC_3(&VAR_3->rx_queue, VAR_2);
 } else {

  FUNC_0(VAR_2);
 }
 FUNC_1(VAR_3);
 if (VAR_3->send_credit == VAR_5) {

  FUNC_2(VAR_3);



 }

 return 0;
}
