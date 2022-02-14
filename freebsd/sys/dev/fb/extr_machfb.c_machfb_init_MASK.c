
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int vi_height; int vi_width; int vi_cwidth; int vi_cheight; int vi_mem_model; int vi_flags; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_15__ {int va_flags; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
struct machfb_softc {int sc_chip_id; int sc_ramdac_freq; int sc_chip_rev; int sc_node; char sc_height; char sc_width; char sc_depth; int sc_xmargin; int sc_ymargin; int sc_memsize; int sc_memtype; int sc_ref_freq; int sc_ref_div; int sc_mclk_fb_div; int sc_mem_freq; int sc_mclk_post_div; int sc_flags; int sc_cbwidth; int sc_font; } ;
typedef int phandle_t ;
typedef int buf ;
struct TYPE_17__ {int red; int green; int blue; } ;
struct TYPE_16__ {int chip_id; int ramdac_freq; } ;
struct TYPE_13__ {int width; int height; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_12__ VAR_30 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_9__* VAR_31 ;
 int FUNC_6 (struct machfb_softc*) ;
 TYPE_5__* VAR_32 ;
 int FUNC_7 (struct machfb_softc*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct machfb_softc*,int ) ;
 void* FUNC_11 (struct machfb_softc*,scalar_t__) ;
 int FUNC_12 (struct machfb_softc*,scalar_t__,int) ;
 void* FUNC_13 (char*,int *,int) ;
 int FUNC_14 (TYPE_2__*,int ,int,int) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_16(int VAR_33, video_adapter_t *VAR_34, int VAR_35)
{
 struct machfb_softc *VAR_36;
 phandle_t VAR_37;
 video_info_t *VAR_38;
 char VAR_39[32];
 int VAR_40;
 uint8_t VAR_41, VAR_42, VAR_43;

 VAR_36 = (struct machfb_softc *)VAR_34;
 VAR_38 = &VAR_34->va_info;

 if ((FUNC_10(VAR_36, VAR_8) & 0xffff) != VAR_36->sc_chip_id)
  return (VAR_14);

 VAR_36->sc_ramdac_freq = 0;
 for (VAR_40 = 0; VAR_40 < FUNC_9(VAR_32); VAR_40++) {
  if (VAR_36->sc_chip_id == VAR_32[VAR_40].chip_id) {
   VAR_36->sc_ramdac_freq = VAR_32[VAR_40].ramdac_freq;
   break;
  }
 }
 if (VAR_36->sc_ramdac_freq == 0)
  return (VAR_14);
 if (VAR_36->sc_chip_id == VAR_2 && VAR_36->sc_chip_rev & 0x07)
  VAR_36->sc_ramdac_freq = 170000;

 FUNC_14(VAR_34, VAR_16, -1, VAR_33);

 if (FUNC_1(VAR_36->sc_node, "height", &VAR_36->sc_height,
     sizeof(VAR_36->sc_height)) == -1)
  return (VAR_14);
 if (FUNC_1(VAR_36->sc_node, "width", &VAR_36->sc_width,
     sizeof(VAR_36->sc_width)) == -1)
  return (VAR_14);
 if (FUNC_1(VAR_36->sc_node, "depth", &VAR_36->sc_depth,
     sizeof(VAR_36->sc_depth)) == -1)
  return (VAR_14);
 if ((VAR_37 = FUNC_0("/options")) == -1)
  return (VAR_14);
 if (FUNC_1(VAR_37, "screen-#rows", VAR_39, sizeof(VAR_39)) == -1)
  return (VAR_14);
 VAR_38->vi_height = FUNC_13(VAR_39, ((void*)0), 10);
 if (FUNC_1(VAR_37, "screen-#columns", VAR_39, sizeof(VAR_39)) == -1)
  return (VAR_14);
 VAR_38->vi_width = FUNC_13(VAR_39, ((void*)0), 10);
 VAR_38->vi_cwidth = VAR_30;
 VAR_38->vi_cheight = VAR_30;
 VAR_38->vi_flags = VAR_28;
 VAR_38->vi_mem_model = VAR_29;

 VAR_36->sc_font = VAR_30;
 VAR_36->sc_cbwidth = FUNC_2(VAR_38->vi_cwidth, VAR_19);
 VAR_36->sc_xmargin = (VAR_36->sc_width - (VAR_38->vi_width * VAR_38->vi_cwidth)) / 2;
 VAR_36->sc_ymargin = (VAR_36->sc_height - (VAR_38->vi_height * VAR_38->vi_cheight)) / 2;

 if (VAR_36->sc_chip_id != VAR_0 &&
     !((VAR_36->sc_chip_id == VAR_1 ||
     VAR_36->sc_chip_id == VAR_2) &&
     (VAR_36->sc_chip_rev & 0x07) == 0))
  VAR_36->sc_flags |= VAR_17;

 VAR_36->sc_memsize = FUNC_6(VAR_36);
 if (VAR_36->sc_memsize == 8192)

  VAR_36->sc_memsize -= 4;
 VAR_36->sc_memtype = FUNC_10(VAR_36, VAR_9) & 0x07;

 if ((VAR_36->sc_chip_id >= VAR_4 &&
     VAR_36->sc_chip_id <= VAR_6) ||
     (VAR_36->sc_chip_id >= VAR_5 &&
     VAR_36->sc_chip_id <= VAR_3))
  VAR_36->sc_ref_freq = 29498;
 else
  VAR_36->sc_ref_freq = 14318;

 FUNC_12(VAR_36, VAR_7 + 1, VAR_20 << 2);
 VAR_36->sc_ref_div = FUNC_11(VAR_36, VAR_7 + 2);
 FUNC_12(VAR_36, VAR_7 + 1, VAR_18 << 2);
 VAR_36->sc_mclk_fb_div = FUNC_11(VAR_36, VAR_7 + 2);
 VAR_36->sc_mem_freq = (2 * VAR_36->sc_ref_freq * VAR_36->sc_mclk_fb_div) /
     (VAR_36->sc_ref_div * 2);
 VAR_36->sc_mclk_post_div = (VAR_36->sc_mclk_fb_div * 2 * VAR_36->sc_ref_freq) /
     (VAR_36->sc_mem_freq * VAR_36->sc_ref_div);

 FUNC_7(VAR_36);



 FUNC_8(VAR_34, 0);
 VAR_42 = FUNC_11(VAR_36, VAR_12);
 VAR_43 = FUNC_11(VAR_36, VAR_13);
 VAR_41 = FUNC_11(VAR_36, VAR_11);
 FUNC_12(VAR_36, VAR_11, 0xff);
 FUNC_12(VAR_36, VAR_13, VAR_15);
 for (VAR_40 = 0; VAR_40 < 16; VAR_40++) {
  FUNC_12(VAR_36, VAR_10, VAR_31[VAR_40].red);
  FUNC_12(VAR_36, VAR_10, VAR_31[VAR_40].green);
  FUNC_12(VAR_36, VAR_10, VAR_31[VAR_40].blue);
 }
 FUNC_12(VAR_36, VAR_11, VAR_41);
 FUNC_12(VAR_36, VAR_12, VAR_42);
 FUNC_12(VAR_36, VAR_13, VAR_43);

 FUNC_4(VAR_34, VAR_27);
 FUNC_5(VAR_34);






 VAR_34->va_flags |= VAR_22 | VAR_24 | VAR_25 |
     VAR_21 | VAR_23;
 if (FUNC_15(VAR_34) < 0)
  return (VAR_14);
 VAR_34->va_flags |= VAR_26;

 return (0);
}
