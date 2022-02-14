
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx5_core_dev {scalar_t__ pci_status; int pci_status_mutex; struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 int VAR_4 = 0;

 FUNC_0(&VAR_2->pci_status_mutex);
 if (VAR_2->pci_status == VAR_0) {
  VAR_4 = FUNC_2(VAR_3);
  if (!VAR_4)
   VAR_2->pci_status = VAR_1;
 }
 FUNC_1(&VAR_2->pci_status_mutex);

 return VAR_4;
}
