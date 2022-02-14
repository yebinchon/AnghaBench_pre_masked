
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tipc_genlmsghdr {int cmd; int dest; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct genl_info {struct tipc_genlmsghdr* userhdr; struct nlmsghdr* nlhdr; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct nlmsghdr*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct sk_buff*,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct nlmsghdr*,struct nlmsghdr*,int) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_9 (int ,int,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct sk_buff *VAR_7;
 struct nlmsghdr *VAR_8;
 struct nlmsghdr *VAR_9 = VAR_6->nlhdr;
 struct tipc_genlmsghdr *VAR_10 = VAR_6->userhdr;
 int VAR_11 = FUNC_3(VAR_1 + VAR_3);
 u16 VAR_12;

 if ((VAR_10->cmd & 0xC000) && (!FUNC_4(VAR_0)))
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_10->cmd;

 VAR_7 = FUNC_9(VAR_10->dest, VAR_12,
   FUNC_1(VAR_9) + VAR_1 + VAR_3,
   FUNC_2(VAR_9, VAR_1 + VAR_3),
   VAR_11);

 if (VAR_7) {
  FUNC_8(VAR_7, VAR_11);
  VAR_8 = FUNC_7(VAR_7);
  FUNC_6(VAR_8, VAR_9, VAR_11);
  VAR_8->nlmsg_len = VAR_7->len;
  FUNC_5(&VAR_4, VAR_7, FUNC_0(VAR_5).pid);
 }

 return 0;
}
