
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct video_adapter_softc {int fb_size; int width; int height; int depth; int stride; int va; scalar_t__ fb_addr; } ;
struct versatile_clcdc_softc {int width; int height; int mode; int fb_phys; scalar_t__ dma_tag; int dma_map; scalar_t__ fb_base; int * mem_res; } ;
typedef int device_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
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
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,int,int ,int*,int ) ;
 int FUNC_5 (scalar_t__,void**,int ,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct versatile_clcdc_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (int ,int) ;
 struct video_adapter_softc VAR_25 ;
 int FUNC_14 (struct versatile_clcdc_softc*,int ,int) ;
 int VAR_26 ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_27)
{
 struct versatile_clcdc_softc *VAR_28 = FUNC_9(VAR_27);
 struct video_adapter_softc *VAR_29 = &VAR_25;
 int VAR_30, VAR_31;
 uint32_t VAR_32;
 int VAR_33;
 int VAR_34;


 VAR_31 = 0;
 VAR_28->mem_res = FUNC_1(VAR_27, VAR_24, &VAR_31, VAR_16);
 if (VAR_28->mem_res == ((void*)0)) {
  FUNC_11(VAR_27, "could not allocate memory resources\n");
  return (VAR_15);
 }

 VAR_30 = FUNC_15(VAR_17, &VAR_32);
 if (VAR_30) {
  FUNC_11(VAR_27, "failed to read SCM register\n");
  goto fail;
 }
 VAR_33 = (VAR_32 >> VAR_19) & VAR_18;
 switch (VAR_33) {
  case 31:
   FUNC_11(VAR_27, "QEMU VGA 640x480\n");
   VAR_28->width = 640;
   VAR_28->height = 480;
   break;
  default:
   FUNC_11(VAR_27, "Unsupported: %d\n", VAR_33);
   goto fail;
 }

 VAR_32 &= ~VAR_20;
 VAR_32 |= VAR_8;
 VAR_28->mode = VAR_8;
 FUNC_16(VAR_17, VAR_32);
  VAR_34 = VAR_28->width*VAR_28->height*2;




 VAR_32 |= VAR_22 | VAR_21;
 FUNC_16(VAR_17, VAR_32);
 FUNC_14(VAR_28, VAR_4, 0x3F1F3F9C);
 FUNC_14(VAR_28, VAR_5, 0x090B61DF);
 FUNC_14(VAR_28, VAR_6, 0x067F1800);





 VAR_30 = FUNC_2(
     FUNC_7(VAR_27),
     4, 0,
     VAR_2,
     VAR_1,
     ((void*)0), ((void*)0),
     VAR_34, 1,
     VAR_34, 0,
     ((void*)0), ((void*)0),
     &VAR_28->dma_tag);

 VAR_30 = FUNC_5(VAR_28->dma_tag, (void **)&VAR_28->fb_base,
     0, &VAR_28->dma_map);
 if (VAR_30) {
  FUNC_11(VAR_27, "cannot allocate framebuffer\n");
  goto fail;
 }

 VAR_30 = FUNC_4(VAR_28->dma_tag, VAR_28->dma_map, VAR_28->fb_base,
     VAR_34, VAR_26, &VAR_28->fb_phys, VAR_0);

 if (VAR_30) {
  FUNC_11(VAR_27, "cannot load DMA map\n");
  goto fail;
 }


 FUNC_12(VAR_28->fb_base, 0x00, VAR_34);

 FUNC_14(VAR_28, VAR_7, VAR_28->fb_phys);

 VAR_30 = (FUNC_13(FUNC_10(VAR_27),
     FUNC_8(VAR_27) | VAR_23));

 if (VAR_30) {
  FUNC_11(VAR_27, "failed to attach syscons\n");
  goto fail;
 }




 VAR_32 = VAR_14 | VAR_13 | VAR_9 | VAR_11;
 VAR_32 |= VAR_10;
 FUNC_14(VAR_28, VAR_3, VAR_32);
 FUNC_0(20);
 VAR_32 |= VAR_12;
 FUNC_14(VAR_28, VAR_3, VAR_32);

 VAR_29->fb_addr = (vm_offset_t)VAR_28->fb_base;
 VAR_29->fb_size = VAR_34;
 VAR_29->width = VAR_28->width;
 VAR_29->height = VAR_28->height;
 VAR_29->depth = 16;
 VAR_29->stride = VAR_28->width * 2;
 FUNC_17(&VAR_29->va);

 return (0);

fail:
 if (VAR_28->fb_base)
  FUNC_6(VAR_28->dma_tag, VAR_28->fb_base, VAR_28->dma_map);
 if (VAR_28->dma_tag)
  FUNC_3(VAR_28->dma_tag);
 return (VAR_30);
}
