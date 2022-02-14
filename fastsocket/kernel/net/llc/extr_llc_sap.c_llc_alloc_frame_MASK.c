
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int protocol; } ;
struct net_device {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct sock*) ;

struct sk_buff *FUNC_8(struct sock *VAR_3, struct net_device *VAR_4,
    u8 VAR_5, u32 VAR_6)
{
 int VAR_7 = VAR_5 == VAR_2 ? 3 : 4;
 struct sk_buff *VAR_8;

 VAR_7 += FUNC_2(VAR_4->type);
 VAR_8 = FUNC_0(VAR_7 + VAR_6, VAR_1);

 if (VAR_8) {
  FUNC_4(VAR_8);
  FUNC_3(VAR_8, VAR_7);
  FUNC_5(VAR_8);
  FUNC_6(VAR_8);
  VAR_8->protocol = FUNC_1(VAR_0);
  VAR_8->dev = VAR_4;
  if (VAR_3 != ((void*)0))
   FUNC_7(VAR_8, VAR_3);
 }
 return VAR_8;
}
