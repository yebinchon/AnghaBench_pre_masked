
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct in_ifaddr {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct in_ifaddr*) ;
 TYPE_1__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct in_ifaddr*) ;
 int FUNC_4 (struct in_ifaddr*,struct nlmsghdr*,int ) ;
 struct in_ifaddr* FUNC_5 (struct net*,struct nlmsghdr*) ;
 struct net* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, struct nlmsghdr *VAR_1, void *VAR_2)
{
 struct net *VAR_3 = FUNC_6(VAR_0->sk);
 struct in_ifaddr *VAR_4;

 FUNC_0();

 VAR_4 = FUNC_5(VAR_3, VAR_1);
 if (FUNC_1(VAR_4))
  return FUNC_3(VAR_4);

 return FUNC_4(VAR_4, VAR_1, FUNC_2(VAR_0).pid);
}
