
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_4__ {int nlsk; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_3__ {int type; } ;
struct km_event {TYPE_1__ data; int seq; int pid; struct net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_3 (int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct km_event *VAR_4)
{
 struct net *VAR_5 = VAR_4->net;
 struct nlmsghdr *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_4(FUNC_6(), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_7, VAR_4->pid, VAR_4->seq, VAR_3, 0, 0);
 if (VAR_6 == ((void*)0))
  goto nlmsg_failure;
 if (FUNC_0(VAR_4->data.type, VAR_7) < 0)
  goto nlmsg_failure;

 FUNC_2(VAR_7, VAR_6);

 return FUNC_3(VAR_5->xfrm.nlsk, VAR_7, 0, VAR_2, VAR_1);

nlmsg_failure:
 FUNC_1(VAR_7);
 return -1;
}
