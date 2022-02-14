
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neigh_parms {scalar_t__ ucast_probes; TYPE_1__* tbl; scalar_t__ mcast_probes; } ;
struct TYPE_2__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct net_device *VAR_1, struct neigh_parms *VAR_2)
{

 VAR_2->mcast_probes = 0;





 if (VAR_2->tbl->family != VAR_0)
  VAR_2->ucast_probes = 0;
 return 0;
}
