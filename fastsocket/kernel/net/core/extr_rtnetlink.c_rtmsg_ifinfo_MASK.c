
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct net* FUNC_1 (struct net_device*) ;
 size_t FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int,int ,int ,unsigned int,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_7 (struct net*,int ,int) ;

void FUNC_8(int VAR_4, struct net_device *VAR_5, unsigned VAR_6)
{
 struct net *VAR_7 = FUNC_1(VAR_5);
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_1;
 size_t VAR_10;

 VAR_8 = FUNC_4((VAR_10 = FUNC_2(VAR_5, 0)), VAR_2);
 if (VAR_8 == ((void*)0))
  goto errout;

 VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_4, 0, 0, VAR_6, 0, 0);
 if (VAR_9 < 0) {

  FUNC_0(VAR_9 == -VAR_0);
  FUNC_3(VAR_8);
  goto errout;
 }
 FUNC_6(VAR_8, VAR_7, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_9 < 0)
  FUNC_7(VAR_7, VAR_3, VAR_9);
}
