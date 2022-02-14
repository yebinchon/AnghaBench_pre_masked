
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_eth_irq {int vector; int * res; } ;
struct al_eth_adapter {int msix_vecs; int irq_vecs; int * msix_entries; int flags; int dev; struct al_eth_irq* irq_tbl; TYPE_1__* netdev; } ;
struct TYPE_2__ {int * rx_cpu_rmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct al_eth_adapter*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct al_eth_adapter *VAR_3)
{
 struct al_eth_irq *VAR_4;
 int VAR_5, VAR_6;







 FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_3->irq_vecs; VAR_5++) {
  VAR_4 = &VAR_3->irq_tbl[VAR_5];
  if (VAR_4->res == ((void*)0))
   continue;
  FUNC_3(VAR_3->dev, "release resource irq: %d\n",
      VAR_4->vector);
  VAR_6 = FUNC_1(VAR_3->dev, VAR_2, VAR_4->vector,
      VAR_4->res);
  VAR_4->res = ((void*)0);
  if (VAR_6 != 0)
   FUNC_2(VAR_3->dev, "dev has no parent while "
       "releasing res for irq: %d\n", VAR_4->vector);
 }

 FUNC_6(VAR_3->dev);

 VAR_3->flags &= ~VAR_0;

 VAR_3->msix_vecs = 0;
 FUNC_4(VAR_3->msix_entries, VAR_1);
 VAR_3->msix_entries = ((void*)0);
}
