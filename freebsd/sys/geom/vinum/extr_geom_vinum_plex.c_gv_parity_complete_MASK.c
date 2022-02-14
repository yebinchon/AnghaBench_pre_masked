
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_softc {int dummy; } ;
struct gv_plex {scalar_t__ synced; int name; TYPE_1__* vol_sc; scalar_t__ size; scalar_t__ stripesize; struct gv_softc* vinumconf; } ;
struct bio {int bio_error; int bio_pflags; int bio_data; } ;
typedef int intmax_t ;
struct TYPE_2__ {int provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int,int ) ;
 int FUNC_8 (struct gv_plex*,int,scalar_t__) ;
 int FUNC_9 (struct gv_softc*,int ,struct gv_softc*,int *,int ,int ) ;

void
FUNC_10(struct gv_plex *VAR_4, struct bio *VAR_5)
{
 struct gv_softc *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_5->bio_error;
 VAR_8 = VAR_5->bio_pflags;
 VAR_8 &= ~VAR_1;

 VAR_6 = VAR_4->vinumconf;
 FUNC_1(VAR_6 != ((void*)0), ("gv_parity_complete: NULL sc"));


 if (VAR_5->bio_pflags & VAR_1)
  FUNC_3(VAR_5->bio_data);
 FUNC_2(VAR_5);

 if (VAR_7 == VAR_0) {
  FUNC_0(0, "parity incorrect at offset 0x%jx",
      (intmax_t)VAR_4->synced);
 }


 if (VAR_7 && !(VAR_7 == VAR_0 && (VAR_8 & VAR_2))) {

  FUNC_4();
  FUNC_5();
  FUNC_7(VAR_4->vol_sc->provider, -1, -1, 0);
  FUNC_6();
  FUNC_0(0, "parity check on %s failed at 0x%jx "
      "errno %d", VAR_4->name, (intmax_t)VAR_4->synced, VAR_7);
  return;
 } else {
  VAR_4->synced += VAR_4->stripesize;
 }

 if (VAR_4->synced >= VAR_4->size) {

  FUNC_4();
  FUNC_5();
  FUNC_7(VAR_4->vol_sc->provider, -1, -1, 0);
  FUNC_6();

  FUNC_0(1, "parity operation on %s finished", VAR_4->name);
  VAR_4->synced = 0;
  FUNC_9(VAR_6, VAR_3, VAR_6, ((void*)0), 0, 0);
  return;
 }


 FUNC_8(VAR_4, VAR_8, VAR_4->synced);
}
