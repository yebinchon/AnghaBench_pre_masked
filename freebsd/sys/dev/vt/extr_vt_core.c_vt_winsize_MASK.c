
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; int ws_row; int ws_xpixel; int ws_ypixel; } ;
struct vt_font {int vf_width; int vf_height; } ;
struct vt_device {int vd_width; int vd_height; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0(struct vt_device *VAR_2, struct vt_font *VAR_3, struct winsize *VAR_4)
{

 VAR_4->ws_ypixel = VAR_2->vd_height;
 if (VAR_0)
  VAR_4->ws_ypixel -= VAR_1;
 VAR_4->ws_row = VAR_4->ws_ypixel;
 VAR_4->ws_col = VAR_4->ws_xpixel = VAR_2->vd_width;
 if (VAR_3 != ((void*)0)) {
  VAR_4->ws_row /= VAR_3->vf_height;
  VAR_4->ws_col /= VAR_3->vf_width;
 }
}
