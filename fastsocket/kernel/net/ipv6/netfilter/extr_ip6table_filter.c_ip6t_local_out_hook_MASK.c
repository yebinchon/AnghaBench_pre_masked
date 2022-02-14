
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_3__ {int ip6table_filter; } ;
struct TYPE_4__ {TYPE_1__ ipv6; } ;


 unsigned int VAR_0 ;
 TYPE_2__* FUNC_0 (struct net_device const*) ;
 unsigned int FUNC_1 (struct sk_buff*,unsigned int,struct net_device const*,struct net_device const*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static unsigned int
FUNC_5(unsigned int VAR_1,
     struct sk_buff *VAR_2,
     const struct net_device *VAR_3,
     const struct net_device *VAR_4,
     int (*VAR_5)(struct sk_buff *))
{
 return FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4,
        FUNC_0(VAR_4)->ipv6.ip6table_filter);
}
