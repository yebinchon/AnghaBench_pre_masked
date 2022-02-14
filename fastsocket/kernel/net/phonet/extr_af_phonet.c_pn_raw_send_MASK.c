
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int ,int ,int ,int) ;
 int FUNC_3 (struct sk_buff*,void const*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(const void *VAR_3, int VAR_4, struct net_device *VAR_5,
   u16 VAR_6, u16 VAR_7, u8 VAR_8)
{
 struct sk_buff *VAR_9 = FUNC_1(VAR_2 + VAR_4, VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_9, VAR_2);
 FUNC_0(VAR_9, VAR_4);
 FUNC_3(VAR_9, VAR_3, VAR_4);
 return FUNC_2(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8, 1);
}
