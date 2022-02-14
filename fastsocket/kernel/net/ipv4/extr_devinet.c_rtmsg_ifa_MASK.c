
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int dummy; } ;
struct in_ifaddr {TYPE_1__* ifa_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct in_ifaddr*,int ,int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,struct nlmsghdr*,int ) ;
 int FUNC_7 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_8(int VAR_4, struct in_ifaddr *VAR_5, struct nlmsghdr *VAR_6,
        u32 VAR_7)
{
 struct sk_buff *VAR_8;
 u32 VAR_9 = VAR_6 ? VAR_6->nlmsg_seq : 0;
 int VAR_10 = -VAR_1;
 struct net *VAR_11;

 VAR_11 = FUNC_1(VAR_5->ifa_dev->dev);
 VAR_8 = FUNC_5(FUNC_3(), VAR_2);
 if (VAR_8 == ((void*)0))
  goto errout;

 VAR_10 = FUNC_2(VAR_8, VAR_5, VAR_7, VAR_9, VAR_4, 0);
 if (VAR_10 < 0) {

  FUNC_0(VAR_10 == -VAR_0);
  FUNC_4(VAR_8);
  goto errout;
 }
 FUNC_6(VAR_8, VAR_11, VAR_7, VAR_3, VAR_6, VAR_2);
 return;
errout:
 if (VAR_10 < 0)
  FUNC_7(VAR_11, VAR_3, VAR_10);
}
