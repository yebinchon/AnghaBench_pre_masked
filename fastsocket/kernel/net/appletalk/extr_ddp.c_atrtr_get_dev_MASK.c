
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atalk_route {struct net_device* dev; } ;
struct atalk_addr {int dummy; } ;


 struct atalk_route* FUNC_0 (struct atalk_addr*) ;

struct net_device *FUNC_1(struct atalk_addr *VAR_0)
{
 struct atalk_route *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->dev : ((void*)0);
}
