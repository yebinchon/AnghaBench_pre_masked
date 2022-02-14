
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct atalk_iface* atalk_ptr; } ;
struct atalk_addr {int dummy; } ;
struct atalk_iface {struct atalk_addr address; } ;



struct atalk_addr *FUNC_0(struct net_device *VAR_0)
{
 struct atalk_iface *VAR_1 = VAR_0->atalk_ptr;
 return VAR_1 ? &VAR_1->address : ((void*)0);
}
