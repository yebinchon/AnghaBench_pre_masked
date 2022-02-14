
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int term_color_t ;
struct vt_device {int vd_height; int vd_transpose; int vd_width; TYPE_1__* vd_driver; int vd_video_dev; struct fb_info* vd_softc; } ;
struct fb_info {int fb_height; int fb_stride; int fb_width; int fb_bpp; scalar_t__ fb_size; scalar_t__ fb_pbase; scalar_t__ fb_vbase; int fb_cmsize; int fb_cmap; int fb_flags; int fb_video_dev; } ;
struct TYPE_2__ {int (* vd_blank ) (struct vt_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*) ;
 int VAR_2 ;
 void* FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vt_device*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct vt_device*) ;

int
FUNC_6(struct vt_device *VAR_9)
{
 struct fb_info *VAR_10;
 u_int VAR_11;
 int VAR_12, VAR_13;
 term_color_t VAR_14;

 VAR_10 = VAR_9->vd_softc;
 VAR_9->vd_height = FUNC_1(VAR_7, VAR_10->fb_height);
 VAR_11 = (VAR_10->fb_height - VAR_9->vd_height) >> 1;
 VAR_9->vd_transpose = VAR_11 * VAR_10->fb_stride;
 VAR_9->vd_width = FUNC_1(VAR_8, VAR_10->fb_width);
 VAR_11 = (VAR_10->fb_width - VAR_9->vd_width) >> 1;
 VAR_9->vd_transpose += VAR_11 * (VAR_10->fb_bpp / VAR_3);
 VAR_9->vd_video_dev = VAR_10->fb_video_dev;

 if (VAR_10->fb_size == 0)
  return (VAR_0);

 if (VAR_10->fb_pbase == 0 && VAR_10->fb_vbase == 0)
  VAR_10->fb_flags |= VAR_2;

 if (VAR_10->fb_cmsize <= 0) {
  VAR_13 = FUNC_4(VAR_10->fb_cmap, FUNC_0(VAR_10));
  if (VAR_13)
   return (VAR_0);
  VAR_10->fb_cmsize = 16;
 }

 VAR_14 = VAR_4;
 if (FUNC_2("teken.bg_color", &VAR_12) != 0) {
  if (VAR_12 == VAR_6)
   VAR_12 |= VAR_5;
  VAR_14 = VAR_12;
 }

 VAR_9->vd_driver->vd_blank(VAR_9, VAR_14);


 FUNC_5(VAR_9);

 return (VAR_1);
}
