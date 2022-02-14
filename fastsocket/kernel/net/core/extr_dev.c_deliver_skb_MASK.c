
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; int users; } ;
struct packet_type {int (* func ) (struct sk_buff*,int ,struct packet_type*,struct net_device*) ;} ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,int ,struct packet_type*,struct net_device*) ;

__attribute__((used)) static inline int FUNC_2(struct sk_buff *VAR_0,
         struct packet_type *VAR_1,
         struct net_device *VAR_2)
{
 FUNC_0(&VAR_0->users);
 return VAR_1->func(VAR_0, VAR_0->dev, VAR_1, VAR_2);
}
