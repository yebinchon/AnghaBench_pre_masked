
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gv_softc {int subdisks; } ;
struct gv_sd {int flags; struct gv_softc* vinumconf; TYPE_1__* drive_sc; int name; int plex; int drive; } ;
struct gv_plex {int flags; int name; } ;
struct gv_drive {int flags; int name; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct gv_sd*,int ) ;
 int FUNC_3 (struct gv_sd*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct gv_sd*) ;
 struct gv_drive* FUNC_5 (int,int) ;
 int FUNC_6 (struct gv_softc*,struct gv_drive*) ;
 struct gv_drive* FUNC_7 (struct gv_softc*,int ) ;
 struct gv_plex* FUNC_8 (struct gv_softc*,int ) ;
 int FUNC_9 (struct gv_sd*) ;
 int FUNC_10 (struct gv_softc*,struct gv_plex*) ;
 scalar_t__ FUNC_11 (struct gv_sd*,struct gv_drive*) ;
 scalar_t__ FUNC_12 (struct gv_sd*,struct gv_plex*) ;
 int VAR_8 ;
 int FUNC_13 (int ,int ,int) ;

int
FUNC_14(struct gv_softc *VAR_9, struct gv_sd *VAR_10)
{
 struct gv_plex *VAR_11;
 struct gv_drive *VAR_12;

 FUNC_1(VAR_10 != ((void*)0), ("gv_create_sd: NULL s"));


 VAR_12 = FUNC_7(VAR_9, VAR_10->drive);
 if (VAR_12 == ((void*)0)) {





  if (VAR_10->flags & VAR_4) {
   VAR_12 = FUNC_5(sizeof(struct gv_drive),
       VAR_5 | VAR_6);
   VAR_12->flags |= VAR_0;
   FUNC_13(VAR_12->name, VAR_10->drive, sizeof(VAR_12->name));
   FUNC_6(VAR_9, VAR_12);
  } else {
   FUNC_0(0, "create sd '%s': drive '%s' not found",
       VAR_10->name, VAR_10->drive);
   FUNC_4(VAR_10);
   return (VAR_1);
  }
 }


 VAR_11 = FUNC_8(VAR_9, VAR_10->plex);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(0, "create sd '%s': plex '%s' not found",
      VAR_10->name, VAR_10->plex);
  FUNC_4(VAR_10);
  return (VAR_1);
 }





 if (FUNC_11(VAR_10, VAR_12) != 0) {
  FUNC_4(VAR_10);
  return (VAR_1);
 }





 if (FUNC_12(VAR_10, VAR_11) != 0) {
  FUNC_0(0, "unable to give sd '%s' to plex '%s'",
      VAR_10->name, VAR_11->name);
  if (VAR_10->drive_sc && !(VAR_10->drive_sc->flags & VAR_0))
   FUNC_3(VAR_10, VAR_7);
  FUNC_9(VAR_10);
  FUNC_4(VAR_10);




  if (!(VAR_11->flags & VAR_2))
   return (VAR_1);
  FUNC_10(VAR_9, VAR_11);
  return (VAR_1);
 }
 VAR_10->flags |= VAR_3;

 VAR_10->vinumconf = VAR_9;
 FUNC_2(&VAR_9->subdisks, VAR_10, VAR_8);

 return (0);
}
