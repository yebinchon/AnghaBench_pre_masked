
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_volume {int dummy; } ;
struct gv_softc {int dummy; } ;
struct gv_sd {TYPE_1__* drive_sc; struct gv_plex* plex_sc; } ;
struct gv_plex {struct gv_volume* vol_sc; int size; int sdcount; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gv_sd*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct gv_sd*) ;
 int FUNC_3 (struct gv_sd*) ;
 int FUNC_4 (struct gv_plex*) ;
 int FUNC_5 (struct gv_volume*,int ) ;
 int FUNC_6 (struct gv_volume*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_7(struct gv_softc *VAR_4, struct gv_sd *VAR_5)
{
 struct gv_plex *VAR_6;
 struct gv_volume *VAR_7;

 FUNC_0(VAR_5 != ((void*)0), ("gv_rm_sd: NULL s"));

 VAR_6 = VAR_5->plex_sc;
 VAR_7 = ((void*)0);


 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_5, VAR_2);
  VAR_5->plex_sc = ((void*)0);
  VAR_6->sdcount--;

  VAR_6->size = FUNC_4(VAR_6);
  VAR_7 = VAR_6->vol_sc;
  if (VAR_7 != ((void*)0)) {

   FUNC_5(VAR_7, FUNC_6(VAR_7));
  }
 }
 if (VAR_5->drive_sc && !(VAR_5->drive_sc->flags & VAR_0))
  FUNC_1(VAR_5, VAR_1);
 FUNC_1(VAR_5, VAR_3);
 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
}
