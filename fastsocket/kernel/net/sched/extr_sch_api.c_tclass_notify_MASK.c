
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int *,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct Qdisc*,unsigned long,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_7, struct nlmsghdr *VAR_8,
     struct Qdisc *VAR_9, unsigned long VAR_10, int VAR_11)
{
 struct sk_buff *VAR_12;
 u32 VAR_13 = VAR_7 ? FUNC_0(VAR_7).pid : 0;

 VAR_12 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 if (FUNC_4(VAR_12, VAR_9, VAR_10, VAR_13, VAR_8->nlmsg_seq, 0, VAR_11) < 0) {
  FUNC_2(VAR_12);
  return -VAR_0;
 }

 return FUNC_3(VAR_12, &VAR_6, VAR_13, VAR_5, VAR_8->nlmsg_flags&VAR_4);
}
