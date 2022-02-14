
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {intptr_t fb_vbase; int fb_size; int fb_bpp; int fb_depth; int fb_stride; int fb_width; int fb_height; int fb_pbase; int fb_name; } ;
struct ipu_softc {int sc_fb_size; int sc_dev; TYPE_2__* sc_mode; TYPE_1__ sc_fb_info; int sc_fb_phys; scalar_t__ sc_fb_base; int sc_dma_map; int sc_dma_tag; } ;
typedef int * device_t ;
struct TYPE_4__ {int hdisplay; int vdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct ipu_softc*,int) ;
 int FUNC_2 (struct ipu_softc*,int,int) ;
 int VAR_19 ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,size_t,int ,int *,int ) ;
 int FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (struct ipu_softc*,scalar_t__) ;
 int FUNC_13 (struct ipu_softc*) ;
 int FUNC_14 (struct ipu_softc*,scalar_t__) ;
 int FUNC_15 (struct ipu_softc*,int ) ;
 int FUNC_16 (struct ipu_softc*,int ,int,int,int) ;
 int FUNC_17 (struct ipu_softc*,scalar_t__) ;
 int VAR_20 ;
 int FUNC_18 (struct ipu_softc*) ;
 size_t FUNC_19 (int) ;

__attribute__((used)) static int
FUNC_20(struct ipu_softc *VAR_21)
{
 uint32_t VAR_22, VAR_23;
 int VAR_24, VAR_25;
 size_t VAR_26;

 FUNC_2(VAR_21, VAR_8, VAR_5 ? VAR_11 : VAR_10);

 FUNC_2(VAR_21, VAR_16, VAR_17);
 VAR_24 = 1000;
 while (VAR_24-- > 0) {
  if (!(FUNC_1(VAR_21, VAR_16) & VAR_18))
   break;
  FUNC_0(1);
 }

 if (VAR_24 <= 0) {
  VAR_25 = VAR_7;
  FUNC_10(VAR_21->sc_dev, "timeout while resetting memory\n");
  goto fail;
 }

 FUNC_15(VAR_21, 0);
 FUNC_16(VAR_21, 0, 0, 7, 0xff);
 FUNC_16(VAR_21, 0, 1, 15, 0xff);
 FUNC_16(VAR_21, 0, 2, 23, 0xff);

 VAR_26 = FUNC_19(VAR_21->sc_mode->hdisplay * VAR_21->sc_mode->vdisplay * (VAR_19 / 8));




 VAR_25 = FUNC_3(
     FUNC_6(VAR_21->sc_dev),
     4, 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_26, 1,
     VAR_26, 0,
     ((void*)0), ((void*)0),
     &VAR_21->sc_dma_tag);
 if (VAR_25)
  goto fail;

 VAR_25 = FUNC_5(VAR_21->sc_dma_tag, (void **)&VAR_21->sc_fb_base,
     VAR_0 | VAR_2, &VAR_21->sc_dma_map);

 if (VAR_25) {
  FUNC_10(VAR_21->sc_dev, "cannot allocate framebuffer\n");
  goto fail;
 }

 VAR_25 = FUNC_4(VAR_21->sc_dma_tag, VAR_21->sc_dma_map, VAR_21->sc_fb_base,
     VAR_26, VAR_20, &VAR_21->sc_fb_phys, VAR_1);

 if (VAR_25) {
  FUNC_10(VAR_21->sc_dev, "cannot load DMA map\n");
  goto fail;
 }


 VAR_21->sc_fb_size = VAR_21->sc_mode->hdisplay * VAR_21->sc_mode->vdisplay * VAR_19 / 8;

 FUNC_14(VAR_21, VAR_5);
 VAR_22 = FUNC_1(VAR_21, VAR_8);
 VAR_22 |= VAR_12 | VAR_9 | VAR_13;
 FUNC_2(VAR_21, VAR_8, VAR_22);

 FUNC_12(VAR_21, VAR_5);
 FUNC_18(VAR_21);
 FUNC_17(VAR_21, VAR_5);


 VAR_23 = (VAR_6 > 31) ? VAR_15 : VAR_14;
 VAR_22 = FUNC_1(VAR_21, VAR_23);
 VAR_22 |= (1 << (VAR_6 & 0x1f));
 FUNC_2(VAR_21, VAR_23, VAR_22);

 FUNC_13(VAR_21);

 VAR_21->sc_fb_info.fb_name = FUNC_8(VAR_21->sc_dev);
 VAR_21->sc_fb_info.fb_vbase = (intptr_t)VAR_21->sc_fb_base;
 VAR_21->sc_fb_info.fb_pbase = VAR_21->sc_fb_phys;
 VAR_21->sc_fb_info.fb_size = VAR_21->sc_fb_size;
 VAR_21->sc_fb_info.fb_bpp = VAR_21->sc_fb_info.fb_depth = VAR_19;
 VAR_21->sc_fb_info.fb_stride = VAR_21->sc_mode->hdisplay * VAR_19 / 8;
 VAR_21->sc_fb_info.fb_width = VAR_21->sc_mode->hdisplay;
 VAR_21->sc_fb_info.fb_height = VAR_21->sc_mode->vdisplay;

 device_t VAR_27 = FUNC_7(VAR_21->sc_dev, "fbd",
     FUNC_9(VAR_21->sc_dev));
 if (VAR_27 == ((void*)0)) {
  FUNC_10(VAR_21->sc_dev, "Failed to add fbd child\n");
  goto fail;
 }
 if (FUNC_11(VAR_27) != 0) {
  FUNC_10(VAR_21->sc_dev, "Failed to attach fbd device\n");
  goto fail;
 }

 return (0);
fail:

 return (VAR_25);
}
