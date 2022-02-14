
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device const*) ;
 unsigned int FUNC_1 (int ,int ,unsigned int,struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1,
          struct sk_buff *VAR_2,
          const struct net_device *VAR_3,
          const struct net_device *VAR_4,
          int (*VAR_5)(struct sk_buff *))
{
 return FUNC_1(FUNC_0(VAR_3), VAR_0, VAR_1, VAR_2);
}
