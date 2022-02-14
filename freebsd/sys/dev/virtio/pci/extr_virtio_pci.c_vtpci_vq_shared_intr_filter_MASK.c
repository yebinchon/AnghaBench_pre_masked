
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_virtqueue {scalar_t__ vtv_no_intr; int vtv_vq; } ;
struct vtpci_softc {int vtpci_nvqs; struct vtpci_virtqueue* vtpci_vqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2)
{
 struct vtpci_softc *VAR_3;
 struct vtpci_virtqueue *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = 0;
 VAR_3 = VAR_2;
 VAR_4 = &VAR_3->vtpci_vqs[0];

 for (VAR_5 = 0; VAR_5 < VAR_3->vtpci_nvqs; VAR_5++, VAR_4++) {
  if (VAR_4->vtv_no_intr == 0)
   VAR_6 |= FUNC_0(VAR_4->vtv_vq);
 }

 return (VAR_6 ? VAR_0 : VAR_1);
}
