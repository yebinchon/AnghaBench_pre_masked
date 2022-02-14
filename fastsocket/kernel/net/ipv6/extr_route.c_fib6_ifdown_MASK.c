
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {scalar_t__ rt6i_dev; } ;
typedef void net_device ;
struct TYPE_2__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct arg_dev_net {struct net* net; void* dev; } ;


 int FUNC_0 (char*,struct rt6_info*) ;

__attribute__((used)) static int FUNC_1(struct rt6_info *VAR_0, void *VAR_1)
{
 struct net_device *VAR_2 = ((struct arg_dev_net *)VAR_1)->dev;
 struct net *VAR_3 = ((struct arg_dev_net *)VAR_1)->net;

 if (((void *)VAR_0->rt6i_dev == VAR_2 || VAR_2 == ((void*)0)) &&
     VAR_0 != VAR_3->ipv6.ip6_null_entry) {
  FUNC_0("deleted by ifdown %p\n", VAR_0);
  return -1;
 }
 return 0;
}
