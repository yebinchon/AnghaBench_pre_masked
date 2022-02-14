
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ifaddrmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int ,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ,int *,int ) ;
 int FUNC_8 (int ,int ,int) ;

void FUNC_9(int VAR_4, struct net_device *VAR_5, u8 VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = FUNC_6(FUNC_0(sizeof(struct ifaddrmsg)) +
   FUNC_5(1), VAR_2);
 if (VAR_7 == ((void*)0))
  goto errout;
 VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6, 0, 0, VAR_4);
 if (VAR_8 < 0) {
  FUNC_1(VAR_8 == -VAR_0);
  FUNC_4(VAR_7);
  goto errout;
 }
 FUNC_7(VAR_7, FUNC_2(VAR_5), 0,
      VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_8 < 0)
  FUNC_8(FUNC_2(VAR_5), VAR_3, VAR_8);
}
