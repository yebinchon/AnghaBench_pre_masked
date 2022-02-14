
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int num; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_2("ping_queue_rcv_skb(sk=%p,sk->num=%d,skb=%p)\n",
  FUNC_0(VAR_0), FUNC_0(VAR_0)->num, VAR_1);
 if (FUNC_3(VAR_0, VAR_1) < 0) {
  FUNC_1(VAR_1);
  FUNC_2("ping_queue_rcv_skb -> failed\n");
  return -1;
 }
 return 0;
}
