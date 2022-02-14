
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int dmatag; int dmamap; int dmamem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct sdhci_slot *VAR_0)
{

 FUNC_1(VAR_0->dmatag, VAR_0->dmamap);
 FUNC_2(VAR_0->dmatag, VAR_0->dmamem, VAR_0->dmamap);
 FUNC_0(VAR_0->dmatag);
}
