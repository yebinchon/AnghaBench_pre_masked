
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {int dummy; } ;
struct net_device {int ifindex; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int nl_net; int * nlh; int pid; } ;
struct fib6_config {int fc_flags; int fc_gateway; TYPE_1__ fc_nlinfo; int fc_ifindex; int fc_metric; int fc_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct fib6_config*) ;
 int FUNC_3 (int *,struct in6_addr*) ;
 struct rt6_info* FUNC_4 (struct in6_addr*,struct net_device*) ;

struct rt6_info *FUNC_5(struct in6_addr *VAR_7,
         struct net_device *VAR_8,
         unsigned int VAR_9)
{
 struct fib6_config VAR_10 = {
  .fc_table = VAR_1,
  .fc_metric = VAR_0,
  .fc_ifindex = VAR_8->ifindex,
  .fc_flags = VAR_5 | VAR_2 | VAR_3 |
      VAR_6 | VAR_4 | FUNC_0(VAR_9),
  .fc_nlinfo.pid = 0,
  .fc_nlinfo.nlh = ((void*)0),
  .fc_nlinfo.nl_net = FUNC_1(VAR_8),
 };

 FUNC_3(&VAR_10.fc_gateway, VAR_7);

 FUNC_2(&VAR_10);

 return FUNC_4(VAR_7, VAR_8);
}
