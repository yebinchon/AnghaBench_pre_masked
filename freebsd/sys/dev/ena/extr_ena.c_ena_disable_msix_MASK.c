
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int * msix_entries; scalar_t__ msix_vecs; int pdev; } ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 scalar_t__ FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ena_adapter *VAR_2)
{

 if (FUNC_1(VAR_0, VAR_2)) {
  FUNC_0(VAR_0, VAR_2);
  FUNC_3(VAR_2->pdev);
 }

 VAR_2->msix_vecs = 0;
 if (VAR_2->msix_entries != ((void*)0))
  FUNC_2(VAR_2->msix_entries, VAR_1);
 VAR_2->msix_entries = ((void*)0);
}
