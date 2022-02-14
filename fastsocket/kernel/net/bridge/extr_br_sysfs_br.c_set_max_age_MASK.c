
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long max_age; unsigned long bridge_max_age; } ;


 scalar_t__ FUNC_0 (struct net_bridge*) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct net_bridge *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);
 VAR_0->max_age = VAR_2;
 if (FUNC_0(VAR_0))
  VAR_0->bridge_max_age = VAR_2;
 return 0;
}
