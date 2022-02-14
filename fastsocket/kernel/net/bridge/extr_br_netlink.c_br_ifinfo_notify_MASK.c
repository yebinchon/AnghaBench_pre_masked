
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_bridge_port {int dev; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_bridge_port*,int ,int ,int,int ) ;
 int FUNC_2 () ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_8 (struct net*,int ,int) ;

void FUNC_9(int VAR_4, struct net_bridge_port *VAR_5)
{
 struct net *VAR_6 = FUNC_3(VAR_5->dev);
 struct sk_buff *VAR_7;
 int VAR_8 = -VAR_1;

 FUNC_6("bridge notify event=%d\n", VAR_4);
 VAR_7 = FUNC_5(FUNC_2(), VAR_2);
 if (VAR_7 == ((void*)0))
  goto errout;

 VAR_8 = FUNC_1(VAR_7, VAR_5, 0, 0, VAR_4, 0);
 if (VAR_8 < 0) {

  FUNC_0(VAR_8 == -VAR_0);
  FUNC_4(VAR_7);
  goto errout;
 }
 FUNC_7(VAR_7, VAR_6, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_8 < 0)
  FUNC_8(VAR_6, VAR_3, VAR_8);
}
