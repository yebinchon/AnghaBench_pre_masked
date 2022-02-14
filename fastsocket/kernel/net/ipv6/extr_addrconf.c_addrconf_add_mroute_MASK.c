
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; } ;
struct TYPE_2__ {int nl_net; } ;
struct fib6_config {int fc_dst_len; int fc_dst; TYPE_1__ fc_nlinfo; int fc_flags; int fc_ifindex; int fc_metric; int fc_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fib6_config*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct fib6_config VAR_4 = {
  .fc_table = VAR_1,
  .fc_metric = VAR_0,
  .fc_ifindex = VAR_3->ifindex,
  .fc_dst_len = 8,
  .fc_flags = VAR_2,
  .fc_nlinfo.nl_net = FUNC_0(VAR_3),
 };

 FUNC_3(&VAR_4.fc_dst, FUNC_1(0xFF000000), 0, 0, 0);

 FUNC_2(&VAR_4);
}
