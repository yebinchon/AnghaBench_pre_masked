
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mc_count; int mc_list; } ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_0, struct net_device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(VAR_0);
 VAR_2 = FUNC_0(&VAR_0->mc_list, &VAR_0->mc_count,
         &VAR_1->mc_list, &VAR_1->mc_count);
 if (!VAR_2)
  FUNC_1(VAR_0);
 FUNC_3(VAR_0);

 return VAR_2;
}
