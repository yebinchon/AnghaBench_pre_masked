
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int stats_callout; } ;


 int FUNC_0 (struct al_eth_adapter*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct al_eth_adapter *VAR_2 = VAR_1;

 FUNC_0(VAR_2);

 FUNC_1(&VAR_2->stats_callout, VAR_0);
}
