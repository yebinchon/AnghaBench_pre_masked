
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_can {int can_ifindex; int can_family; } ;
struct sock {int dummy; } ;
struct sk_buff {TYPE_1__* dev; scalar_t__ cb; struct sock* sk; } ;
struct raw_sock {int recv_own_msgs; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sockaddr_can*,int ,int) ;
 struct raw_sock* FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2, void *VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_3;
 struct raw_sock *VAR_5 = FUNC_3(VAR_4);
 struct sockaddr_can *VAR_6;


 if (!VAR_5->recv_own_msgs && VAR_2->sk == VAR_4)
  return;


 VAR_2 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_2)
  return;
 FUNC_0(sizeof(VAR_2->cb) < sizeof(struct sockaddr_can));
 VAR_6 = (struct sockaddr_can *)VAR_2->cb;
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->can_family = VAR_0;
 VAR_6->can_ifindex = VAR_2->dev->ifindex;

 if (FUNC_5(VAR_4, VAR_2) < 0)
  FUNC_1(VAR_2);
}
