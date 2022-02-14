
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef size_t term_color_t ;
struct vt_device {struct fb_info* vd_softc; } ;
struct fb_info {int* fb_cmap; int fb_stride; int fb_flags; scalar_t__ fb_vbase; } ;


 int FUNC_0 (struct fb_info*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct fb_info*,int,int) ;
 int FUNC_3 (struct fb_info*,int,int) ;
 int FUNC_4 (struct fb_info*,int,int) ;

void
FUNC_5(struct vt_device *VAR_1, int VAR_2, int VAR_3, term_color_t VAR_4)
{
 struct fb_info *VAR_5;
 uint32_t VAR_6;
 u_int VAR_7;

 VAR_5 = VAR_1->vd_softc;
 VAR_6 = VAR_5->fb_cmap[VAR_4];
 VAR_7 = VAR_5->fb_stride * VAR_3 + VAR_2 * FUNC_0(VAR_5);

 if (VAR_5->fb_flags & VAR_0)
  return;

 FUNC_1((VAR_5->fb_vbase != 0), ("Unmapped framebuffer"));

 switch (FUNC_0(VAR_5)) {
 case 1:
  FUNC_2(VAR_5, VAR_7, VAR_6);
  break;
 case 2:
  FUNC_3(VAR_5, VAR_7, VAR_6);
  break;
 case 3:
  FUNC_2(VAR_5, VAR_7, (VAR_6 >> 16) & 0xff);
  FUNC_2(VAR_5, VAR_7 + 1, (VAR_6 >> 8) & 0xff);
  FUNC_2(VAR_5, VAR_7 + 2, VAR_6 & 0xff);
  break;
 case 4:
  FUNC_4(VAR_5, VAR_7, VAR_6);
  break;
 default:

  return;
 }
}
