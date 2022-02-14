
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mc_count; int mc_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->mc_list);
 VAR_0->mc_count = 0;

 FUNC_2(VAR_0);
}
