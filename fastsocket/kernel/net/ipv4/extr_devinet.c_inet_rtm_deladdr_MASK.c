
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct in_ifaddr {scalar_t__ ifa_local; scalar_t__ ifa_prefixlen; int ifa_label; struct in_ifaddr* ifa_next; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;
struct ifaddrmsg {scalar_t__ ifa_prefixlen; int ifa_index; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct in_device*,struct in_ifaddr**,int,struct nlmsghdr*,int ) ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,struct in_ifaddr*) ;
 struct in_device* FUNC_5 (struct net*,int ) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (struct nlattr*,int ) ;
 struct ifaddrmsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9, void *VAR_10)
{
 struct net *VAR_11 = FUNC_10(VAR_8->sk);
 struct nlattr *VAR_12[VAR_6+1];
 struct in_device *VAR_13;
 struct ifaddrmsg *VAR_14;
 struct in_ifaddr *VAR_15, **VAR_16;
 int VAR_17 = -VAR_1;

 FUNC_0();

 VAR_17 = FUNC_9(VAR_9, sizeof(*VAR_14), VAR_12, VAR_6, VAR_7);
 if (VAR_17 < 0)
  goto errout;

 VAR_14 = FUNC_8(VAR_9);
 VAR_13 = FUNC_5(VAR_11, VAR_14->ifa_index);
 if (VAR_13 == ((void*)0)) {
  VAR_17 = -VAR_2;
  goto errout;
 }

 FUNC_2(VAR_13);

 for (VAR_16 = &VAR_13->ifa_list; (VAR_15 = *VAR_16) != ((void*)0);
      VAR_16 = &VAR_15->ifa_next) {
  if (VAR_12[VAR_5] &&
      VAR_15->ifa_local != FUNC_6(VAR_12[VAR_5]))
   continue;

  if (VAR_12[VAR_4] && FUNC_7(VAR_12[VAR_4], VAR_15->ifa_label))
   continue;

  if (VAR_12[VAR_3] &&
      (VAR_14->ifa_prefixlen != VAR_15->ifa_prefixlen ||
      !FUNC_4(FUNC_6(VAR_12[VAR_3]), VAR_15)))
   continue;

  FUNC_3(VAR_13, VAR_16, 1, VAR_9, FUNC_1(VAR_8).pid);
  return 0;
 }

 VAR_17 = -VAR_0;
errout:
 return VAR_17;
}
