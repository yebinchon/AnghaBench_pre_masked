
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_msix {scalar_t__ msix_alloc; int msix_msgnum; int msix_table_len; int msix_ctrl; scalar_t__ msix_location; struct msix_vector* msix_vectors; struct msix_table_entry* msix_table; } ;
struct TYPE_2__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
struct msix_vector {int mv_data; int mv_address; } ;
struct msix_table_entry {int mte_vector; scalar_t__ mte_handlers; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__,int ,int) ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1)
{
 struct pci_devinfo *VAR_2 = FUNC_0(VAR_1);
 struct pcicfg_msix *VAR_3 = &VAR_2->cfg.msix;
 struct msix_table_entry *VAR_4;
 struct msix_vector *VAR_5;
 int VAR_6;

 if (VAR_3->msix_alloc > 0) {

  for (VAR_6 = 0; VAR_6 < VAR_3->msix_msgnum; VAR_6++)
   FUNC_1(VAR_1, VAR_6);


  for (VAR_6 = 0; VAR_6 < VAR_3->msix_table_len; VAR_6++) {
   VAR_4 = &VAR_3->msix_table[VAR_6];
   if (VAR_4->mte_vector == 0 || VAR_4->mte_handlers == 0)
    continue;
   VAR_5 = &VAR_3->msix_vectors[VAR_4->mte_vector - 1];
   FUNC_4(VAR_1, VAR_6, VAR_5->mv_address,
       VAR_5->mv_data);
   FUNC_2(VAR_1, VAR_6);
  }
 }
 FUNC_3(VAR_1, VAR_3->msix_location + VAR_0,
     VAR_3->msix_ctrl, 2);
}
