
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 struct mlx5_core_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_6(VAR_0, FUNC_0(64));
 if (VAR_2) {
  FUNC_3(VAR_1, "couldn't set 64-bit PCI DMA mask\n");
  VAR_2 = FUNC_6(VAR_0, FUNC_0(32));
  if (VAR_2) {
   FUNC_2(VAR_1, "Can't set PCI DMA mask, aborting\n");
   return VAR_2;
  }
 }

 VAR_2 = FUNC_5(VAR_0, FUNC_0(64));
 if (VAR_2) {
  FUNC_3(VAR_1, "couldn't set 64-bit consistent PCI DMA mask\n");
  VAR_2 = FUNC_5(VAR_0, FUNC_0(32));
  if (VAR_2) {
   FUNC_2(VAR_1, "Can't set consistent PCI DMA mask, aborting\n");
   return VAR_2;
  }
 }

 FUNC_1(&VAR_0->dev, 2u * 1024 * 1024 * 1024);
 return VAR_2;
}
