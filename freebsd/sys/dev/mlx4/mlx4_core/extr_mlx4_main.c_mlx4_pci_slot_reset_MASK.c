
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx4_dev_persistent {struct mlx4_dev* dev; } ;
struct mlx4_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,char*,...) ;
 int FUNC_1 (struct mlx4_dev*) ;
 struct mlx4_dev_persistent* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_2)
{
 struct mlx4_dev_persistent *VAR_3 = FUNC_2(VAR_2);
 struct mlx4_dev *VAR_4 = VAR_3->dev;
 int VAR_5;

 FUNC_0(VAR_4, "mlx4_pci_slot_reset was called\n");
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4, "Can not re-enable device, err=%d\n", VAR_5);
  return VAR_0;
 }

 FUNC_3(VAR_2);
 return VAR_1;
}
