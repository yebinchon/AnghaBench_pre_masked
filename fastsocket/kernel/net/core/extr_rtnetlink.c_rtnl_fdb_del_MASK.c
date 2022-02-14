
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int priv_flags; } ;
struct net {int dummy; } ;
struct ndmsg {scalar_t__ ndm_ifindex; int ndm_flags; } ;
typedef int __u8 ;
struct TYPE_2__ {int (* ndo_fdb_del ) (struct ndmsg*,struct nlattr**,struct net_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int * FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 struct ndmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct net_device*,int *,int ) ;
 struct net* FUNC_9 (int ) ;
 int FUNC_10 (struct ndmsg*,struct nlattr**,struct net_device*,int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_12, struct nlmsghdr *VAR_13, void *VAR_14)
{
 struct net *VAR_15 = FUNC_9(VAR_12->sk);
 struct ndmsg *VAR_16;
 struct nlattr *VAR_17[VAR_8+1];
 struct net_device *VAR_18;
 int VAR_19 = -VAR_1;
 __u8 *VAR_20;

 if (!FUNC_1(VAR_0))
  return -VAR_4;

 VAR_19 = FUNC_6(VAR_13, sizeof(*VAR_16), VAR_17, VAR_8, ((void*)0));
 if (VAR_19 < 0)
  return VAR_19;

 VAR_16 = FUNC_5(VAR_13);
 if (VAR_16->ndm_ifindex == 0) {
  FUNC_7("PF_BRIDGE: RTM_DELNEIGH with invalid ifindex\n");
  return -VAR_1;
 }

 VAR_18 = FUNC_0(VAR_15, VAR_16->ndm_ifindex);
 if (VAR_18 == ((void*)0)) {
  FUNC_7("PF_BRIDGE: RTM_DELNEIGH with unknown ifindex\n");
  return -VAR_2;
 }

 if (!VAR_17[VAR_7] || FUNC_4(VAR_17[VAR_7]) != VAR_5) {
  FUNC_7("PF_BRIDGE: RTM_DELNEIGH with invalid address\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_3(VAR_17[VAR_7]);

 VAR_19 = -VAR_3;


 if ((!VAR_16->ndm_flags || VAR_16->ndm_flags & VAR_9) &&
     (VAR_18->priv_flags & VAR_6)) {
  VAR_16->ndm_flags &= ~VAR_9;
 }


 if ((VAR_16->ndm_flags & VAR_10) && FUNC_2(VAR_18)->ndo_fdb_del) {
  VAR_19 = FUNC_2(VAR_18)->ndo_fdb_del(VAR_16, VAR_17, VAR_18, VAR_20);

  if (!VAR_19) {
   FUNC_8(VAR_18, VAR_20, VAR_11);
   VAR_16->ndm_flags &= ~VAR_10;
  }
 }

 return VAR_19;
}
