
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct TYPE_5__ {int fb_bpp; int fb_depth; int fb_width; int fb_stride; uintptr_t fb_vbase; int * setblankmode; struct udl_softc* fb_priv; scalar_t__ fb_pbase; scalar_t__ fb_height; int fb_size; int fb_name; } ;
struct udl_softc {int sc_def_chip; int sc_chip; int sc_def_mode; int sc_cur_mode; int * sc_fbdev; TYPE_2__ sc_fb_info; scalar_t__ sc_fb_addr; int sc_fb_size; int sc_cmd_buf_free; struct udl_cmd_buf* sc_cmd_buf_temp; int sc_cmd_buf_pending; int * sc_xfer_head; int * sc_xfer; int sc_mtx; int sc_udev; int sc_callout; int sc_cv; } ;
struct udl_cmd_buf {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;
struct TYPE_6__ {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct udl_cmd_buf*,int ) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct udl_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct udl_softc*) ;
 int VAR_12 ;
 int FUNC_7 (struct usb_attach_arg*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,char*) ;
 int * FUNC_10 (int ,char*,int) ;
 struct usb_attach_arg* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct udl_softc* FUNC_13 (int ) ;
 struct sysctl_ctx_list* FUNC_14 (int ) ;
 struct sysctl_oid* FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int,...) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int VAR_13 ;
 int FUNC_19 (int *,char*,int *,int ) ;
 int FUNC_20 (struct udl_softc*) ;
 int VAR_14 ;
 int FUNC_21 (int ) ;
 int VAR_15 ;
 int FUNC_22 (struct udl_softc*) ;
 scalar_t__ FUNC_23 (struct udl_softc*) ;
 scalar_t__ FUNC_24 (struct udl_softc*) ;
 int FUNC_25 (struct udl_softc*) ;
 int FUNC_26 (struct udl_softc*) ;
 int FUNC_27 (struct udl_softc*) ;
 TYPE_3__* VAR_16 ;
 int FUNC_28 (struct udl_softc*,struct usb_attach_arg*) ;
 int FUNC_29 (struct udl_softc*) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int ,int *,int *,int ,int ,struct udl_softc*,int *) ;
 int FUNC_32 (int ,int *) ;

