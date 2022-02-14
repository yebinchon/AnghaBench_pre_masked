
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t term_color_t ;
struct vt_device {struct creatorfb_softc* vd_softc; } ;
struct TYPE_2__ {int fb_height; int fb_stride; int fb_width; int * fb_cmap; } ;
struct creatorfb_softc {TYPE_1__ fb; int memh; int memt; } ;


 int FUNC_0 (int ,int ,int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct vt_device *VAR_0, term_color_t VAR_1)
{
 struct creatorfb_softc *VAR_2;
 uint32_t VAR_3;
 int VAR_4;

 VAR_2 = VAR_0->vd_softc;
 VAR_3 = VAR_2->fb.fb_cmap[VAR_1];

 for (VAR_4 = 0; VAR_4 < VAR_2->fb.fb_height; VAR_4++)
  FUNC_0(VAR_2->memt, VAR_2->memh, VAR_4*VAR_2->fb.fb_stride,
      VAR_3, VAR_2->fb.fb_width);
}
