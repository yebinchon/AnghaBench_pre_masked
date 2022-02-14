
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msix_table_bar; } ;
struct TYPE_4__ {TYPE_1__ msix; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
struct nicpf {int num_vec; int msix_enabled; int dev; int * msix_table_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int
FUNC_4(struct nicpf *VAR_4)
{
 struct pci_devinfo *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_4->dev);
 VAR_6 = VAR_5->cfg.msix.msix_table_bar;
 VAR_4->msix_table_res =
     FUNC_0(VAR_4->dev, VAR_3, &VAR_6, VAR_2);
 if (VAR_4->msix_table_res == ((void*)0)) {
  FUNC_2(VAR_4->dev,
      "Could not allocate memory for MSI-X table\n");
  return (VAR_0);
 }

 VAR_7 = VAR_4->num_vec = VAR_1;

 VAR_8 = FUNC_3(VAR_4->dev, &VAR_7);
 if ((VAR_8 != 0) || (VAR_7 != VAR_4->num_vec)) {
  FUNC_2(VAR_4->dev,
      "Request for #%d msix vectors failed, error: %d\n",
      VAR_4->num_vec, VAR_8);
  return (VAR_8);
 }

 VAR_4->msix_enabled = 1;
 return (0);
}
