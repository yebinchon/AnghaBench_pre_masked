
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcmsc_softc {int dev; } ;
struct bcm2835_fb_config {scalar_t__ bpp; scalar_t__ yoffset; scalar_t__ xoffset; int yres; int vyres; int xres; int vxres; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bcm2835_fb_config*) ;
 scalar_t__ FUNC_1 (struct bcm2835_fb_config*) ;
 int FUNC_2 (struct bcm2835_fb_config*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (struct bcm2835_fb_config*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct bcmsc_softc *VAR_2, struct bcm2835_fb_config *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 if (FUNC_1(VAR_3) != 0)
  return (VAR_0);
 if (FUNC_0(VAR_3) != 0)
  return (VAR_0);
 if (VAR_3->bpp < VAR_1) {
  FUNC_3(VAR_2->dev, "changing fb bpp from %d to %d\n", VAR_3->bpp, VAR_1);
  VAR_3->bpp = VAR_1;
 } else
  FUNC_3(VAR_2->dev, "keeping existing fb bpp of %d\n", VAR_3->bpp);

 VAR_3->vxres = VAR_3->xres;
 VAR_3->vyres = VAR_3->yres;
 VAR_3->xoffset = VAR_3->yoffset = 0;

 if ((VAR_4 = FUNC_2(VAR_3)) != 0) {
  FUNC_3(VAR_2->dev, "bcm2835_mbox_fb_init failed, err=%d\n", VAR_4);
  return (VAR_0);
 }

 return (0);
}
