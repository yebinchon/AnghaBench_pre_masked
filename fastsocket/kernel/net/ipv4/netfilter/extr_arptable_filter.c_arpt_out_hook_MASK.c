
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int arptable_filter; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 unsigned int FUNC_0 (struct sk_buff*,unsigned int,struct net_device const*,struct net_device const*,int ) ;
 TYPE_2__* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0,
      struct sk_buff *VAR_1,
      const struct net_device *VAR_2,
      const struct net_device *VAR_3,
      int (*VAR_4)(struct sk_buff *))
{
 return FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3,
        FUNC_1(VAR_3)->ipv4.arptable_filter);
}
