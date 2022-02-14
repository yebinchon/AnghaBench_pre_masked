
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ipvs_property; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_2,
           struct sk_buff *VAR_3,
           const struct net_device *VAR_4,
           const struct net_device *VAR_5,
           int (*VAR_6)(struct sk_buff *))
{
 if (!VAR_3->ipvs_property)
  return VAR_0;

 return VAR_1;
}
