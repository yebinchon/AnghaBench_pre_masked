
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gv_volume {char* name; int consumer; TYPE_2__* plex_sc; int volume; TYPE_1__* vol_sc; int subdisks; int plexes; } ;
struct gv_softc {char* name; int consumer; TYPE_2__* plex_sc; int volume; TYPE_1__* vol_sc; int subdisks; int plexes; } ;
struct gv_sd {char* name; int consumer; TYPE_2__* plex_sc; int volume; TYPE_1__* vol_sc; int subdisks; int plexes; } ;
struct gv_plex {char* name; int consumer; TYPE_2__* plex_sc; int volume; TYPE_1__* vol_sc; int subdisks; int plexes; } ;
struct gv_drive {char* name; int consumer; TYPE_2__* plex_sc; int volume; TYPE_1__* vol_sc; int subdisks; int plexes; } ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_volume* softc; } ;
typedef int buf ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int plexcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct gctl_req*,char*,...) ;
 char* FUNC_2 (struct gctl_req*,char*,int *) ;
 int* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (int ) ;
 struct gv_volume* FUNC_5 (struct gv_volume*,char*) ;
 struct gv_volume* FUNC_6 (struct gv_volume*,char*) ;
 struct gv_volume* FUNC_7 (struct gv_volume*,char*) ;
 struct gv_volume* FUNC_8 (struct gv_volume*,char*) ;
 int FUNC_9 (struct gv_volume*,char*) ;
 int FUNC_10 (struct gv_volume*,int ,struct gv_volume*,int *,int,int ) ;
 int FUNC_11 (char*,int,char*,int) ;

void
FUNC_12(struct g_geom *VAR_7, struct gctl_req *VAR_8)
{
 struct gv_softc *VAR_9;
 struct gv_volume *VAR_10;
 struct gv_plex *VAR_11;
 struct gv_sd *VAR_12;
 struct gv_drive *VAR_13;
 int *VAR_14, *VAR_15;
 char *VAR_16, VAR_17[20];
 int VAR_18, VAR_19;

 VAR_14 = FUNC_3(VAR_8, "argc", sizeof(*VAR_14));

 if (VAR_14 == ((void*)0) || *VAR_14 == 0) {
  FUNC_1(VAR_8, "no arguments given");
  return;
 }

 VAR_15 = FUNC_3(VAR_8, "flags", sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_1(VAR_8, "no flags given");
  return;
 }

 VAR_9 = VAR_7->softc;



 for (VAR_18 = 0; VAR_18 < *VAR_14; VAR_18++) {
  FUNC_11(VAR_17, sizeof(VAR_17), "argv%d", VAR_18);
  VAR_16 = FUNC_2(VAR_8, VAR_17, ((void*)0));
  if (VAR_16 == ((void*)0))
   continue;
  VAR_19 = FUNC_9(VAR_9, VAR_16);
  switch (VAR_19) {
  case 128:
   VAR_10 = FUNC_8(VAR_9, VAR_16);





   if (!FUNC_0(&VAR_10->plexes) && !(*VAR_15 & VAR_6)) {
    FUNC_1(VAR_8, "volume '%s' has attached "
        "plexes - need recursive removal", VAR_10->name);
    return;
   }

   FUNC_10(VAR_9, VAR_3, VAR_10, ((void*)0), 0, 0);
   break;

  case 130:
   VAR_11 = FUNC_6(VAR_9, VAR_16);





   if (!FUNC_0(&VAR_11->subdisks) &&
       !(*VAR_15 & VAR_6)) {
    FUNC_1(VAR_8, "plex '%s' has attached "
        "subdisks - need recursive removal",
        VAR_11->name);
    return;
   }


   if (VAR_11->vol_sc != ((void*)0) && VAR_11->vol_sc->plexcount == 1) {
    FUNC_1(VAR_8, "plex '%s' is still attached "
        "to volume '%s'", VAR_11->name, VAR_11->volume);
    return;
   }

   FUNC_10(VAR_9, VAR_1, VAR_11, ((void*)0), 0, 0);
   break;

  case 129:
   VAR_12 = FUNC_7(VAR_9, VAR_16);


   if (VAR_12->plex_sc != ((void*)0)) {
    FUNC_1(VAR_8, "subdisk '%s' is still attached"
        " to plex '%s'", VAR_12->name, VAR_12->plex_sc->name);
    return;
   }

   FUNC_10(VAR_9, VAR_2, VAR_12, ((void*)0), 0, 0);
   break;

  case 131:
   VAR_13 = FUNC_5(VAR_9, VAR_16);

   if (FUNC_4(VAR_13->consumer) &&
       !(*VAR_15 & VAR_5)) {
    FUNC_1(VAR_8, "drive '%s' is open", VAR_13->name);
    return;
   }
   FUNC_10(VAR_9, VAR_0, VAR_13, ((void*)0), *VAR_15,
       0);
   break;

  default:
   FUNC_1(VAR_8, "unknown object '%s'", VAR_16);
   return;
  }
 }

 FUNC_10(VAR_9, VAR_4, VAR_9, ((void*)0), 0, 0);
}
