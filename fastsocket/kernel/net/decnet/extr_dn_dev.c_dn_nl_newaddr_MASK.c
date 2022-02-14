
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int name; struct dn_dev* dn_ptr; } ;
struct net {int dummy; } ;
struct ifaddrmsg {int ifa_scope; int ifa_flags; int ifa_index; } ;
struct dn_ifaddr {int ifa_label; struct dn_dev* ifa_dev; int ifa_scope; int ifa_flags; void* ifa_address; void* ifa_local; } ;
struct dn_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 struct dn_ifaddr* FUNC_1 () ;
 struct dn_dev* FUNC_2 (struct net_device*,int*) ;
 int FUNC_3 (struct dn_ifaddr*) ;
 int FUNC_4 (struct dn_dev*,struct dn_ifaddr*) ;
 int VAR_8 ;
 struct net VAR_9 ;
 int FUNC_5 (int ,int ,int ) ;
 void* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (int ,struct nlattr*,int ) ;
 struct ifaddrmsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11, void *VAR_12)
{
 struct net *VAR_13 = FUNC_10(VAR_10->sk);
 struct nlattr *VAR_14[VAR_6+1];
 struct net_device *VAR_15;
 struct dn_dev *VAR_16;
 struct ifaddrmsg *VAR_17;
 struct dn_ifaddr *VAR_18;
 int VAR_19;

 if (VAR_13 != &VAR_9)
  return -VAR_0;

 VAR_19 = FUNC_9(VAR_11, sizeof(*VAR_17), VAR_14, VAR_6, VAR_8);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_14[VAR_5] == ((void*)0))
  return -VAR_0;

 VAR_17 = FUNC_8(VAR_11);
 if ((VAR_15 = FUNC_0(&VAR_9, VAR_17->ifa_index)) == ((void*)0))
  return -VAR_2;

 if ((VAR_16 = VAR_15->dn_ptr) == ((void*)0)) {
  VAR_16 = FUNC_2(VAR_15, &VAR_19);
  if (!VAR_16)
   return VAR_19;
 }

 if ((VAR_18 = FUNC_1()) == ((void*)0))
  return -VAR_1;

 if (VAR_14[VAR_3] == ((void*)0))
  VAR_14[VAR_3] = VAR_14[VAR_5];

 VAR_18->ifa_local = FUNC_6(VAR_14[VAR_5]);
 VAR_18->ifa_address = FUNC_6(VAR_14[VAR_3]);
 VAR_18->ifa_flags = VAR_17->ifa_flags;
 VAR_18->ifa_scope = VAR_17->ifa_scope;
 VAR_18->ifa_dev = VAR_16;

 if (VAR_14[VAR_4])
  FUNC_7(VAR_18->ifa_label, VAR_14[VAR_4], VAR_7);
 else
  FUNC_5(VAR_18->ifa_label, VAR_15->name, VAR_7);

 VAR_19 = FUNC_4(VAR_16, VAR_18);
 if (VAR_19)
  FUNC_3(VAR_18);

 return VAR_19;
}
