
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ifindex; scalar_t__ iflink; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static bool FUNC_3(struct net_device *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return 0;

 if (VAR_0->ifindex != VAR_0->iflink)
  return 1;

 return FUNC_0(VAR_0) && FUNC_2(VAR_0);
}
