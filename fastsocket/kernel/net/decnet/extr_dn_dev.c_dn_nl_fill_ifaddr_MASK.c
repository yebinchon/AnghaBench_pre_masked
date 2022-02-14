
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ifaddrmsg {int ifa_prefixlen; int ifa_flags; int ifa_index; int ifa_scope; int ifa_family; } ;
struct dn_ifaddr {int ifa_flags; scalar_t__* ifa_label; scalar_t__ ifa_local; scalar_t__ ifa_address; TYPE_2__* ifa_dev; int ifa_scope; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifaddrmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct dn_ifaddr *VAR_7,
        u32 VAR_8, u32 VAR_9, int VAR_10, unsigned int VAR_11)
{
 struct ifaddrmsg *VAR_12;
 struct nlmsghdr *VAR_13;

 VAR_13 = FUNC_5(VAR_6, VAR_8, VAR_9, VAR_10, sizeof(*VAR_12), VAR_11);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_13);
 VAR_12->ifa_family = VAR_0;
 VAR_12->ifa_prefixlen = 16;
 VAR_12->ifa_flags = VAR_7->ifa_flags | VAR_3;
 VAR_12->ifa_scope = VAR_7->ifa_scope;
 VAR_12->ifa_index = VAR_7->ifa_dev->dev->ifindex;

 if (VAR_7->ifa_address)
  FUNC_0(VAR_6, VAR_2, VAR_7->ifa_address);
 if (VAR_7->ifa_local)
  FUNC_0(VAR_6, VAR_5, VAR_7->ifa_local);
 if (VAR_7->ifa_label[0])
  FUNC_1(VAR_6, VAR_4, VAR_7->ifa_label);

 return FUNC_4(VAR_6, VAR_13);

nla_put_failure:
 FUNC_2(VAR_6, VAR_13);
 return -VAR_1;
}
