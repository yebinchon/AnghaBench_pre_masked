
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int vd_flags; int vd_width; int vd_height; int * vd_video_dev; struct vga_softc* vd_softc; } ;
struct vga_softc {int vga_enabled; int vga_fb_handle; int vga_fb_tag; int vga_reg_handle; int vga_reg_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct vt_device*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int
FUNC_4(struct vt_device *VAR_17)
{
 struct vga_softc *VAR_18;
 int VAR_19;

 if (VAR_17->vd_softc == ((void*)0))
  VAR_17->vd_softc = (void *)&VAR_15;
 VAR_18 = VAR_17->vd_softc;

 if (VAR_17->vd_flags & VAR_2 && VAR_17->vd_video_dev != ((void*)0))
  FUNC_3(VAR_17->vd_video_dev);


 VAR_18->vga_fb_tag = VAR_14;
 VAR_18->vga_reg_tag = VAR_13;




 FUNC_1(VAR_18->vga_reg_tag, VAR_6, VAR_7, 0,
     &VAR_18->vga_reg_handle);







 VAR_19 = VAR_16 != VAR_10;
 FUNC_0("hw.vga.textmode", &VAR_19);
 if (VAR_19) {
  VAR_17->vd_flags |= VAR_3;
  VAR_17->vd_width = 80;
  VAR_17->vd_height = 25;
  FUNC_1(VAR_18->vga_fb_tag, VAR_8, VAR_9, 0,
      &VAR_18->vga_fb_handle);
 } else {
  VAR_17->vd_width = VAR_12;
  VAR_17->vd_height = VAR_11;
  FUNC_1(VAR_18->vga_fb_tag, VAR_4, VAR_5, 0,
      &VAR_18->vga_fb_handle);
 }
 if (FUNC_2(VAR_17, VAR_19) != 0)
  return (VAR_0);
 VAR_18->vga_enabled = 1;

 return (VAR_1);
}
