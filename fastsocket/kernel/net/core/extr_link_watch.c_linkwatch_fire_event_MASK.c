
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct net_device *VAR_1)
{
 bool VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_4(VAR_0, &VAR_1->state)) {
  FUNC_0(VAR_1);

  FUNC_1(VAR_1);
 } else if (!VAR_2)
  return;

 FUNC_2(VAR_2);
}
