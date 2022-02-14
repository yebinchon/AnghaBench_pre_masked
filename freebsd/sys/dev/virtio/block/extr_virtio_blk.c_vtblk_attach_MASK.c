
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {scalar_t__ vtblk_max_nsegs; int vtblk_vq; int * vtblk_sglist; int vtblk_req_ready; int vtblk_req_free; int vtblk_dump_queue; int vtblk_bioq; int vtblk_dev; } ;
struct virtio_blk_config {scalar_t__ size_max; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (struct vtblk_softc*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct vtblk_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vtblk_softc*,struct virtio_blk_config*) ;
 int FUNC_12 (struct vtblk_softc*) ;
 int FUNC_13 (struct vtblk_softc*) ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_15 (struct vtblk_softc*,struct virtio_blk_config*) ;
 int FUNC_16 (struct vtblk_softc*,struct virtio_blk_config*) ;
 int FUNC_17 (struct vtblk_softc*) ;
 int FUNC_18 (struct vtblk_softc*) ;
 int FUNC_19 (struct vtblk_softc*) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_10)
{
 struct vtblk_softc *VAR_11;
 struct virtio_blk_config VAR_12;
 int VAR_13;

 FUNC_7(VAR_10, VAR_9);

 VAR_11 = FUNC_4(VAR_10);
 VAR_11->vtblk_dev = VAR_10;
 FUNC_1(VAR_11, FUNC_3(VAR_10));
 FUNC_2(&VAR_11->vtblk_bioq);
 FUNC_0(&VAR_11->vtblk_dump_queue);
 FUNC_0(&VAR_11->vtblk_req_free);
 FUNC_0(&VAR_11->vtblk_req_ready);

 FUNC_19(VAR_11);
 FUNC_18(VAR_11);

 FUNC_16(VAR_11, &VAR_12);







 if (FUNC_9(VAR_10, VAR_7)) {
  if (VAR_12.size_max < VAR_5) {
   VAR_13 = VAR_2;
   FUNC_5(VAR_10, "host requires unsupported "
       "maximum segment size feature\n");
   goto fail;
  }
 }

 VAR_11->vtblk_max_nsegs = FUNC_15(VAR_11, &VAR_12);
 if (VAR_11->vtblk_max_nsegs <= VAR_8) {
  VAR_13 = VAR_0;
  FUNC_5(VAR_10, "fewer than minimum number of segments "
      "allowed: %d\n", VAR_11->vtblk_max_nsegs);
  goto fail;
 }

 VAR_11->vtblk_sglist = FUNC_6(VAR_11->vtblk_max_nsegs, VAR_6);
 if (VAR_11->vtblk_sglist == ((void*)0)) {
  VAR_13 = VAR_1;
  FUNC_5(VAR_10, "cannot allocate sglist\n");
  goto fail;
 }

 VAR_13 = FUNC_12(VAR_11);
 if (VAR_13) {
  FUNC_5(VAR_10, "cannot allocate virtqueue\n");
  goto fail;
 }

 VAR_13 = FUNC_17(VAR_11);
 if (VAR_13) {
  FUNC_5(VAR_10, "cannot preallocate requests\n");
  goto fail;
 }

 FUNC_11(VAR_11, &VAR_12);

 VAR_13 = FUNC_8(VAR_10, VAR_4 | VAR_3);
 if (VAR_13) {
  FUNC_5(VAR_10, "cannot setup virtqueue interrupt\n");
  goto fail;
 }

 FUNC_13(VAR_11);

 FUNC_10(VAR_11->vtblk_vq);

fail:
 if (VAR_13)
  FUNC_14(VAR_10);

 return (VAR_13);
}
