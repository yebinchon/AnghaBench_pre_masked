
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int * vtscsi_sglist; int vtscsi_max_nsegs; int vtscsi_event_buf_size; int vtscsi_max_lun; int vtscsi_max_target; int vtscsi_max_channel; int vtscsi_flags; int vtscsi_req_free; int vtscsi_dev; } ;
struct virtio_scsi_config {int seg_max; int event_info_size; int max_lun; int max_target; int max_channel; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct vtscsi_softc*,int ) ;
 int FUNC_2 (int ) ;
 struct vtscsi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (struct vtscsi_softc*) ;
 int FUNC_10 (struct vtscsi_softc*) ;
 int FUNC_11 (struct vtscsi_softc*) ;
 int FUNC_12 (struct vtscsi_softc*) ;
 int FUNC_13 (struct vtscsi_softc*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct vtscsi_softc*) ;
 int VAR_9 ;
 int FUNC_16 (struct vtscsi_softc*) ;
 int FUNC_17 (struct vtscsi_softc*) ;
 int FUNC_18 (struct vtscsi_softc*,int ) ;
 int FUNC_19 (struct vtscsi_softc*) ;
 int FUNC_20 (struct vtscsi_softc*,struct virtio_scsi_config*) ;
 int FUNC_21 (struct vtscsi_softc*) ;
 int FUNC_22 (struct vtscsi_softc*) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_10)
{
 struct vtscsi_softc *VAR_11;
 struct virtio_scsi_config VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_10);
 VAR_11->vtscsi_dev = VAR_10;

 FUNC_1(VAR_11, FUNC_2(VAR_10));
 FUNC_0(&VAR_11->vtscsi_req_free);

 FUNC_16(VAR_11);
 FUNC_9(VAR_11);

 FUNC_6(VAR_10, VAR_9);
 FUNC_19(VAR_11);

 if (FUNC_8(VAR_10, VAR_3))
  VAR_11->vtscsi_flags |= VAR_8;
 if (FUNC_8(VAR_10, VAR_5))
  VAR_11->vtscsi_flags |= VAR_6;
 if (FUNC_8(VAR_10, VAR_4))
  VAR_11->vtscsi_flags |= VAR_7;

 FUNC_20(VAR_11, &VAR_12);

 VAR_11->vtscsi_max_channel = VAR_12.max_channel;
 VAR_11->vtscsi_max_target = VAR_12.max_target;
 VAR_11->vtscsi_max_lun = VAR_12.max_lun;
 VAR_11->vtscsi_event_buf_size = VAR_12.event_info_size;

 FUNC_22(VAR_11);

 VAR_11->vtscsi_max_nsegs = FUNC_18(VAR_11, VAR_12.seg_max);
 VAR_11->vtscsi_sglist = FUNC_5(VAR_11->vtscsi_max_nsegs, VAR_2);
 if (VAR_11->vtscsi_sglist == ((void*)0)) {
  VAR_13 = VAR_0;
  FUNC_4(VAR_10, "cannot allocate sglist\n");
  goto fail;
 }

 VAR_13 = FUNC_12(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_10, "cannot allocate virtqueues\n");
  goto fail;
 }

 FUNC_13(VAR_11);

 VAR_13 = FUNC_17(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_10, "cannot populate the eventvq\n");
  goto fail;
 }

 VAR_13 = FUNC_11(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_10, "cannot allocate requests\n");
  goto fail;
 }

 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_10, "cannot allocate CAM structures\n");
  goto fail;
 }

 VAR_13 = FUNC_7(VAR_10, VAR_1);
 if (VAR_13) {
  FUNC_4(VAR_10, "cannot setup virtqueue interrupts\n");
  goto fail;
 }

 FUNC_15(VAR_11);





 VAR_13 = FUNC_21(VAR_11);
 if (VAR_13) {
  FUNC_4(VAR_10, "cannot register with CAM\n");
  goto fail;
 }

fail:
 if (VAR_13)
  FUNC_14(VAR_10);

 return (VAR_13);
}
