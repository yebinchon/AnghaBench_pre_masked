
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static __be16 FUNC_1(struct sk_buff *VAR_0,
          struct net_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_0->dev;
 __be16 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_0->dev = VAR_2;
 return VAR_3;
}
