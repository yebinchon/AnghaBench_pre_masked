
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int qdisc_sleeping; } ;
struct net_device {TYPE_1__ rx_queue; int qdisc; } ;
struct Qdisc {int dummy; } ;


 struct Qdisc* FUNC_0 (int ,int ) ;

struct Qdisc *FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct Qdisc *VAR_2;

 VAR_2 = FUNC_0(VAR_0->qdisc, VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_0->rx_queue.qdisc_sleeping, VAR_1);
out:
 return VAR_2;
}
