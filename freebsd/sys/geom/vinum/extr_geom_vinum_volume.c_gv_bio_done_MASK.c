
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int dummy; } ;
struct gv_softc {int dummy; } ;
struct gv_sd {struct gv_plex* plex_sc; } ;
struct gv_plex {int org; struct gv_volume* vol_sc; } ;
struct bio {struct gv_sd* bio_caller1; } ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gv_plex*,struct bio*) ;
 int FUNC_2 (struct gv_plex*,struct bio*) ;

void
FUNC_3(struct gv_softc *VAR_0, struct bio *VAR_1)
{
 struct gv_volume *VAR_2;
 struct gv_plex *VAR_3;
 struct gv_sd *VAR_4;

 VAR_4 = VAR_1->bio_caller1;
 FUNC_0(VAR_4 != ((void*)0), ("gv_bio_done: NULL s"));
 VAR_3 = VAR_4->plex_sc;
 FUNC_0(VAR_3 != ((void*)0), ("gv_bio_done: NULL p"));
 VAR_2 = VAR_3->vol_sc;
 FUNC_0(VAR_2 != ((void*)0), ("gv_bio_done: NULL v"));

 switch (VAR_3->org) {
 case 130:
 case 128:
  FUNC_1(VAR_3, VAR_1);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_1);
  break;
 }
}
