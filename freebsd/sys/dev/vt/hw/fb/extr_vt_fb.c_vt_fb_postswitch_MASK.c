
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {struct fb_info* vd_softc; } ;
struct fb_info {int fb_priv; int (* enter ) (int ) ;} ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct vt_device *VAR_0)
{
 struct fb_info *VAR_1;

 VAR_1 = VAR_0->vd_softc;

 if (VAR_1->enter != ((void*)0))
  VAR_1->enter(VAR_1->fb_priv);
}
