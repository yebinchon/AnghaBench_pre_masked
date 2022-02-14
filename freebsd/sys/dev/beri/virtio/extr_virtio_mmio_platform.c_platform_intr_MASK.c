
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_mmio_platform_softc {int ih_user; int (* intr_handler ) (int ) ;int pio_recv; scalar_t__ use_pio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct virtio_mmio_platform_softc *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0;

 if (VAR_1->use_pio) {

  VAR_2 = FUNC_0(VAR_1->pio_recv);


  FUNC_1(VAR_1->pio_recv, VAR_2, 0);
 }


 FUNC_2();

 if (VAR_1->intr_handler != ((void*)0))
  VAR_1->intr_handler(VAR_1->ih_user);
}
