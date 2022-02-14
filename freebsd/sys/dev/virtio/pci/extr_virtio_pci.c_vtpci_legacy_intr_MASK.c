
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vtpci_virtqueue {scalar_t__ vtv_no_intr; int vtv_vq; } ;
struct vtpci_softc {int vtpci_nvqs; struct vtpci_virtqueue* vtpci_vqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vtpci_softc*) ;
 int FUNC_2 (struct vtpci_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct vtpci_softc *VAR_4;
 struct vtpci_virtqueue *VAR_5;
 int VAR_6;
 uint8_t VAR_7;

 VAR_4 = VAR_3;
 VAR_5 = &VAR_4->vtpci_vqs[0];


 VAR_7 = FUNC_2(VAR_4, VAR_0);

 if (VAR_7 & VAR_1)
  FUNC_1(VAR_4);

 if (VAR_7 & VAR_2) {
  for (VAR_6 = 0; VAR_6 < VAR_4->vtpci_nvqs; VAR_6++, VAR_5++) {
   if (VAR_5->vtv_no_intr == 0)
    FUNC_0(VAR_5->vtv_vq);
  }
 }
}
