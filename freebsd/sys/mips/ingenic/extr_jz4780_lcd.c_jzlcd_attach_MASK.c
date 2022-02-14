
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_frame_descriptor {int dummy; } ;
struct jzlcd_softc {int * res; int * clk; int * clk_pix; int fdesc_tag; int fdesc_map; int fdesc; int hdmi_evh; int fdesc_paddr; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct jzlcd_softc*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int **) ;
 int FUNC_11 (int *) ;
 struct jzlcd_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_10)
{
 struct jzlcd_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_12(VAR_10);

 VAR_11->dev = VAR_10;

 if (FUNC_1(VAR_10, VAR_9, VAR_11->res)) {
  FUNC_13(VAR_10, "cannot allocate resources for device\n");
  goto failed;
 }

 if (FUNC_10(VAR_10, 0, "lcd_clk", &VAR_11->clk) != 0 ||
     FUNC_10(VAR_10, 0, "lcd_pixclk", &VAR_11->clk_pix) != 0) {
  FUNC_13(VAR_10, "cannot get clocks\n");
  goto failed;
 }
 if (FUNC_9(VAR_11->clk) != 0 || FUNC_9(VAR_11->clk_pix) != 0) {
  FUNC_13(VAR_10, "cannot enable clocks\n");
  goto failed;
 }

 VAR_12 = FUNC_2(
     FUNC_7(VAR_10),
     sizeof(struct lcd_frame_descriptor), 0,
     VAR_4,
     VAR_3,
     ((void*)0), ((void*)0),
     sizeof(struct lcd_frame_descriptor) * 2, 1,
     sizeof(struct lcd_frame_descriptor) * 2,
     0,
     ((void*)0), ((void*)0),
     &VAR_11->fdesc_tag);
 if (VAR_12 != 0) {
  FUNC_13(VAR_10, "cannot create bus dma tag\n");
  goto failed;
 }

 VAR_12 = FUNC_5(VAR_11->fdesc_tag, (void **)&VAR_11->fdesc,
     VAR_0 | VAR_1 | VAR_2, &VAR_11->fdesc_map);
 if (VAR_12 != 0) {
  FUNC_13(VAR_10, "cannot allocate dma descriptor\n");
  goto dmaalloc_failed;
 }

 VAR_12 = FUNC_4(VAR_11->fdesc_tag, VAR_11->fdesc_map, VAR_11->fdesc,
     sizeof(struct lcd_frame_descriptor) * 2, VAR_7,
     &VAR_11->fdesc_paddr, 0);
 if (VAR_12 != 0) {
  FUNC_13(VAR_10, "cannot load dma map\n");
  goto dmaload_failed;
 }

 VAR_11->hdmi_evh = FUNC_0(VAR_6,
     VAR_8, VAR_11, 0);

 return (0);

dmaload_failed:
 FUNC_6(VAR_11->fdesc_tag, VAR_11->fdesc, VAR_11->fdesc_map);
dmaalloc_failed:
 FUNC_3(VAR_11->fdesc_tag);
failed:
 if (VAR_11->clk_pix != ((void*)0))
  FUNC_11(VAR_11->clk);
 if (VAR_11->clk != ((void*)0))
  FUNC_11(VAR_11->clk);
 if (VAR_11->res != ((void*)0))
  FUNC_8(VAR_10, VAR_9, VAR_11->res);

 return (VAR_5);
}
