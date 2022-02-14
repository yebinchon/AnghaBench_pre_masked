
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct inet6_dev {int dummy; } ;


 struct inet6_dev* FUNC_0 (int ) ;
 struct inet6_dev* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline struct inet6_dev *FUNC_3(struct sk_buff *VAR_0)
{
 return FUNC_2(VAR_0) ? FUNC_1(FUNC_2(VAR_0)) : FUNC_0(VAR_0->dev);
}
