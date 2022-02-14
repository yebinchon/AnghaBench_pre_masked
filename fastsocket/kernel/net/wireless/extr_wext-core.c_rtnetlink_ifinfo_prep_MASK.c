
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {int name; int ifindex; int type; } ;
struct ifinfomsg {scalar_t__ ifi_change; int ifi_flags; int ifi_index; int ifi_type; scalar_t__ __ifi_pad; int ifi_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct ifinfomsg* FUNC_3 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static struct nlmsghdr *FUNC_5(struct net_device *VAR_3,
           struct sk_buff *VAR_4)
{
 struct ifinfomsg *VAR_5;
 struct nlmsghdr *VAR_6;

 VAR_6 = FUNC_4(VAR_4, 0, 0, VAR_2, sizeof(*VAR_5), 0);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_6);
 VAR_5->ifi_family = VAR_0;
 VAR_5->__ifi_pad = 0;
 VAR_5->ifi_type = VAR_3->type;
 VAR_5->ifi_index = VAR_3->ifindex;
 VAR_5->ifi_flags = FUNC_0(VAR_3);
 VAR_5->ifi_change = 0;

 if (FUNC_1(VAR_4, VAR_1, VAR_3->name))
  goto nla_put_failure;

 return VAR_6;
 nla_put_failure:
 FUNC_2(VAR_4, VAR_6);
 return ((void*)0);
}
