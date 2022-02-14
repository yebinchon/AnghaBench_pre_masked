
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int y; int x; } ;
typedef TYPE_1__ video_display_start_t ;
typedef int u_long ;
typedef int u_int ;
struct thread {int dummy; } ;
struct fbtype {int dummy; } ;
struct fb_info {int (* setblankmode ) (int ,int) ;int fb_priv; int fb_stride; } ;
struct cdev {struct fb_info* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;





 int FUNC_0 (struct fb_info*,struct fbtype*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct fb_info *VAR_6;
 int VAR_7;

 VAR_7 = 0;
 VAR_6 = VAR_1->si_drv1;

 switch (VAR_2) {
 case 132:
  FUNC_0(VAR_6, (struct fbtype *)VAR_3, sizeof(struct fbtype));
  break;

 case 128:
  *(u_int *)VAR_3 = 0;
  break;

 case 130:
  ((video_display_start_t *)VAR_3)->x = 0;
  ((video_display_start_t *)VAR_3)->y = 0;
  break;

 case 129:
  *(u_int *)VAR_3 = VAR_6->fb_stride;
  break;

 case 131:
  if (VAR_6->setblankmode != ((void*)0))
   VAR_7 = VAR_6->setblankmode(VAR_6->fb_priv, *(int *)VAR_3);
  break;

 default:
  VAR_7 = VAR_0;
  break;
 }
 return (VAR_7);
}
