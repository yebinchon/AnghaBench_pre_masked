
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct net_device {struct device dev; } ;


 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device * VAR_1)
{
 struct device *VAR_2 = &(VAR_1->dev);

 FUNC_2(&VAR_2->kobj);

 if (FUNC_0(VAR_1) != &VAR_0)
  return;

 FUNC_3(VAR_1);

 FUNC_1(VAR_2);
}
