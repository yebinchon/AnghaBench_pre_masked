
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;
struct neigh_table {scalar_t__ family; scalar_t__ key_len; struct neigh_table* next; } ;
struct ndmsg {scalar_t__ ndm_family; int ndm_flags; scalar_t__ ndm_ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct neighbour* FUNC_2 (struct neigh_table*,int ,struct net_device*) ;
 int FUNC_3 (struct neighbour*) ;
 struct neigh_table* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct neighbour*,int *,int ,int) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 struct ndmsg* FUNC_7 (struct nlmsghdr*) ;
 struct nlattr* FUNC_8 (struct nlmsghdr*,int,int ) ;
 int FUNC_9 (struct nlmsghdr*) ;
 int FUNC_10 (struct neigh_table*,struct net*,int ,struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct net* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_11, struct nlmsghdr *VAR_12, void *VAR_13)
{
 struct net *VAR_14 = FUNC_13(VAR_11->sk);
 struct ndmsg *VAR_15;
 struct nlattr *VAR_16;
 struct neigh_table *VAR_17;
 struct net_device *VAR_18 = ((void*)0);
 int VAR_19 = -VAR_1;

 if (FUNC_9(VAR_12) < sizeof(*VAR_15))
  goto out;

 VAR_16 = FUNC_8(VAR_12, sizeof(*VAR_15), VAR_4);
 if (VAR_16 == ((void*)0))
  goto out;

 VAR_15 = FUNC_7(VAR_12);
 if (VAR_15->ndm_ifindex) {
  VAR_18 = FUNC_0(VAR_14, VAR_15->ndm_ifindex);
  if (VAR_18 == ((void*)0)) {
   VAR_19 = -VAR_2;
   goto out;
  }
 }

 FUNC_11(&VAR_10);
 for (VAR_17 = VAR_9; VAR_17; VAR_17 = VAR_17->next) {
  struct neighbour *VAR_20;

  if (VAR_17->family != VAR_15->ndm_family)
   continue;
  FUNC_12(&VAR_10);

  if (FUNC_6(VAR_16) < VAR_17->key_len)
   goto out_dev_put;

  if (VAR_15->ndm_flags & VAR_7) {
   VAR_19 = FUNC_10(VAR_17, VAR_14, FUNC_5(VAR_16), VAR_18);
   goto out_dev_put;
  }

  if (VAR_18 == ((void*)0))
   goto out_dev_put;

  VAR_20 = FUNC_2(VAR_17, FUNC_5(VAR_16), VAR_18);
  if (VAR_20 == ((void*)0)) {
   VAR_19 = -VAR_3;
   goto out_dev_put;
  }

  VAR_19 = FUNC_4(VAR_20, ((void*)0), VAR_8,
       VAR_6 |
       VAR_5);
  FUNC_3(VAR_20);
  goto out_dev_put;
 }
 FUNC_12(&VAR_10);
 VAR_19 = -VAR_0;

out_dev_put:
 if (VAR_18)
  FUNC_1(VAR_18);
out:
 return VAR_19;
}
