
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct net_device {int priv_flags; } ;
struct net {int dummy; } ;
struct ndmsg {scalar_t__ ndm_ifindex; int ndm_flags; } ;
struct TYPE_2__ {int (* ndo_fdb_add ) (struct ndmsg*,struct nlattr**,struct net_device*,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int * FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 struct ndmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct net_device*,int *,int ) ;
 struct net* FUNC_8 (int ) ;
 int FUNC_9 (struct ndmsg*,struct nlattr**,struct net_device*,int *,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11, void *VAR_12)
{
 struct net *VAR_13 = FUNC_8(VAR_10->sk);
 struct ndmsg *VAR_14;
 struct nlattr *VAR_15[VAR_6+1];
 struct net_device *VAR_16;
 u8 *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_5(VAR_11, sizeof(*VAR_14), VAR_15, VAR_6, ((void*)0));
 if (VAR_18 < 0)
  return VAR_18;

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14->ndm_ifindex == 0) {
  FUNC_6("PF_BRIDGE: RTM_NEWNEIGH with invalid ifindex\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_0(VAR_13, VAR_14->ndm_ifindex);
 if (VAR_16 == ((void*)0)) {
  FUNC_6("PF_BRIDGE: RTM_NEWNEIGH with unknown ifindex\n");
  return -VAR_1;
 }

 if (!VAR_15[VAR_5] || FUNC_3(VAR_15[VAR_5]) != VAR_3) {
  FUNC_6("PF_BRIDGE: RTM_NEWNEIGH with invalid address\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_2(VAR_15[VAR_5]);

 VAR_18 = -VAR_2;


 if ((!VAR_14->ndm_flags || VAR_14->ndm_flags & VAR_7) &&
     (VAR_16->priv_flags & VAR_4)) {
  VAR_14->ndm_flags &= ~VAR_7;
 }


 if ((VAR_14->ndm_flags & VAR_8) && FUNC_1(VAR_16)->ndo_fdb_add) {
  VAR_18 = FUNC_1(VAR_16)->ndo_fdb_add(VAR_14, VAR_15, VAR_16, VAR_17,
       VAR_11->nlmsg_flags);

  if (!VAR_18) {
   FUNC_7(VAR_16, VAR_17, VAR_9);
   VAR_14->ndm_flags &= ~VAR_8;
  }
 }

 return VAR_18;
}
