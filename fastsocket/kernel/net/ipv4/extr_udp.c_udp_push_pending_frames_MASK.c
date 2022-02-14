
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_sock {scalar_t__ pending; scalar_t__ len; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct flowi {int fl_ip_dport; int fl4_dst; } ;
struct TYPE_2__ {struct flowi fl; } ;
struct inet_sock {TYPE_1__ cork; } ;


 struct inet_sock* FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 struct udp_sock* FUNC_3 (struct sock*) ;

int FUNC_4(struct sock *VAR_0)
{
 struct udp_sock *VAR_1 = FUNC_3(VAR_0);
 struct inet_sock *VAR_2 = FUNC_0(VAR_0);
 struct flowi *VAR_3 = &VAR_2->cork.fl;
 struct sk_buff *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_0);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_2(VAR_4, VAR_3->fl4_dst, VAR_3->fl_ip_dport);

out:
 VAR_1->len = 0;
 VAR_1->pending = 0;
 return VAR_5;
}
