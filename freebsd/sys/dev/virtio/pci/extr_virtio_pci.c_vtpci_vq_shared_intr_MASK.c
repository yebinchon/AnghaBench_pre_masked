
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_virtqueue {scalar_t__ vtv_no_intr; int vtv_vq; } ;
struct vtpci_softc {int vtpci_nvqs; struct vtpci_virtqueue* vtpci_vqs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct vtpci_softc *VAR_1;
 struct vtpci_virtqueue *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0;
 VAR_2 = &VAR_1->vtpci_vqs[0];

 for (VAR_3 = 0; VAR_3 < VAR_1->vtpci_nvqs; VAR_3++, VAR_2++) {
  if (VAR_2->vtv_no_intr == 0)
   FUNC_0(VAR_2->vtv_vq);
 }
}
