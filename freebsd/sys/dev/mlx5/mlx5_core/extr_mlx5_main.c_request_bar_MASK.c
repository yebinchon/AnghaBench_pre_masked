
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 struct mlx5_core_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = 0;

 if (!(FUNC_3(VAR_3, 0) & VAR_2)) {
  FUNC_0(VAR_4, "Missing registers BAR, aborting\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (VAR_5)
  FUNC_0(VAR_4, "Couldn't get PCI resources, aborting\n");

 return VAR_5;
}
