
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_blk_config {int dummy; } ;
struct beri_vtblk_softc {TYPE_1__* cdev; int pio_recv; int pio_send; int beri_mem_offset; int vtblk_ktd; int dev; int sc_mtx; int cfg; int * res; int bsh; int bst; } ;
typedef int device_t ;
struct TYPE_2__ {struct beri_vtblk_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 struct beri_vtblk_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct beri_vtblk_softc*,int *,int *,int ,int ,char*) ;
 TYPE_1__* FUNC_5 (int *,int ,int ,int ,int ,char*) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_10)
{
 struct beri_vtblk_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_10);
 VAR_11->dev = VAR_10;

 if (FUNC_0(VAR_10, VAR_8, VAR_11->res)) {
  FUNC_3(VAR_10, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_11->bst = FUNC_8(VAR_11->res[0]);
 VAR_11->bsh = FUNC_7(VAR_11->res[0]);

 VAR_11->cfg = FUNC_6(sizeof(struct virtio_blk_config),
  VAR_2, VAR_3|VAR_4);

 FUNC_11(&VAR_11->sc_mtx, FUNC_1(VAR_11->dev));

 VAR_12 = FUNC_4(VAR_9, VAR_11, ((void*)0), &VAR_11->vtblk_ktd,
  0, 0, "beri_virtio_block");
 if (VAR_12) {
  FUNC_3(VAR_10, "cannot create kthread\n");
  return (VAR_0);
 }

 if (FUNC_9(VAR_10, &VAR_11->beri_mem_offset) != 0)
  return (VAR_0);
 if (FUNC_10(VAR_10, "pio-send", &VAR_11->pio_send) != 0)
  return (VAR_0);
 if (FUNC_10(VAR_10, "pio-recv", &VAR_11->pio_recv) != 0)
  return (VAR_0);

 VAR_11->cdev = FUNC_5(&VAR_7, 0, VAR_6, VAR_1,
     VAR_5, "beri_vtblk");
 if (VAR_11->cdev == ((void*)0)) {
  FUNC_3(VAR_10, "Failed to create character device.\n");
  return (VAR_0);
 }

 VAR_11->cdev->si_drv1 = VAR_11;
 return (0);
}
