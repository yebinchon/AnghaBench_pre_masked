
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_mmio_platform_softc {int ih; int * res; int pio_recv; scalar_t__ use_pio; void* ih_user; void* intr_handler; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct virtio_mmio_platform_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *,int ,struct virtio_mmio_platform_softc*,int *) ;
 struct virtio_mmio_platform_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, device_t VAR_7,
   void *VAR_8, void *VAR_9)
{
 struct virtio_mmio_platform_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_6);

 VAR_10->intr_handler = VAR_8;
 VAR_10->ih_user = VAR_9;

 if (VAR_10->use_pio) {
  FUNC_0(VAR_10->pio_recv, VAR_5, VAR_10);
  return (0);
 }

 VAR_11 = 0;
 VAR_10->res[0] = FUNC_1(VAR_6, VAR_4, &VAR_11,
  VAR_3);
 if (!VAR_10->res[0]) {
  FUNC_4(VAR_6, "Can't allocate interrupt\n");
  return (VAR_0);
 }

 if (FUNC_2(VAR_6, VAR_10->res[0], VAR_2 | VAR_1,
  ((void*)0), VAR_5, VAR_10, &VAR_10->ih)) {
  FUNC_4(VAR_6, "Can't setup the interrupt\n");
  return (VAR_0);
 }

 return (0);
}
