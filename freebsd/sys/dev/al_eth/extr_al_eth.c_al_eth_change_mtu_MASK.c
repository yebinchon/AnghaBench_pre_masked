
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int hal_adapter; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct al_eth_adapter*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct al_eth_adapter *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 + VAR_2 + VAR_1 +
     VAR_3;

 FUNC_0(VAR_4, VAR_5);

 FUNC_3(VAR_4->dev, "set MTU to %d\n", VAR_5);
 FUNC_1(&VAR_4->hal_adapter,
     VAR_0, VAR_6);

 FUNC_2(&VAR_4->hal_adapter, 0, VAR_5 - 100);

 return (0);
}
