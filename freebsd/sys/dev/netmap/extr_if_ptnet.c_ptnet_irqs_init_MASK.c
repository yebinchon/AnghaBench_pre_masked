
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptnet_softc {int num_rings; int num_tx_rings; int dev; struct ptnet_queue* queues; int * msix_mem; } ;
struct ptnet_queue {int taskq; int task; int * irq; int cookie; } ;
typedef int device_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,void (*) (void*,int),struct ptnet_queue*) ;
 void* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int ,char*,int) ;
 int FUNC_7 (int ,int *,int,int *,void (*) (void*),struct ptnet_queue*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,int*) ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ptnet_softc*) ;
 void FUNC_14 (void*) ;
 void FUNC_15 (void*,int) ;
 void FUNC_16 (void*) ;
 void FUNC_17 (void*,int) ;
 int FUNC_18 (char*,int ,int ,int *) ;
 int FUNC_19 (int *,int,int ,char*,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_20(struct ptnet_softc *VAR_12)
{
 int VAR_13 = FUNC_2(VAR_7);
 int VAR_14 = VAR_12->num_rings;
 device_t VAR_15 = VAR_12->dev;
 int VAR_16 = VAR_0;
 int VAR_17;
 int VAR_18;

 if (FUNC_11(VAR_15, VAR_5, ((void*)0)) != 0) {
  FUNC_9(VAR_15, "Could not find MSI-X capability\n");
  return (VAR_1);
 }

 VAR_12->msix_mem = FUNC_4(VAR_15, VAR_10,
           &VAR_13, VAR_8);
 if (VAR_12->msix_mem == ((void*)0)) {
  FUNC_9(VAR_15, "Failed to allocate MSIX PCI BAR\n");
  return (VAR_1);
 }

 if (FUNC_12(VAR_15) < VAR_14) {
  FUNC_9(VAR_15, "Not enough MSI-X vectors\n");
  goto err_path;
 }

 VAR_16 = FUNC_10(VAR_15, &VAR_14);
 if (VAR_16) {
  FUNC_9(VAR_15, "Failed to allocate MSI-X vectors\n");
  goto err_path;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  struct ptnet_queue *VAR_19 = VAR_12->queues + VAR_18;

  VAR_13 = VAR_18 + 1;
  VAR_19->irq = FUNC_4(VAR_15, VAR_9, &VAR_13,
       VAR_8);
  if (VAR_19->irq == ((void*)0)) {
   FUNC_9(VAR_15, "Failed to allocate interrupt "
        "for queue #%d\n", VAR_18);
   VAR_16 = VAR_0;
   goto err_path;
  }
 }

 VAR_17 = FUNC_0();
 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  struct ptnet_queue *VAR_20 = VAR_12->queues + VAR_18;
  void (*VAR_21)(void *) = FUNC_16;

  if (VAR_18 >= VAR_12->num_tx_rings) {
   VAR_21 = FUNC_14;
  }
  VAR_16 = FUNC_7(VAR_15, VAR_20->irq, VAR_3 | VAR_2,
         ((void*)0) , VAR_21,
         VAR_20, &VAR_20->cookie);
  if (VAR_16) {
   FUNC_9(VAR_15, "Failed to register intr handler "
        "for queue #%d\n", VAR_18);
   goto err_path;
  }

  FUNC_6(VAR_15, VAR_20->irq, VAR_20->cookie, "q%d", VAR_18);



  VAR_17 = FUNC_1(VAR_17);
 }

 FUNC_9(VAR_15, "Allocated %d MSI-X vectors\n", VAR_14);

 VAR_17 = FUNC_0();
 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  struct ptnet_queue *VAR_22 = VAR_12->queues + VAR_18;
  static void (*VAR_23)(void *VAR_24, int VAR_25);

  VAR_23 = (VAR_18 < VAR_12->num_tx_rings) ? FUNC_17 : FUNC_15;

  FUNC_3(&VAR_22->task, 0, VAR_23, VAR_22);
  VAR_22->taskq = FUNC_18("ptnet_queue", VAR_4,
     VAR_11, &VAR_22->taskq);
  FUNC_19(&VAR_22->taskq, 1, VAR_6, "%s-pq-%d",
     FUNC_8(VAR_12->dev), VAR_17);
  VAR_17 = FUNC_1(VAR_17);
 }

 return 0;
err_path:
 FUNC_13(VAR_12);
 return VAR_16;
}
