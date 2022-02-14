
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct linux_dma_priv* dma_priv; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct linux_dma_priv {int lock; scalar_t__ dmat; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct linux_dma_priv*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct pci_dev *VAR_1)
{
 struct linux_dma_priv *VAR_2;

 VAR_2 = VAR_1->dev.dma_priv;
 if (VAR_2->dmat)
  FUNC_0(VAR_2->dmat);
 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_2, VAR_0);
 VAR_1->dev.dma_priv = ((void*)0);
 return (0);
}
