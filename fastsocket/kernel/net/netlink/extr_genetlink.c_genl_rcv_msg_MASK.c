
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; int nlmsg_flags; int nlmsg_seq; int nlmsg_type; } ;
struct netlink_dump_control {int done; int * dump; } ;
struct net {int genl_sock; } ;
struct genlmsghdr {int cmd; } ;
struct genl_ops {int flags; int (* doit ) (struct sk_buff*,struct genl_info*) ;int policy; int done; int * dumpit; } ;
struct genl_info {scalar_t__ attrs; void* userhdr; void* genlhdr; struct nlmsghdr* nlhdr; int snd_pid; int snd_seq; } ;
struct genl_family {int hdrsize; scalar_t__ attrbuf; int maxattr; int netnsok; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 struct genl_family* FUNC_1 (int ) ;
 struct genl_ops* FUNC_2 (int ,struct genl_family*) ;
 int FUNC_3 (struct genl_info*,struct net*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (struct net*,int *) ;
 int FUNC_7 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 void* FUNC_8 (struct nlmsghdr*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct nlmsghdr*,int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 struct net* FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*,struct genl_info*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10)
{
 struct genl_ops *VAR_11;
 struct genl_family *VAR_12;
 struct net *VAR_13 = FUNC_12(VAR_9->sk);
 struct genl_info VAR_14;
 struct genlmsghdr *VAR_15 = FUNC_8(VAR_10);
 int VAR_16, VAR_17;

 VAR_12 = FUNC_1(VAR_10->nlmsg_type);
 if (VAR_12 == ((void*)0))
  return -VAR_2;


 if (!VAR_12->netnsok && !FUNC_6(VAR_13, &VAR_8))
  return -VAR_2;

 VAR_16 = VAR_6 + VAR_12->hdrsize;
 if (VAR_10->nlmsg_len < FUNC_9(VAR_16))
  return -VAR_1;

 VAR_11 = FUNC_2(VAR_15->cmd, VAR_12);
 if (VAR_11 == ((void*)0))
  return -VAR_3;

 if ((VAR_11->flags & VAR_5) &&
     FUNC_11(VAR_9, VAR_0))
  return -VAR_4;

 if (VAR_10->nlmsg_flags & VAR_7) {
  if (VAR_11->dumpit == ((void*)0))
   return -VAR_3;

  FUNC_5();
  {
   struct netlink_dump_control VAR_18 = {
    .dump = VAR_11->dumpit,
    .done = VAR_11->done,
   };
   VAR_17 = FUNC_7(VAR_13->genl_sock, VAR_9, VAR_10, &VAR_18);
  }
  FUNC_4();
  return VAR_17;
 }

 if (VAR_11->doit == ((void*)0))
  return -VAR_3;

 if (VAR_12->attrbuf) {
  VAR_17 = FUNC_10(VAR_10, VAR_16, VAR_12->attrbuf, VAR_12->maxattr,
      VAR_11->policy);
  if (VAR_17 < 0)
   return VAR_17;
 }

 VAR_14.snd_seq = VAR_10->nlmsg_seq;
 VAR_14.snd_pid = FUNC_0(VAR_9).pid;
 VAR_14.nlhdr = VAR_10;
 VAR_14.genlhdr = FUNC_8(VAR_10);
 VAR_14.userhdr = FUNC_8(VAR_10) + VAR_6;
 VAR_14.attrs = VAR_12->attrbuf;
 FUNC_3(&VAR_14, VAR_13);

 return VAR_11->doit(VAR_9, &VAR_14);
}
