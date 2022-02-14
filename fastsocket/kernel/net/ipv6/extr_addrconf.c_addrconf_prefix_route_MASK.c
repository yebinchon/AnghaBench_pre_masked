
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {scalar_t__ type; int flags; int ifindex; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int nl_net; } ;
struct fib6_config {unsigned long fc_expires; int fc_dst_len; int fc_flags; int fc_dst; int fc_protocol; TYPE_1__ fc_nlinfo; int fc_ifindex; int fc_metric; int fc_table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct fib6_config*) ;
 int FUNC_2 (int *,struct in6_addr*) ;

__attribute__((used)) static void
FUNC_3(struct in6_addr *VAR_7, int VAR_8, struct net_device *VAR_9,
        unsigned long VAR_10, u32 VAR_11)
{
 struct fib6_config VAR_12 = {
  .fc_table = VAR_3,
  .fc_metric = VAR_2,
  .fc_ifindex = VAR_9->ifindex,
  .fc_expires = VAR_10,
  .fc_dst_len = VAR_8,
  .fc_flags = VAR_5 | VAR_11,
  .fc_nlinfo.nl_net = FUNC_0(VAR_9),
  .fc_protocol = VAR_6,
 };

 FUNC_2(&VAR_12.fc_dst, VAR_7);
 FUNC_1(&VAR_12);
}
