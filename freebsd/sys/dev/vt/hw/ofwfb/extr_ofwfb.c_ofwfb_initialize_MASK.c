
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vt_device {struct ofwfb_softc* vd_softc; } ;
struct TYPE_2__ {int fb_cmsize; int fb_flags; int fb_bpp; int* fb_cmap; scalar_t__ fb_vbase; } ;
struct ofwfb_softc {int iso_palette; TYPE_1__ fb; int sc_memt; int sc_handle; } ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int*,int ,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct vt_device *VAR_2)
{
 struct ofwfb_softc *VAR_3 = VAR_2->vd_softc;
 int VAR_4, VAR_5;
 cell_t VAR_6;
 uint32_t VAR_7;

 VAR_3->fb.fb_cmsize = 16;

 if (VAR_3->fb.fb_flags & VAR_1)
  return;





 VAR_3->iso_palette = 0;
 switch (VAR_3->fb.fb_bpp) {
 case 8:
  FUNC_4(VAR_3->fb.fb_cmap, VAR_0, 255,
      16, 255, 8, 255, 0);

  for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
   VAR_5 = FUNC_0("color!", VAR_3->sc_handle, 4, 1,
       (cell_t)((VAR_3->fb.fb_cmap[VAR_4] >> 16) & 0xff),
       (cell_t)((VAR_3->fb.fb_cmap[VAR_4] >> 8) & 0xff),
       (cell_t)((VAR_3->fb.fb_cmap[VAR_4] >> 0) & 0xff),
       (cell_t)VAR_4, &VAR_6);
   if (VAR_5)
    break;
  }
  if (VAR_4 != 16)
   VAR_3->iso_palette = 1;

  break;

 case 32:







  VAR_7 = FUNC_1(VAR_3->sc_memt, VAR_3->fb.fb_vbase, 0);
  FUNC_2(VAR_3->sc_memt, VAR_3->fb.fb_vbase, 0, 0xff000000);
  if (*(uint8_t *)(VAR_3->fb.fb_vbase) == 0xff)
   FUNC_4(VAR_3->fb.fb_cmap,
       VAR_0, 255, 0, 255, 8, 255, 16);
  else
   FUNC_4(VAR_3->fb.fb_cmap,
       VAR_0, 255, 16, 255, 8, 255, 0);
  FUNC_2(VAR_3->sc_memt, VAR_3->fb.fb_vbase, 0, VAR_7);
  break;

 default:
  FUNC_3("Unknown color space depth %d", VAR_3->fb.fb_bpp);
  break;
        }
}
