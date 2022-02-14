
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int edid_nmodes; TYPE_2__* edid_modes; TYPE_1__* edid_preferred_mode; } ;
struct udl_softc {int sc_cur_mode; int sc_chip; TYPE_3__ sc_edid_info; int sc_edid; } ;
struct udl_mode {int hz; int clock; int hdisplay; int vdisplay; } ;
struct TYPE_6__ {int dot_clock; int htotal; int vtotal; int hdisplay; int vdisplay; } ;
struct TYPE_5__ {int dot_clock; int htotal; int vtotal; int hdisplay; int vdisplay; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (int,int,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct udl_softc *VAR_1)
{
 struct udl_mode VAR_2;
 int VAR_3 = VAR_0;
 int VAR_4;


 FUNC_1(VAR_1->sc_edid, &VAR_1->sc_edid_info);



 if (VAR_1->sc_edid_info.edid_preferred_mode != ((void*)0)) {
  VAR_2.hz =
      (VAR_1->sc_edid_info.edid_preferred_mode->dot_clock * 1000) /
      (VAR_1->sc_edid_info.edid_preferred_mode->htotal *
      VAR_1->sc_edid_info.edid_preferred_mode->vtotal);
  VAR_2.clock =
      VAR_1->sc_edid_info.edid_preferred_mode->dot_clock / 10;
  VAR_2.hdisplay =
      VAR_1->sc_edid_info.edid_preferred_mode->hdisplay;
  VAR_2.vdisplay =
      VAR_1->sc_edid_info.edid_preferred_mode->vdisplay;
  VAR_3 = FUNC_3(VAR_2.hdisplay, VAR_2.vdisplay, VAR_2.hz,
      VAR_1->sc_chip, VAR_2.clock);
  VAR_1->sc_cur_mode = VAR_3;
 } else {
  FUNC_0("no preferred mode found!\n");
 }

 if (VAR_3 == VAR_0) {
  FUNC_0("no mode line found\n");

  VAR_4 = 0;
  while (VAR_4 < VAR_1->sc_edid_info.edid_nmodes) {
   VAR_2.hz =
       (VAR_1->sc_edid_info.edid_modes[VAR_4].dot_clock * 1000) /
       (VAR_1->sc_edid_info.edid_modes[VAR_4].htotal *
       VAR_1->sc_edid_info.edid_modes[VAR_4].vtotal);
   VAR_2.clock =
       VAR_1->sc_edid_info.edid_modes[VAR_4].dot_clock / 10;
   VAR_2.hdisplay =
       VAR_1->sc_edid_info.edid_modes[VAR_4].hdisplay;
   VAR_2.vdisplay =
       VAR_1->sc_edid_info.edid_modes[VAR_4].vdisplay;
   VAR_3 = FUNC_3(VAR_2.hdisplay, VAR_2.vdisplay,
       VAR_2.hz, VAR_1->sc_chip, VAR_2.clock);
   if (VAR_3 < VAR_0)
    if ((VAR_1->sc_cur_mode == VAR_0) ||
        (VAR_3 > VAR_1->sc_cur_mode))
     VAR_1->sc_cur_mode = VAR_3;
   VAR_4++;
  }
 }



 if (VAR_1->sc_cur_mode == VAR_0)
  VAR_1->sc_cur_mode = FUNC_3(800, 600, 60, VAR_1->sc_chip, 0);
}
