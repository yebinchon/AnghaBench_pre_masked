
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {int vtcon_flags; int vtcon_ctrl_task; int vtcon_ctrl_tx_mtx; int vtcon_mtx; int vtcon_dev; } ;
struct virtio_console_config {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct vtcon_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vtcon_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct vtcon_softc*) ;
 int FUNC_7 (struct vtcon_softc*) ;
 int FUNC_8 (struct vtcon_softc*) ;
 int FUNC_9 (struct vtcon_softc*,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vtcon_softc*,struct virtio_console_config*) ;
 int FUNC_12 (struct vtcon_softc*) ;
 int VAR_7 ;
 int FUNC_13 (struct vtcon_softc*,int ) ;
 int FUNC_14 (struct vtcon_softc*) ;
 int FUNC_15 (struct vtcon_softc*,struct virtio_console_config*) ;
 int FUNC_16 (struct vtcon_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_8)
{
 struct vtcon_softc *VAR_9;
 struct virtio_console_config VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_8);
 VAR_9->vtcon_dev = VAR_8;

 FUNC_3(&VAR_9->vtcon_mtx, "vtconmtx", ((void*)0), VAR_1);
 FUNC_3(&VAR_9->vtcon_ctrl_tx_mtx, "vtconctrlmtx", ((void*)0), VAR_1);

 FUNC_4(VAR_8, VAR_7);
 FUNC_16(VAR_9);

 FUNC_15(VAR_9, &VAR_10);
 FUNC_11(VAR_9, &VAR_10);

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_8, "cannot allocate softc port structures\n");
  goto fail;
 }

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_8, "cannot allocate virtqueues\n");
  goto fail;
 }

 if (VAR_9->vtcon_flags & VAR_4) {
  FUNC_0(&VAR_9->vtcon_ctrl_task, 0, VAR_6, VAR_9);
  VAR_11 = FUNC_8(VAR_9);
  if (VAR_11)
   goto fail;
 } else {
  VAR_11 = FUNC_13(VAR_9, 0);
  if (VAR_11)
   goto fail;
  if (VAR_9->vtcon_flags & VAR_5)
   FUNC_14(VAR_9);
 }

 VAR_11 = FUNC_5(VAR_8, VAR_0);
 if (VAR_11) {
  FUNC_2(VAR_8, "cannot setup virtqueue interrupts\n");
  goto fail;
 }

 FUNC_12(VAR_9);

 FUNC_9(VAR_9, VAR_2,
     VAR_3, 1);

fail:
 if (VAR_11)
  FUNC_10(VAR_8);

 return (VAR_11);
}
