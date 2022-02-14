
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (char*,struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ,int ,int ) ;
 int VAR_5 ;
 struct sk_buff* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

struct sk_buff *FUNC_5(struct net_device *VAR_6,
  unsigned int VAR_7, gfp_t VAR_8)
{
 struct sk_buff *VAR_9;

 if ((VAR_5 & VAR_0) && FUNC_3(FUNC_2())) {
  VAR_9 = FUNC_1(VAR_7 + VAR_1, VAR_8, VAR_3, VAR_2);
  FUNC_0("Allocate pool skb 0x%p\n", VAR_9);
 } else {
  VAR_9 = FUNC_1(VAR_7 + VAR_1, VAR_8, VAR_4, VAR_2);
  FUNC_0("Allocate regular skb 0x%p\n", VAR_9);
 }
 if (FUNC_3(VAR_9)) {
  FUNC_4(VAR_9, VAR_1);
  VAR_9->dev = VAR_6;
 }
 return VAR_9;
}
