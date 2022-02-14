
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long hello_time; unsigned long bridge_hello_time; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct net_bridge*) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct net_bridge *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 < VAR_1)
  return -VAR_0;

 VAR_2->hello_time = VAR_4;
 if (FUNC_0(VAR_2))
  VAR_2->bridge_hello_time = VAR_4;
 return 0;
}
