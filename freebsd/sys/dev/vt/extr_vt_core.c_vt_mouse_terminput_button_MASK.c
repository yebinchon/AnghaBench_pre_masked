
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_terminal; struct vt_font* vw_font; } ;
struct vt_font {int vf_width; int vf_height; } ;
struct vt_device {int vd_mx; int vd_my; struct vt_window* vd_curwindow; } ;
typedef int mouseb ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char) ;

__attribute__((used)) static void
FUNC_2(struct vt_device *VAR_0, int VAR_1)
{
 struct vt_window *VAR_2;
 struct vt_font *VAR_3;
 char VAR_4[6] = "\x1B[M";
 int VAR_5, VAR_6, VAR_7;

 VAR_2 = VAR_0->vd_curwindow;
 VAR_3 = VAR_2->vw_font;


 VAR_6 = VAR_0->vd_mx / VAR_3->vf_width;
 VAR_7 = VAR_0->vd_my / VAR_3->vf_height;

 VAR_6 = FUNC_0(VAR_6, 255 - '!');
 VAR_7 = FUNC_0(VAR_7, 255 - '!');

 VAR_4[3] = ' ' + VAR_1;
 VAR_4[4] = '!' + VAR_6;
 VAR_4[5] = '!' + VAR_7;

 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4); VAR_5++)
  FUNC_1(VAR_2->vw_terminal, VAR_4[VAR_5]);
}
