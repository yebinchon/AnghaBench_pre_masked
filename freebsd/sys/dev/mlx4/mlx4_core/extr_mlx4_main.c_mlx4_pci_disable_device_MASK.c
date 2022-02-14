
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {scalar_t__ pci_status; int pci_status_mutex; struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->persist->pdev;

 FUNC_0(&VAR_2->persist->pci_status_mutex);
 if (VAR_2->persist->pci_status == VAR_1) {
  FUNC_2(VAR_3);
  VAR_2->persist->pci_status = VAR_0;
 }
 FUNC_1(&VAR_2->persist->pci_status_mutex);
}
