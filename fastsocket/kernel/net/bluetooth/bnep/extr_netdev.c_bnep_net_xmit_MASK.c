
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; int sk_sleep; } ;
struct sk_buff {int dummy; } ;
struct net_device {int trans_start; } ;
struct bnep_session {TYPE_1__* sock; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct bnep_session*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct bnep_session*) ;
 int VAR_2 ;
 int FUNC_3 (struct sk_buff*) ;
 struct bnep_session* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_3,
     struct net_device *VAR_4)
{
 struct bnep_session *VAR_5 = FUNC_4(VAR_4);
 struct sock *VAR_6 = VAR_5->sock->sk;

 FUNC_0("skb %p, dev %p", VAR_3, VAR_4);
 VAR_4->trans_start = VAR_2;
 FUNC_7(&VAR_6->sk_write_queue, VAR_3);
 FUNC_8(VAR_6->sk_sleep);

 if (FUNC_6(&VAR_6->sk_write_queue) >= VAR_0) {
  FUNC_0("tx queue is full");



  FUNC_5(VAR_4);
 }

 return VAR_1;
}
