
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
struct TYPE_4__ {int panel_pxl_clk; int panel_width; int panel_height; int bpp; int panel_hbp; int panel_hfp; int panel_hsw; int panel_vbp; int panel_vfp; int panel_vsw; scalar_t__ hsync_active; scalar_t__ vsync_active; scalar_t__ pixelclk_active; int ac_bias; int ac_bias_intrpt; int dma_burst_sz; int fdd; scalar_t__ sync_edge; scalar_t__ sync_ctrl; } ;
struct TYPE_3__ {intptr_t fb_vbase; int fb_pbase; int fb_size; int fb_bpp; int fb_depth; int fb_stride; int fb_width; int fb_height; int fb_name; } ;
struct am335x_lcd_softc {int sc_fb_phys; int sc_fb_size; int sc_dev; scalar_t__ sc_fb_base; TYPE_2__ sc_panel; TYPE_1__ sc_fb_info; int sc_dma_map; int sc_dma_tag; } ;
typedef int * device_t ;


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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_1 (struct am335x_lcd_softc*,int ) ;
 int VAR_36 ;
 int FUNC_2 (struct am335x_lcd_softc*,int ,int) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,scalar_t__,size_t,int ,int*,int ) ;
 int FUNC_7 (int ,void**,int ,int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__,int,size_t) ;
 int VAR_69 ;
 size_t FUNC_16 (int) ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int ,unsigned int*) ;
 scalar_t__ FUNC_19 (int ,int) ;

