
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef size_t term_color_t ;
struct vt_device {struct fb_info* vd_softc; } ;
struct fb_info {int* fb_cmap; int fb_flags; scalar_t__ fb_vbase; int fb_height; int fb_stride; } ;


 int FUNC_0 (struct fb_info*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct fb_info*,int,int) ;
 int FUNC_3 (struct fb_info*,int,int) ;
 int FUNC_4 (struct fb_info*,int,int) ;

void
FUNC_5(struct vt_device *VAR_1, term_color_t VAR_2)
{
 struct fb_info *VAR_3;
 uint32_t VAR_4;
 u_int VAR_5, VAR_6;

 VAR_3 = VAR_1->vd_softc;
 VAR_4 = VAR_3->fb_cmap[VAR_2];

 if (VAR_3->fb_flags & VAR_0)
  return;

 FUNC_1((VAR_3->fb_vbase != 0), ("Unmapped framebuffer"));

 switch (FUNC_0(VAR_3)) {
 case 1:
  for (VAR_6 = 0; VAR_6 < VAR_3->fb_height; VAR_6++)
   for (VAR_5 = 0; VAR_5 < VAR_3->fb_stride; VAR_5++)
    FUNC_2(VAR_3, VAR_6*VAR_3->fb_stride + VAR_5, VAR_4);
  break;
 case 2:
  for (VAR_6 = 0; VAR_6 < VAR_3->fb_height; VAR_6++)
   for (VAR_5 = 0; VAR_5 < VAR_3->fb_stride; VAR_5 += 2)
    FUNC_3(VAR_3, VAR_6*VAR_3->fb_stride + VAR_5, VAR_4);
  break;
 case 3:
  for (VAR_6 = 0; VAR_6 < VAR_3->fb_height; VAR_6++)
   for (VAR_5 = 0; VAR_5 < VAR_3->fb_stride; VAR_5 += 3) {
    FUNC_2(VAR_3, VAR_6*VAR_3->fb_stride + VAR_5,
        (VAR_4 >> 16) & 0xff);
    FUNC_2(VAR_3, VAR_6*VAR_3->fb_stride + VAR_5 + 1,
        (VAR_4 >> 8) & 0xff);
    FUNC_2(VAR_3, VAR_6*VAR_3->fb_stride + VAR_5 + 2,
        VAR_4 & 0xff);
   }
  break;
 case 4:
  for (VAR_6 = 0; VAR_6 < VAR_3->fb_height; VAR_6++)
   for (VAR_5 = 0; VAR_5 < VAR_3->fb_stride; VAR_5 += 4)
    FUNC_4(VAR_3, VAR_6*VAR_3->fb_stride + VAR_5, VAR_4);
  break;
 default:

  return;
 }
}
