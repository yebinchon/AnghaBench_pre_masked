
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; } ;
typedef TYPE_2__ video_display_start_t ;
typedef int u_long ;
typedef int u_int ;
struct vt_device {TYPE_1__* vd_driver; struct fb_info* vd_softc; } ;
struct thread {int dummy; } ;
struct fbtype {int dummy; } ;
struct fb_info {int fb_stride; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int (* vd_blank ) (struct vt_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct fb_info*,struct fbtype*,int) ;
 int FUNC_1 (struct vt_device*,int ) ;

int
FUNC_2(struct vt_device *VAR_3, u_long VAR_4, caddr_t VAR_5, struct thread *VAR_6)
{
 struct fb_info *VAR_7;
 int VAR_8 = 0;

 VAR_7 = VAR_3->vd_softc;

 switch (VAR_4) {
 case 132:
  FUNC_0(VAR_7, (struct fbtype *)VAR_5, sizeof(struct fbtype));
  break;

 case 128:
  *(u_int *)VAR_5 = 0;
  break;

 case 130:
  ((video_display_start_t *)VAR_5)->x = 0;
  ((video_display_start_t *)VAR_5)->y = 0;
  break;

 case 129:
  *(u_int *)VAR_5 = VAR_7->fb_stride;
  break;

 case 131:
  if (VAR_3->vd_driver->vd_blank == ((void*)0))
   return (VAR_0);
  VAR_3->vd_driver->vd_blank(VAR_3, VAR_2);
  break;

 default:
  VAR_8 = VAR_1;
  break;
 }

 return (VAR_8);
}
