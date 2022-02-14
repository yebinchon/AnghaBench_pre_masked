
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int up; int stats_mtx; int stats_callout; int wd_mtx; int wd_callout; int dev; } ;


 int FUNC_0 (struct al_eth_adapter*) ;
 int FUNC_1 (struct al_eth_adapter*) ;
 int FUNC_2 (struct al_eth_adapter*) ;
 int FUNC_3 (struct al_eth_adapter*) ;
 int FUNC_4 (struct al_eth_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct al_eth_adapter *VAR_0)
{

 FUNC_6(VAR_0->dev, "al_eth_down: begin\n");

 VAR_0->up = 0;

 FUNC_7(&VAR_0->wd_mtx);
 FUNC_5(&VAR_0->wd_callout);
 FUNC_8(&VAR_0->wd_mtx);

 FUNC_0(VAR_0);

 FUNC_7(&VAR_0->stats_mtx);
 FUNC_5(&VAR_0->stats_callout);
 FUNC_8(&VAR_0->stats_mtx);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
}
