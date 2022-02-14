
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terasic_mtl_softc {int mtl_dev; } ;
struct fb_info {int fb_width; int fb_bpp; int fb_depth; int fb_stride; void* fb_height; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int dts_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,void**,int) ;
 int FUNC_1 (int,char*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct terasic_mtl_softc *VAR_4, struct fb_info *VAR_5)
{
 phandle_t VAR_6;
 pcell_t VAR_7[2];
 int VAR_8;

 if ((VAR_6 = FUNC_3(VAR_4->mtl_dev)) == -1)
  return (VAR_1);


 if ((VAR_8 = FUNC_1(VAR_6, "panel-size")) != sizeof(VAR_7))
  return (VAR_1);
 FUNC_0(VAR_6, "panel-size", VAR_7, VAR_8);
 VAR_5->fb_width = VAR_7[0];
 VAR_5->fb_height = VAR_7[1];
 VAR_5->fb_bpp = VAR_5->fb_depth = 32;
 VAR_5->fb_stride = VAR_5->fb_width * (VAR_5->fb_depth / 8);





 if (VAR_5->fb_width != VAR_3 ||
     VAR_5->fb_height != VAR_2 ||
     VAR_5->fb_stride != 3200 ||
     VAR_5->fb_bpp != 32 || VAR_5->fb_depth != 32) {
  FUNC_2(VAR_4->mtl_dev,
      "rejecting invalid panel params width=%u height=%u\n",
      (unsigned)VAR_5->fb_width, (unsigned)VAR_5->fb_height);
  return (VAR_0);
 }

 return (0);
}
