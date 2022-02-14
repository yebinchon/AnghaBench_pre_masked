
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ plen; int addr; } ;
struct rt6_info {TYPE_2__ rt6i_prefsrc; scalar_t__ rt6i_dev; } ;
typedef void net_device ;
struct TYPE_3__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct arg_dev_net_ip {struct in6_addr* addr; struct net* net; void* dev; } ;


 scalar_t__ FUNC_0 (struct in6_addr*,int *) ;

__attribute__((used)) static int FUNC_1(struct rt6_info *VAR_0, void *VAR_1)
{
 struct net_device *VAR_2 = ((struct arg_dev_net_ip *)VAR_1)->dev;
 struct net *VAR_3 = ((struct arg_dev_net_ip *)VAR_1)->net;
 struct in6_addr *VAR_4 = ((struct arg_dev_net_ip *)VAR_1)->addr;

 if (((void *)VAR_0->rt6i_dev == VAR_2 || VAR_2 == ((void*)0)) &&
     VAR_0 != VAR_3->ipv6.ip6_null_entry &&
     FUNC_0(VAR_4, &VAR_0->rt6i_prefsrc.addr)) {

  VAR_0->rt6i_prefsrc.plen = 0;
 }
 return 0;
}
