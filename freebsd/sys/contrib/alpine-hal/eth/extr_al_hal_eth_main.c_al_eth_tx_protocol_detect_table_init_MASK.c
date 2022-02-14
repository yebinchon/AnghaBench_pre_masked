
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_hal_eth_adapter {scalar_t__ rev_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (struct al_hal_eth_adapter*,int,int *) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_3)
{
 int VAR_4;
 FUNC_0((VAR_3->rev_id > VAR_0));

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_3, VAR_4,
    &VAR_2[VAR_4]);

 return 0;
}
