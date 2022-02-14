
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ft5406ts_softc {int sc_tick; int sc_mtx; int sc_callout; int * touch_buf; int * sc_evdev; int sc_dev; int sc_init_hook; } ;
struct TYPE_7__ {scalar_t__ address; } ;
struct TYPE_8__ {TYPE_3__ resp; } ;
struct TYPE_6__ {int val_buf_size; int val_len; int tag; } ;
struct TYPE_5__ {int buf_size; int code; } ;
struct bcm2835_mbox_tag_touchbuf {TYPE_4__ body; scalar_t__ end_tag; TYPE_2__ tag_hdr; TYPE_1__ hdr; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bcm2835_mbox_tag_touchbuf*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 int FUNC_12 (int *,struct ft5406ts_softc*,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_18 (struct bcm2835_mbox_tag_touchbuf*,int ,int) ;
 scalar_t__ FUNC_19 (int ,int ) ;

__attribute__((used)) static void
FUNC_20(void *VAR_22)
{
 struct ft5406ts_softc *VAR_23 = VAR_22;
 struct bcm2835_mbox_tag_touchbuf VAR_24;
 uint32_t VAR_25;
 int VAR_26;


 FUNC_3(&VAR_23->sc_init_hook);

 FUNC_18(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.hdr.buf_size = sizeof(VAR_24);
 VAR_24.hdr.code = VAR_4;
 VAR_24.tag_hdr.tag = VAR_5;
 VAR_24.tag_hdr.val_buf_size = sizeof(VAR_24.body);
 VAR_24.tag_hdr.val_len = sizeof(VAR_24.body);
 VAR_24.end_tag = 0;


 VAR_26 = FUNC_1(&VAR_24, sizeof(VAR_24));
 if (VAR_26) {
  FUNC_6(VAR_23->sc_dev, "failed to get touchbuf address\n");
  return;
 }

 if (VAR_24.body.resp.address == 0) {
  FUNC_6(VAR_23->sc_dev, "touchscreen not detected\n");
  return;
 }

 VAR_25 = FUNC_0(VAR_24.body.resp.address);
 VAR_23->touch_buf = (uint8_t*)FUNC_19(VAR_25, VAR_12);


 VAR_23->sc_tick = VAR_21 * 17 / 1000;
 if (VAR_23->sc_tick == 0)
  VAR_23->sc_tick = 1;

 VAR_23->sc_evdev = FUNC_7();
 FUNC_13(VAR_23->sc_evdev, FUNC_4(VAR_23->sc_dev));
 FUNC_14(VAR_23->sc_evdev, FUNC_5(VAR_23->sc_dev));
 FUNC_11(VAR_23->sc_evdev, VAR_6, 0, 0, 0);
 FUNC_12(VAR_23->sc_evdev, VAR_23, &VAR_20);
 FUNC_10(VAR_23->sc_evdev, VAR_8);
 FUNC_10(VAR_23->sc_evdev, VAR_7);
 FUNC_17(VAR_23->sc_evdev, VAR_13);
 FUNC_16(VAR_23->sc_evdev, VAR_10);
 FUNC_16(VAR_23->sc_evdev, VAR_9);

 FUNC_15(VAR_23->sc_evdev, VAR_2, 0, 0,
     VAR_14, 0, 0, 0);
 FUNC_15(VAR_23->sc_evdev, VAR_3, 0, -1,
     VAR_14, 0, 0, 0);
 FUNC_15(VAR_23->sc_evdev, VAR_0, 0, 0,
     VAR_19, 0, 0, VAR_17);
 FUNC_15(VAR_23->sc_evdev, VAR_1, 0, 0,
     VAR_16, 0, 0, VAR_18);

 VAR_26 = FUNC_9(VAR_23->sc_evdev, &VAR_23->sc_mtx);
 if (VAR_26) {
  FUNC_8(VAR_23->sc_evdev);
  VAR_23->sc_evdev = ((void*)0);
  return;
 }

 VAR_23->touch_buf[VAR_11] = VAR_15;
 FUNC_2(&VAR_23->sc_callout, &VAR_23->sc_mtx, 0);
}
