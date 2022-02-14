
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifi_mtu; } ;
struct ifnet {int if_mtu; TYPE_1__ if_data; } ;



unsigned
FUNC_0(struct ifnet *VAR_0)
{

 return VAR_0->if_data.ifi_mtu;



}
