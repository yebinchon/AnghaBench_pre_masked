
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {char* name; char* volume; int stripesize; char* plex; char* drive; int plex_offset; int drive_offset; int size; int org; int state; } ;
struct gv_softc {char* name; char* volume; int stripesize; char* plex; char* drive; int plex_offset; int drive_offset; int size; int org; int state; } ;
struct gv_sd {char* name; char* volume; int stripesize; char* plex; char* drive; int plex_offset; int drive_offset; int size; int org; int state; } ;
struct gv_plex {char* name; char* volume; int stripesize; char* plex; char* drive; int plex_offset; int drive_offset; int size; int org; int state; } ;
struct gv_drive {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_volume* softc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct gv_volume* FUNC_0 (int,int) ;
 int FUNC_1 (struct gctl_req*,char*,...) ;
 char* FUNC_2 (struct gctl_req*,char*,int *) ;
 int* FUNC_3 (struct gctl_req*,char*,int) ;
 struct gv_drive* FUNC_4 (struct gv_volume*,char*) ;
 int FUNC_5 (struct gv_volume*,int ,struct gv_volume*,int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (char*,char*,int) ;

void
FUNC_8(struct g_geom *VAR_12, struct gctl_req *VAR_13)
{
 struct gv_drive *VAR_14;
 struct gv_sd *VAR_15;
 struct gv_volume *VAR_16;
 struct gv_plex *VAR_17;
 struct gv_softc *VAR_18;
 char *VAR_19, VAR_20[30], *VAR_21;
 int *VAR_22, *VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_18 = VAR_12->softc;
 VAR_24 = 0;
 VAR_26 = 0;
 VAR_25 = 0;
 VAR_21 = FUNC_2(VAR_13, "name", ((void*)0));
 if (VAR_21 == ((void*)0)) {
  FUNC_1(VAR_13, "volume name not given");
  return;
 }

 VAR_23 = FUNC_3(VAR_13, "flags", sizeof(*VAR_23));
 VAR_22 = FUNC_3(VAR_13, "drives", sizeof(*VAR_22));

 if (VAR_22 == ((void*)0)) {
  FUNC_1(VAR_13, "drive names not given");
  return;
 }


 if (*VAR_22 % 2 != 0) {
  FUNC_1(VAR_13, "mirror organization must have an even number "
      "of drives");
  return;
 }
 if (*VAR_23 & VAR_6 && *VAR_22 < 4) {
  FUNC_1(VAR_13, "must have at least 4 drives for striped plex");
  return;
 }


 VAR_16 = FUNC_0(sizeof(*VAR_16), VAR_10 | VAR_11);
 FUNC_7(VAR_16->name, VAR_21, sizeof(VAR_16->name));
 VAR_16->state = VAR_9;
 FUNC_5(VAR_18, VAR_3, VAR_16, ((void*)0), 0, 0);


 for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  VAR_17 = FUNC_0(sizeof(*VAR_17), VAR_10 | VAR_11);
  FUNC_6(VAR_17->name, sizeof(VAR_17->name), "%s.p%d", VAR_16->name,
      VAR_25);
  FUNC_7(VAR_17->volume, VAR_16->name, sizeof(VAR_17->volume));
  if (*VAR_23 & VAR_6) {
   VAR_17->org = VAR_8;
   VAR_17->stripesize = VAR_0;
  } else {
   VAR_17->org = VAR_7;
   VAR_17->stripesize = -1;
  }
  FUNC_5(VAR_18, VAR_1, VAR_17, ((void*)0), 0, 0);





  VAR_26 = 0;
  for (VAR_24 = VAR_25; VAR_24 < *VAR_22; VAR_24 += 2) {
   FUNC_6(VAR_20, sizeof(VAR_20), "drive%d", VAR_24);
   VAR_19 = FUNC_2(VAR_13, VAR_20, ((void*)0));
   VAR_14 = FUNC_4(VAR_18, VAR_19);
   if (VAR_14 == ((void*)0)) {
    FUNC_1(VAR_13, "No such drive '%s', aborting",
        VAR_19);
    VAR_26++;
    break;
   }
   VAR_15 = FUNC_0(sizeof(*VAR_15), VAR_10 | VAR_11);
   FUNC_6(VAR_15->name, sizeof(VAR_15->name), "%s.s%d", VAR_17->name,
       VAR_26);
   FUNC_7(VAR_15->plex, VAR_17->name, sizeof(VAR_15->plex));
   FUNC_7(VAR_15->drive, VAR_19, sizeof(VAR_15->drive));
   VAR_15->plex_offset = -1;
   VAR_15->drive_offset = -1;
   VAR_15->size = -1;
   FUNC_5(VAR_18, VAR_2, VAR_15, ((void*)0), 0, 0);
   VAR_26++;
  }
 }
 FUNC_5(VAR_18, VAR_5, VAR_18, ((void*)0), 0, 0);
 FUNC_5(VAR_18, VAR_4, VAR_18, ((void*)0), 0, 0);
}