__attribute__((used)) static int
FUNC_20(struct am335x_lcd_softc *VAR_70)
{
 int VAR_71;
 uint32_t VAR_72, VAR_73, VAR_74, VAR_75;
 uint32_t VAR_76;
 size_t VAR_77;
 uint32_t VAR_78, VAR_79, VAR_80;
 uint32_t VAR_81, VAR_82, VAR_83;
 uint32_t VAR_84, VAR_85;
 unsigned int VAR_86;
 int VAR_87;





 if (FUNC_19(VAR_19, VAR_70->sc_panel.panel_pxl_clk*2)) {
  FUNC_13(VAR_70->sc_dev, "can't set source frequency\n");
  return (VAR_10);
 }

 if (FUNC_18(VAR_19, &VAR_86)) {
  FUNC_13(VAR_70->sc_dev, "can't get reference frequency\n");
  return (VAR_10);
 }


 VAR_77 = FUNC_16(VAR_70->sc_panel.panel_width*VAR_70->sc_panel.panel_height*VAR_70->sc_panel.bpp/8);




 VAR_87 = FUNC_5(
     FUNC_8(VAR_70->sc_dev),
     4, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_77, 1,
     VAR_77, 0,
     ((void*)0), ((void*)0),
     &VAR_70->sc_dma_tag);
 if (VAR_87)
  goto done;

 VAR_87 = FUNC_7(VAR_70->sc_dma_tag, (void **)&VAR_70->sc_fb_base,
     VAR_0, &VAR_70->sc_dma_map);

 if (VAR_87) {
  FUNC_13(VAR_70->sc_dev, "cannot allocate framebuffer\n");
  goto done;
 }

 VAR_87 = FUNC_6(VAR_70->sc_dma_tag, VAR_70->sc_dma_map, VAR_70->sc_fb_base,
     VAR_77, VAR_68, &VAR_70->sc_fb_phys, VAR_1);

 if (VAR_87) {
  FUNC_13(VAR_70->sc_dev, "cannot load DMA map\n");
  goto done;
 }


 FUNC_15(VAR_70->sc_fb_base, 0x0, VAR_77);


 VAR_70->sc_fb_size = VAR_70->sc_panel.panel_width*VAR_70->sc_panel.panel_height*VAR_70->sc_panel.bpp/8;


 VAR_72 = VAR_9;
 VAR_71 = FUNC_3(VAR_86, VAR_70->sc_panel.panel_pxl_clk);
 VAR_72 |= (VAR_71 << VAR_8);
 FUNC_2(VAR_70, VAR_25, VAR_72);


 VAR_73 = VAR_74 = VAR_75 = 0;

 VAR_78 = VAR_70->sc_panel.panel_hbp - 1;
 VAR_79 = VAR_70->sc_panel.panel_hfp - 1;
 VAR_80 = VAR_70->sc_panel.panel_hsw - 1;

 VAR_81 = VAR_70->sc_panel.panel_vbp;
 VAR_82 = VAR_70->sc_panel.panel_vfp;
 VAR_83 = VAR_70->sc_panel.panel_vsw - 1;

 VAR_85 = VAR_70->sc_panel.panel_height - 1;
 VAR_84 = VAR_70->sc_panel.panel_width - 1;


 VAR_73 |= (VAR_78 & 0xff) << VAR_44;
 VAR_75 |= ((VAR_78 >> 8) & 3) << VAR_55;

 VAR_73 |= (VAR_79 & 0xff) << VAR_45;
 VAR_75 |= ((VAR_79 >> 8) & 3) << VAR_56;

 VAR_73 |= (VAR_80 & 0x3f) << VAR_46;
 VAR_75 |= ((VAR_80 >> 6) & 0xf) << VAR_57;


 VAR_74 |= (VAR_81 & 0xff) << VAR_50;
 VAR_74 |= (VAR_82 & 0xff) << VAR_51;
 VAR_74 |= (VAR_83 & 0x3f) << VAR_52;


 VAR_73 |= ((VAR_84 >> 10) & 1)
     << VAR_48;
 VAR_73 |= ((VAR_84 >> 4) & 0x3f)
     << VAR_47;


 VAR_74 |= (VAR_85 & 0x3ff)
     << VAR_49;
 VAR_75 |= ((VAR_85 >> 10 ) & 1)
     << VAR_61;


 if (VAR_70->sc_panel.sync_ctrl)
  VAR_75 |= VAR_62;
 if (VAR_70->sc_panel.sync_edge)
  VAR_75 |= VAR_64;
 else
  VAR_75 |= VAR_63;
 if (VAR_70->sc_panel.hsync_active == 0)
  VAR_75 |= VAR_58;
 if (VAR_70->sc_panel.vsync_active == 0)
  VAR_75 |= VAR_60;
 if (VAR_70->sc_panel.pixelclk_active == 0)
  VAR_75 |= VAR_59;


 VAR_75 |= (VAR_70->sc_panel.ac_bias << VAR_54);
 VAR_75 |= (VAR_70->sc_panel.ac_bias_intrpt << VAR_53);

 FUNC_2(VAR_70, VAR_33, VAR_73);
 FUNC_2(VAR_70, VAR_34, VAR_74);
 FUNC_2(VAR_70, VAR_35, VAR_75);


 VAR_72 = VAR_21;

 switch (VAR_70->sc_panel.dma_burst_sz) {
 case 1:
  VAR_76 = 0;
  break;
 case 2:
  VAR_76 = 1;
  break;
 case 4:
  VAR_76 = 2;
  break;
 case 8:
  VAR_76 = 3;
  break;
 case 16:
 default:
  VAR_76 = 4;
  break;
 }
 VAR_72 |= (VAR_76 << VAR_20);

 VAR_72 |= (0 << VAR_22);
 FUNC_2(VAR_70, VAR_27, VAR_72);

 FUNC_2(VAR_70, VAR_28, VAR_70->sc_fb_phys);
 FUNC_2(VAR_70, VAR_29, VAR_70->sc_fb_phys + VAR_70->sc_fb_size - 1);
 FUNC_2(VAR_70, VAR_30, VAR_70->sc_fb_phys);
 FUNC_2(VAR_70, VAR_31, VAR_70->sc_fb_phys + VAR_70->sc_fb_size - 1);


 VAR_72 = VAR_39;
 VAR_72 |= (VAR_70->sc_panel.fdd << VAR_41);
 VAR_72 |= (VAR_37 << VAR_40);
 if (VAR_70->sc_panel.bpp >= 24)
  VAR_72 |= VAR_42;
 if (VAR_70->sc_panel.bpp == 32)
  VAR_72 |= VAR_43;
 FUNC_2(VAR_70, VAR_32, VAR_72);

 FUNC_2(VAR_70, VAR_23,
     VAR_5 | VAR_6 | VAR_4);

 FUNC_2(VAR_70, VAR_24, VAR_7);
 FUNC_0(100);
 FUNC_2(VAR_70, VAR_24, 0);

 VAR_72 = VAR_13 | VAR_12 | VAR_15 | VAR_16 |
     VAR_11 | VAR_18 | VAR_17 |
     VAR_14;
 FUNC_2(VAR_70, VAR_26, VAR_72);

 VAR_72 = FUNC_1(VAR_70, VAR_32);
  VAR_72 |= VAR_38;
 FUNC_2(VAR_70, VAR_32, VAR_72);

 FUNC_2(VAR_70, VAR_36,
     VAR_67 | VAR_66);

 VAR_70->sc_fb_info.fb_name = FUNC_11(VAR_70->sc_dev);
 VAR_70->sc_fb_info.fb_vbase = (intptr_t)VAR_70->sc_fb_base;
 VAR_70->sc_fb_info.fb_pbase = VAR_70->sc_fb_phys;
 VAR_70->sc_fb_info.fb_size = VAR_70->sc_fb_size;
 VAR_70->sc_fb_info.fb_bpp = VAR_70->sc_fb_info.fb_depth = VAR_70->sc_panel.bpp;
 VAR_70->sc_fb_info.fb_stride = VAR_70->sc_panel.panel_width*VAR_70->sc_panel.bpp / 8;
 VAR_70->sc_fb_info.fb_width = VAR_70->sc_panel.panel_width;
 VAR_70->sc_fb_info.fb_height = VAR_70->sc_panel.panel_height;
 device_t VAR_88 = FUNC_9(VAR_70->sc_dev, "fbd",
 FUNC_12(VAR_70->sc_dev));
 if (VAR_88 != ((void*)0)) {
  if (FUNC_14(VAR_88) != 0)
   FUNC_13(VAR_70->sc_dev, "failed to attach fbd device\n");
 } else
  FUNC_13(VAR_70->sc_dev, "failed to add fbd child\n");


done:
 return (VAR_87);
}
