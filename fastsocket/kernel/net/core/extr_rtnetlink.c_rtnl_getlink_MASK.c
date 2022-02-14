
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nlattr**) ;
 int FUNC_5 (struct net_device*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct sk_buff*) ;
 struct ifinfomsg* FUNC_7 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int FUNC_10 (struct sk_buff*,struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_8, struct nlmsghdr* VAR_9, void *VAR_10)
{
 struct net *VAR_11 = FUNC_12(VAR_8->sk);
 struct ifinfomsg *VAR_12;
 struct nlattr *VAR_13[VAR_5+1];
 struct net_device *VAR_14 = ((void*)0);
 struct sk_buff *VAR_15;
 int VAR_16;
 u32 VAR_17 = 0;

 VAR_16 = FUNC_9(VAR_9, sizeof(*VAR_12), VAR_13, VAR_5, VAR_7);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_17 = FUNC_4(VAR_13);

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12->ifi_index > 0) {
  VAR_14 = FUNC_2(VAR_11, VAR_12->ifi_index);
  if (VAR_14 == ((void*)0))
   return -VAR_3;
 } else
  return -VAR_0;

 VAR_15 = FUNC_8(FUNC_5(VAR_14, VAR_17), VAR_4);
 if (VAR_15 == ((void*)0)) {
  VAR_16 = -VAR_2;
  goto errout;
 }

 VAR_16 = FUNC_10(VAR_15, VAR_14, VAR_6, FUNC_0(VAR_8).pid,
          VAR_9->nlmsg_seq, 0, 0, VAR_17);
 if (VAR_16 < 0) {

  FUNC_1(VAR_16 == -VAR_1);
  FUNC_6(VAR_15);
  goto errout;
 }
 VAR_16 = FUNC_11(VAR_15, VAR_11, FUNC_0(VAR_8).pid);
errout:
 FUNC_3(VAR_14);

 return VAR_16;
}
