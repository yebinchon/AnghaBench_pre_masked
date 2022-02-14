
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 struct net_device* FUNC_1 (struct net*,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct ifinfomsg*,struct nlattr**,char*,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,struct nlattr*,int) ;
 struct ifinfomsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*,struct nlattr**) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7, void *VAR_8)
{
 struct net *VAR_9 = FUNC_7(VAR_6->sk);
 struct ifinfomsg *VAR_10;
 struct net_device *VAR_11;
 int VAR_12;
 struct nlattr *VAR_13[VAR_3+1];
 char VAR_14[VAR_4];

 VAR_12 = FUNC_6(VAR_7, sizeof(*VAR_10), VAR_13, VAR_3, VAR_5);
 if (VAR_12 < 0)
  goto errout;

 if (VAR_13[VAR_2])
  FUNC_4(VAR_14, VAR_13[VAR_2], VAR_4);
 else
  VAR_14[0] = '\0';

 VAR_12 = -VAR_0;
 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10->ifi_index > 0)
  VAR_11 = FUNC_0(VAR_9, VAR_10->ifi_index);
 else if (VAR_13[VAR_2])
  VAR_11 = FUNC_1(VAR_9, VAR_14);
 else
  goto errout;

 if (VAR_11 == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto errout;
 }

 if ((VAR_12 = FUNC_8(VAR_11, VAR_13)) < 0)
  goto errout_dev;

 VAR_12 = FUNC_3(VAR_11, VAR_10, VAR_13, VAR_14, 0);
errout_dev:
 FUNC_2(VAR_11);
errout:
 return VAR_12;
}
