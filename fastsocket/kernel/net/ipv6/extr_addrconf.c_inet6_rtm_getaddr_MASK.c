
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrmsg {scalar_t__ ifa_index; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 struct in6_addr* FUNC_3 (struct nlattr*,struct nlattr*) ;
 int VAR_9 ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 int FUNC_5 (struct sk_buff*,struct inet6_ifaddr*,int ,int ,int ,int ) ;
 int FUNC_6 () ;
 struct inet6_ifaddr* FUNC_7 (struct net*,struct in6_addr*,struct net_device*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 struct ifaddrmsg* FUNC_9 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int FUNC_12 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_10, struct nlmsghdr* VAR_11,
        void *VAR_12)
{
 struct net *VAR_13 = FUNC_13(VAR_10->sk);
 struct ifaddrmsg *VAR_14;
 struct nlattr *VAR_15[VAR_7+1];
 struct in6_addr *VAR_16 = ((void*)0);
 struct net_device *VAR_17 = ((void*)0);
 struct inet6_ifaddr *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20;

 VAR_20 = FUNC_11(VAR_11, sizeof(*VAR_14), VAR_15, VAR_7, VAR_9);
 if (VAR_20 < 0)
  goto errout;

 VAR_16 = FUNC_3(VAR_15[VAR_5], VAR_15[VAR_6]);
 if (VAR_16 == ((void*)0)) {
  VAR_20 = -VAR_1;
  goto errout;
 }

 VAR_14 = FUNC_9(VAR_11);
 if (VAR_14->ifa_index)
  VAR_17 = FUNC_2(VAR_13, VAR_14->ifa_index);

 if ((VAR_18 = FUNC_7(VAR_13, VAR_16, VAR_17, 1)) == ((void*)0)) {
  VAR_20 = -VAR_0;
  goto errout;
 }

 if ((VAR_19 = FUNC_10(FUNC_6(), VAR_4)) == ((void*)0)) {
  VAR_20 = -VAR_3;
  goto errout_ifa;
 }

 VAR_20 = FUNC_5(VAR_19, VAR_18, FUNC_0(VAR_10).pid,
    VAR_11->nlmsg_seq, VAR_8, 0);
 if (VAR_20 < 0) {

  FUNC_1(VAR_20 == -VAR_2);
  FUNC_8(VAR_19);
  goto errout_ifa;
 }
 VAR_20 = FUNC_12(VAR_19, VAR_13, FUNC_0(VAR_10).pid);
errout_ifa:
 FUNC_4(VAR_18);
errout:
 return VAR_20;
}
