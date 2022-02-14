
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_irq {scalar_t__ requested; int vector; int cookie; int res; } ;
struct al_eth_adapter {int irq_vecs; int dev; struct al_eth_irq* irq_tbl; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct al_eth_adapter *VAR_0)
{
 struct al_eth_irq *VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->irq_vecs; VAR_2++) {
  VAR_1 = &VAR_0->irq_tbl[VAR_2];
  if (VAR_1->requested != 0) {
   FUNC_2(VAR_0->dev, "tear down irq: %d\n",
       VAR_1->vector);
   VAR_3 = FUNC_0(VAR_0->dev, VAR_1->res,
       VAR_1->cookie);
   if (VAR_3 != 0)
    FUNC_1(VAR_0->dev, "failed to tear "
        "down irq: %d\n", VAR_1->vector);

  }
  VAR_1->requested = 0;
 }
}
