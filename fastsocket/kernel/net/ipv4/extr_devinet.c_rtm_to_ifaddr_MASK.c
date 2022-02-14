
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct in_ifaddr {int ifa_prefixlen; int ifa_label; void* ifa_broadcast; void* ifa_address; void* ifa_local; struct in_device* ifa_dev; int ifa_scope; int ifa_flags; int ifa_mask; } ;
struct in_device {int dummy; } ;
struct ifaddrmsg {int ifa_prefixlen; int ifa_scope; int ifa_flags; int ifa_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct in_ifaddr* FUNC_0 (int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 struct in_device* FUNC_2 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_3 (struct in_device*) ;
 struct in_ifaddr* FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct in_device*) ;
 int FUNC_7 (int ,int ,int ) ;
 void* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (int ,struct nlattr*,int ) ;
 struct ifaddrmsg* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;

__attribute__((used)) static struct in_ifaddr *FUNC_12(struct net *VAR_10, struct nlmsghdr *VAR_11)
{
 struct nlattr *VAR_12[VAR_7+1];
 struct in_ifaddr *VAR_13;
 struct ifaddrmsg *VAR_14;
 struct net_device *VAR_15;
 struct in_device *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_11(VAR_11, sizeof(*VAR_14), VAR_12, VAR_7, VAR_9);
 if (VAR_17 < 0)
  goto errout;

 VAR_14 = FUNC_10(VAR_11);
 VAR_17 = -VAR_0;
 if (VAR_14->ifa_prefixlen > 32 || VAR_12[VAR_6] == ((void*)0))
  goto errout;

 VAR_15 = FUNC_1(VAR_10, VAR_14->ifa_index);
 VAR_17 = -VAR_2;
 if (VAR_15 == ((void*)0))
  goto errout;

 VAR_16 = FUNC_2(VAR_15);
 VAR_17 = -VAR_1;
 if (VAR_16 == ((void*)0))
  goto errout;

 VAR_13 = FUNC_4();
 if (VAR_13 == ((void*)0))




  goto errout;

 FUNC_6(VAR_16);
 FUNC_3(VAR_16);

 if (VAR_12[VAR_3] == ((void*)0))
  VAR_12[VAR_3] = VAR_12[VAR_6];

 VAR_13->ifa_prefixlen = VAR_14->ifa_prefixlen;
 VAR_13->ifa_mask = FUNC_5(VAR_14->ifa_prefixlen);
 VAR_13->ifa_flags = VAR_14->ifa_flags;
 VAR_13->ifa_scope = VAR_14->ifa_scope;
 VAR_13->ifa_dev = VAR_16;

 VAR_13->ifa_local = FUNC_8(VAR_12[VAR_6]);
 VAR_13->ifa_address = FUNC_8(VAR_12[VAR_3]);

 if (VAR_12[VAR_4])
  VAR_13->ifa_broadcast = FUNC_8(VAR_12[VAR_4]);

 if (VAR_12[VAR_5])
  FUNC_9(VAR_13->ifa_label, VAR_12[VAR_5], VAR_8);
 else
  FUNC_7(VAR_13->ifa_label, VAR_15->name, VAR_8);

 return VAR_13;

errout:
 return FUNC_0(VAR_17);
}
