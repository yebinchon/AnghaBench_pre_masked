
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {intptr_t fb_vbase; int fb_bpp; int fb_depth; int fb_width; int fb_height; int fb_stride; int fb_size; int fb_pbase; int fb_name; } ;
struct terasic_mtl_softc {int mtl_dev; int mtl_pixel_res; struct fb_info mtl_fb_info; } ;
typedef int * device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct terasic_mtl_softc*,struct fb_info*) ;

int
FUNC_9(struct terasic_mtl_softc *VAR_1)
{
 struct fb_info *VAR_2;
 device_t VAR_3;

 VAR_2 = &VAR_1->mtl_fb_info;
 VAR_2->fb_name = FUNC_1(VAR_1->mtl_dev);
 VAR_2->fb_pbase = FUNC_7(VAR_1->mtl_pixel_res);
 VAR_2->fb_size = FUNC_6(VAR_1->mtl_pixel_res);
 VAR_2->fb_vbase = (intptr_t)FUNC_5(VAR_2->fb_pbase, VAR_2->fb_size);
 if (FUNC_8(VAR_1, VAR_2) != 0) {
  FUNC_3(VAR_1->mtl_dev, "using default panel params\n");
  VAR_2->fb_bpp = VAR_2->fb_depth = 32;
  VAR_2->fb_width = 800;
  VAR_2->fb_height = 480;
  VAR_2->fb_stride = VAR_2->fb_width * (VAR_2->fb_depth / 8);
 }

 VAR_3 = FUNC_0(VAR_1->mtl_dev, "fbd",
     FUNC_2(VAR_1->mtl_dev));
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_1->mtl_dev, "Failed to attach fbd child\n");
  return (VAR_0);
 }
 if (FUNC_4(VAR_3) != 0) {
  FUNC_3(VAR_1->mtl_dev,
      "Failed to attach fbd device\n");
  return (VAR_0);
 }
 return (0);
}
