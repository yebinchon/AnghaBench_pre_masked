
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct pneigh_entry {int flags; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct net_device {scalar_t__ addr_len; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;
struct neigh_table {scalar_t__ family; scalar_t__ key_len; struct neigh_table* next; } ;
struct ndmsg {scalar_t__ ndm_family; int ndm_flags; int ndm_state; scalar_t__ ndm_ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct neighbour*) ;
 struct neighbour* FUNC_2 (struct neigh_table*,void*,struct net_device*) ;
 struct net_device* FUNC_3 (struct net*,scalar_t__) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct neighbour*,int *) ;
 struct neighbour* FUNC_6 (struct neigh_table*,void*,struct net_device*) ;
 int FUNC_7 (struct neighbour*) ;
 struct neigh_table* VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (struct neighbour*,void*,int ,int) ;
 int * FUNC_9 (struct nlattr*) ;
 scalar_t__ FUNC_10 (struct nlattr*) ;
 struct ndmsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 struct pneigh_entry* FUNC_13 (struct neigh_table*,struct net*,void*,struct net_device*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct net* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_18, struct nlmsghdr *VAR_19, void *VAR_20)
{
 struct net *VAR_21 = FUNC_16(VAR_18->sk);
 struct ndmsg *VAR_22;
 struct nlattr *VAR_23[VAR_8+1];
 struct neigh_table *VAR_24;
 struct net_device *VAR_25 = ((void*)0);
 int VAR_26;

 VAR_26 = FUNC_12(VAR_19, sizeof(*VAR_22), VAR_23, VAR_8, ((void*)0));
 if (VAR_26 < 0)
  goto out;

 VAR_26 = -VAR_2;
 if (VAR_23[VAR_6] == ((void*)0))
  goto out;

 VAR_22 = FUNC_11(VAR_19);
 if (VAR_22->ndm_ifindex) {
  VAR_25 = FUNC_3(VAR_21, VAR_22->ndm_ifindex);
  if (VAR_25 == ((void*)0)) {
   VAR_26 = -VAR_4;
   goto out;
  }

  if (VAR_23[VAR_7] && FUNC_10(VAR_23[VAR_7]) < VAR_25->addr_len)
   goto out_dev_put;
 }

 FUNC_14(&VAR_17);
 for (VAR_24 = VAR_16; VAR_24; VAR_24 = VAR_24->next) {
  int VAR_27 = VAR_9 | VAR_10;
  struct neighbour *VAR_28;
  void *VAR_29, *VAR_30;

  if (VAR_24->family != VAR_22->ndm_family)
   continue;
  FUNC_15(&VAR_17);

  if (FUNC_10(VAR_23[VAR_6]) < VAR_24->key_len)
   goto out_dev_put;
  VAR_29 = FUNC_9(VAR_23[VAR_6]);
  VAR_30 = VAR_23[VAR_7] ? FUNC_9(VAR_23[VAR_7]) : ((void*)0);

  if (VAR_22->ndm_flags & VAR_14) {
   struct pneigh_entry *VAR_31;

   VAR_26 = -VAR_3;
   VAR_31 = FUNC_13(VAR_24, VAR_21, VAR_29, VAR_25, 1);
   if (VAR_31) {
    VAR_31->flags = VAR_22->ndm_flags;
    VAR_26 = 0;
   }
   goto out_dev_put;
  }

  if (VAR_25 == ((void*)0))
   goto out_dev_put;

  VAR_28 = FUNC_6(VAR_24, VAR_29, VAR_25);
  if (VAR_28 == ((void*)0)) {
   if (!(VAR_19->nlmsg_flags & VAR_11)) {
    VAR_26 = -VAR_5;
    goto out_dev_put;
   }

   VAR_28 = FUNC_2(VAR_24, VAR_29, VAR_25);
   if (FUNC_0(VAR_28)) {
    VAR_26 = FUNC_1(VAR_28);
    goto out_dev_put;
   }
  } else {
   if (VAR_19->nlmsg_flags & VAR_12) {
    VAR_26 = -VAR_1;
    FUNC_7(VAR_28);
    goto out_dev_put;
   }

   if (!(VAR_19->nlmsg_flags & VAR_13))
    VAR_27 &= ~VAR_10;
  }

  if (VAR_22->ndm_flags & VAR_15) {
   FUNC_5(VAR_28, ((void*)0));
   VAR_26 = 0;
  } else
   VAR_26 = FUNC_8(VAR_28, VAR_30, VAR_22->ndm_state, VAR_27);
  FUNC_7(VAR_28);
  goto out_dev_put;
 }

 FUNC_15(&VAR_17);
 VAR_26 = -VAR_0;

out_dev_put:
 if (VAR_25)
  FUNC_4(VAR_25);
out:
 return VAR_26;
}
