
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* nf_bridge; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mask; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_3, struct sk_buff *VAR_4,
       const struct net_device *VAR_5,
       const struct net_device *VAR_6,
       int (*VAR_7)(struct sk_buff *))
{
 if (VAR_4->nf_bridge &&
     !(VAR_4->nf_bridge->mask & VAR_0)) {
  return VAR_2;
 }

 return VAR_1;
}
