
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct linux_dma_priv* dma_priv; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct linux_dma_priv {int lock; int ptree; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct linux_dma_priv*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct linux_dma_priv* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct pci_dev *VAR_4)
{
 struct linux_dma_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1, VAR_2 | VAR_3);
 VAR_4->dev.dma_priv = VAR_5;

 FUNC_5(&VAR_5->lock, "lkpi-priv-dma", ((void*)0), VAR_0);

 FUNC_6(&VAR_5->ptree);


 VAR_6 = FUNC_2(&VAR_4->dev, FUNC_0(64));
 if (VAR_6) {
  FUNC_4(&VAR_5->lock);
  FUNC_1(VAR_5, VAR_1);
  VAR_4->dev.dma_priv = ((void*)0);
 }
 return (VAR_6);
}
