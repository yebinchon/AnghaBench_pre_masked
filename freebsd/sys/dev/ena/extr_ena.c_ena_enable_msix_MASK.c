
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct ena_adapter {int num_queues; int msix_vecs; TYPE_1__* msix_entries; int pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int entry; int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct ena_adapter *VAR_8)
{
 device_t VAR_9 = VAR_8->pdev;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;

 if (FUNC_0(VAR_3, VAR_8)) {
  FUNC_3(VAR_9, "Error, MSI-X is already enabled\n");
  return (VAR_0);
 }


 VAR_10 = FUNC_2(VAR_8->num_queues);

 VAR_8->msix_entries = FUNC_6(VAR_10 * sizeof(struct msix_entry),
     VAR_5, VAR_6 | VAR_7);

 FUNC_4(VAR_2, "trying to enable MSI-X, vectors: %d\n", VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_8->msix_entries[VAR_12].entry = VAR_12;

  VAR_8->msix_entries[VAR_12].vector = VAR_12 + 1;
 }

 VAR_11 = VAR_10;
 VAR_13 = FUNC_7(VAR_9, &VAR_10);
 if (FUNC_9(VAR_13 != 0)) {
  FUNC_3(VAR_9,
      "Failed to enable MSIX, vectors %d rc %d\n", VAR_10, VAR_13);

  VAR_13 = VAR_4;
  goto err_msix_free;
 }

 if (VAR_10 != VAR_11) {
  if (VAR_10 == VAR_1) {
   FUNC_3(VAR_9,
       "Not enough number of MSI-x allocated: %d\n",
       VAR_10);
   FUNC_8(VAR_9);
   VAR_13 = VAR_4;
   goto err_msix_free;
  }
  FUNC_3(VAR_9, "Enable only %d MSI-x (out of %d), reduce "
      "the number of queues\n", VAR_10, VAR_11);
  VAR_8->num_queues = VAR_10 - VAR_1;
 }

 VAR_8->msix_vecs = VAR_10;
 FUNC_1(VAR_3, VAR_8);

 return (0);

err_msix_free:
 FUNC_5(VAR_8->msix_entries, VAR_5);
 VAR_8->msix_entries = ((void*)0);

 return (VAR_13);
}