__attribute__((used)) static int
FUNC_33(device_t VAR_17)
{
 struct sysctl_ctx_list *VAR_18 = FUNC_14(VAR_17);
 struct sysctl_oid *VAR_19 = FUNC_15(VAR_17);
 struct udl_softc *VAR_20 = FUNC_13(VAR_17);
 struct usb_attach_arg *VAR_21 = FUNC_11(VAR_17);
 int VAR_22;
 int VAR_23;

 FUNC_18(VAR_17);

 FUNC_19(&VAR_20->sc_mtx, "UDL lock", ((void*)0), VAR_5);
 FUNC_9(&VAR_20->sc_cv, "UDLCV");
 FUNC_8(&VAR_20->sc_callout, &VAR_20->sc_mtx, 0);
 VAR_20->sc_udev = VAR_21->device;

 VAR_22 = FUNC_31(VAR_21->device, &VAR_21->info.bIfaceIndex,
     VAR_20->sc_xfer, VAR_14, VAR_11, VAR_20, &VAR_20->sc_mtx);

 if (VAR_22) {
  FUNC_0("usbd_transfer_setup error=%s\n", FUNC_30(VAR_22));
  goto detach;
 }
 FUNC_32(VAR_20->sc_xfer[VAR_7], &VAR_20->sc_xfer_head[0]);
 FUNC_32(VAR_20->sc_xfer[VAR_8], &VAR_20->sc_xfer_head[1]);

 FUNC_3(&VAR_20->sc_xfer_head[0]);
 FUNC_3(&VAR_20->sc_xfer_head[1]);
 FUNC_3(&VAR_20->sc_cmd_buf_free);
 FUNC_3(&VAR_20->sc_cmd_buf_pending);

 VAR_20->sc_def_chip = -1;
 VAR_20->sc_chip = FUNC_7(VAR_21);
 VAR_20->sc_def_mode = -1;
 VAR_20->sc_cur_mode = VAR_10;


 FUNC_1(VAR_18, FUNC_2(VAR_19), VAR_6, "chipid_force",
     VAR_1, &VAR_20->sc_def_chip, 0, "chip ID");


 FUNC_1(VAR_18, FUNC_2(VAR_19), VAR_6, "chipid",
     VAR_0, &VAR_20->sc_chip, 0, "chip ID");

 if (VAR_20->sc_def_chip > -1 && VAR_20->sc_def_chip <= VAR_2) {
  FUNC_16(VAR_17, "Forcing chip ID to 0x%04x\n", VAR_20->sc_def_chip);
  VAR_20->sc_chip = VAR_20->sc_def_chip;
 }



 if (VAR_20->sc_chip == VAR_3)
  FUNC_28(VAR_20, VAR_21);

 for (VAR_23 = 0; VAR_23 != VAR_9; VAR_23++) {
  struct udl_cmd_buf *VAR_24 = &VAR_20->sc_cmd_buf_temp[VAR_23];

  FUNC_4(&VAR_20->sc_cmd_buf_free, VAR_24, VAR_13);
 }




 VAR_22 = FUNC_26(VAR_20);
 if (VAR_22 != VAR_12)
  goto detach;




 FUNC_29(VAR_20);


 FUNC_1(VAR_18, FUNC_2(VAR_19), VAR_6, "mode_force",
     VAR_1, &VAR_20->sc_def_mode, 0, "mode");


 FUNC_1(VAR_18, FUNC_2(VAR_19), VAR_6, "mode",
     VAR_0, &VAR_20->sc_cur_mode, 0, "mode");

 VAR_23 = VAR_20->sc_def_mode;
 if (VAR_23 > -1 && VAR_23 < VAR_10) {
  if (VAR_16[VAR_23].chip <= VAR_20->sc_chip) {
   FUNC_16(VAR_17, "Forcing mode to %d\n", VAR_23);
   VAR_20->sc_cur_mode = VAR_23;
  }
 }

 FUNC_16(VAR_17, "Mode selected %dx%d @ %dHz\n",
     (int)FUNC_25(VAR_20),
     (int)FUNC_23(VAR_20),
     (int)FUNC_24(VAR_20));

 FUNC_27(VAR_20);


 FUNC_22(VAR_20);

 FUNC_5(VAR_20);
 FUNC_20(VAR_20);
 FUNC_6(VAR_20);

 VAR_20->sc_fb_info.fb_name = FUNC_12(VAR_17);
 VAR_20->sc_fb_info.fb_size = VAR_20->sc_fb_size;
 VAR_20->sc_fb_info.fb_bpp = 16;
 VAR_20->sc_fb_info.fb_depth = 16;
 VAR_20->sc_fb_info.fb_width = FUNC_25(VAR_20);
 VAR_20->sc_fb_info.fb_height = FUNC_23(VAR_20);
 VAR_20->sc_fb_info.fb_stride = VAR_20->sc_fb_info.fb_width * 2;
 VAR_20->sc_fb_info.fb_pbase = 0;
 VAR_20->sc_fb_info.fb_vbase = (uintptr_t)VAR_20->sc_fb_addr;
 VAR_20->sc_fb_info.fb_priv = VAR_20;
 VAR_20->sc_fb_info.setblankmode = &VAR_15;

 VAR_20->sc_fbdev = FUNC_10(VAR_17, "fbd", -1);
 if (VAR_20->sc_fbdev == ((void*)0))
  goto detach;
 if (FUNC_17(VAR_20->sc_fbdev) != 0)
  goto detach;

 return (0);

detach:
 FUNC_21(VAR_17);

 return (VAR_4);
}
