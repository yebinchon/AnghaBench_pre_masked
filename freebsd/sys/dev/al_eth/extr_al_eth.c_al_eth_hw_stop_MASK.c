
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int flags; int hal_adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct al_eth_adapter*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct al_eth_adapter *VAR_1)
{

 FUNC_3(&VAR_1->hal_adapter);






 FUNC_0(10);

 FUNC_1(&VAR_1->hal_adapter);

 VAR_1->flags |= VAR_0;


 FUNC_2(VAR_1);

 return (0);
}
