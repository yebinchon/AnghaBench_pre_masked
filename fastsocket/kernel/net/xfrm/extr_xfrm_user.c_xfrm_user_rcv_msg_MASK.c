
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_link {int (* doit ) (struct sk_buff*,struct nlmsghdr*,struct nlattr**) ;int done; int * dump; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_dump_control {int done; int * dump; } ;
struct TYPE_2__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_1 (struct nlmsghdr*,int ,struct nlattr**,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*,struct nlattr**) ;
 struct xfrm_link* VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_12, struct nlmsghdr *VAR_13)
{
 struct net *VAR_14 = FUNC_3(VAR_12->sk);
 struct nlattr *VAR_15[VAR_4+1];
 struct xfrm_link *VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = VAR_13->nlmsg_type;
 if (VAR_17 > VAR_8)
  return -VAR_1;

 VAR_17 -= VAR_5;
 VAR_16 = &VAR_9[VAR_17];


 if (FUNC_2(VAR_12, VAR_0))
  return -VAR_2;

 if ((VAR_17 == (VAR_7 - VAR_5) ||
      VAR_17 == (VAR_6 - VAR_5)) &&
     (VAR_13->nlmsg_flags & VAR_3)) {
  if (VAR_16->dump == ((void*)0))
   return -VAR_1;

  {
   struct netlink_dump_control VAR_19 = {
    .dump = VAR_16->dump,
    .done = VAR_16->done,
   };
   return FUNC_0(VAR_14->xfrm.nlsk, VAR_12, VAR_13, &VAR_19);
  }
 }

 VAR_18 = FUNC_1(VAR_13, VAR_10[VAR_17], VAR_15, VAR_4,
     VAR_11);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_16->doit == ((void*)0))
  return -VAR_1;

 return VAR_16->doit(VAR_12, VAR_13, VAR_15);
}
