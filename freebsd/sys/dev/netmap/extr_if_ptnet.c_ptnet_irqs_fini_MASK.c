
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptnet_softc {int num_rings; int * msix_mem; struct ptnet_queue* queues; int dev; } ;
struct ptnet_queue {int * irq; int * cookie; int * taskq; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ptnet_softc *VAR_3)
{
 device_t VAR_4 = VAR_3->dev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_rings; VAR_5++) {
  struct ptnet_queue *VAR_6 = VAR_3->queues + VAR_5;

  if (VAR_6->taskq) {
   FUNC_4(VAR_6->taskq);
   VAR_6->taskq = ((void*)0);
  }

  if (VAR_6->cookie) {
   FUNC_2(VAR_4, VAR_6->irq, VAR_6->cookie);
   VAR_6->cookie = ((void*)0);
  }

  if (VAR_6->irq) {
   FUNC_1(VAR_4, VAR_1, VAR_5 + 1, VAR_6->irq);
   VAR_6->irq = ((void*)0);
  }
 }

 if (VAR_3->msix_mem) {
  FUNC_3(VAR_4);

  FUNC_1(VAR_4, VAR_2,
         FUNC_0(VAR_0),
         VAR_3->msix_mem);
  VAR_3->msix_mem = ((void*)0);
 }
}
