
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct ifaddrmsg {int ifa_index; } ;
struct dn_ifaddr {int ifa_label; int ifa_local; struct dn_ifaddr* ifa_next; } ;
struct dn_dev {struct dn_ifaddr* ifa_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct dn_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct dn_dev*,struct dn_ifaddr**,int) ;
 int VAR_6 ;
 struct net VAR_7 ;
 scalar_t__ FUNC_2 (struct nlattr*,int *,int) ;
 scalar_t__ FUNC_3 (struct nlattr*,int ) ;
 struct ifaddrmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9, void *VAR_10)
{
 struct net *VAR_11 = FUNC_6(VAR_8->sk);
 struct nlattr *VAR_12[VAR_5+1];
 struct dn_dev *VAR_13;
 struct ifaddrmsg *VAR_14;
 struct dn_ifaddr *VAR_15, **VAR_16;
 int VAR_17 = -VAR_1;

 if (VAR_11 != &VAR_7)
  goto errout;

 VAR_17 = FUNC_5(VAR_9, sizeof(*VAR_14), VAR_12, VAR_5, VAR_6);
 if (VAR_17 < 0)
  goto errout;

 VAR_17 = -VAR_2;
 VAR_14 = FUNC_4(VAR_9);
 if ((VAR_13 = FUNC_0(VAR_14->ifa_index)) == ((void*)0))
  goto errout;

 VAR_17 = -VAR_0;
 for (VAR_16 = &VAR_13->ifa_list; (VAR_15 = *VAR_16); VAR_16 = &VAR_15->ifa_next) {
  if (VAR_12[VAR_4] &&
      FUNC_2(VAR_12[VAR_4], &VAR_15->ifa_local, 2))
   continue;

  if (VAR_12[VAR_3] && FUNC_3(VAR_12[VAR_3], VAR_15->ifa_label))
   continue;

  FUNC_1(VAR_13, VAR_16, 1);
  return 0;
 }

errout:
 return VAR_17;
}
