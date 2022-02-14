
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {char* name; int plexcount; char* volume; char* plex; char* drive; int plex_offset; int drive_offset; int size; scalar_t__ stripesize; int org; int state; } ;
struct gv_softc {char* name; int plexcount; char* volume; char* plex; char* drive; int plex_offset; int drive_offset; int size; scalar_t__ stripesize; int org; int state; } ;
struct gv_sd {char* name; int plexcount; char* volume; char* plex; char* drive; int plex_offset; int drive_offset; int size; scalar_t__ stripesize; int org; int state; } ;
struct gv_plex {char* name; int plexcount; char* volume; char* plex; char* drive; int plex_offset; int drive_offset; int size; scalar_t__ stripesize; int org; int state; } ;
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
 struct gv_volume* FUNC_0 (int,int) ;
 int FUNC_1 (struct gctl_req*,char*,...) ;
 char* FUNC_2 (struct gctl_req*,char*,int *) ;
 int* FUNC_3 (struct gctl_req*,char*,int) ;
 struct gv_drive* FUNC_4 (struct gv_volume*,char*) ;
 int FUNC_5 (struct gv_volume*,int ,struct gv_volume*,int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (char*,char*,int) ;

void
FUNC_8(struct g_geom *VAR_9, struct gctl_req *VAR_10)
{
 struct gv_drive *VAR_11;
 struct gv_sd *VAR_12;
 struct gv_volume *VAR_13;
 struct gv_plex *VAR_14;
 struct gv_softc *VAR_15;
 char *VAR_16, VAR_17[30], *VAR_18;
 int *VAR_19, VAR_20;

 VAR_15 = VAR_9->softc;
 VAR_20 = 0;
 VAR_18 = FUNC_2(VAR_10, "name", ((void*)0));
 if (VAR_18 == ((void*)0)) {
  FUNC_1(VAR_10, "volume name not given");
  return;
 }

 VAR_19 = FUNC_3(VAR_10, "drives", sizeof(*VAR_19));

 if (VAR_19 == ((void*)0)) {
  FUNC_1(VAR_10, "drive names not given");
  return;
 }


 VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_7 | VAR_8);
 FUNC_7(VAR_13->name, VAR_18, sizeof(VAR_13->name));
 VAR_13->state = VAR_6;
 FUNC_5(VAR_15, VAR_2, VAR_13, ((void*)0), 0, 0);


 VAR_14 = FUNC_0(sizeof(*VAR_14), VAR_7 | VAR_8);
 FUNC_6(VAR_14->name, sizeof(VAR_14->name), "%s.p%d", VAR_13->name, VAR_13->plexcount);
 FUNC_7(VAR_14->volume, VAR_13->name, sizeof(VAR_14->volume));
 VAR_14->org = VAR_5;
 VAR_14->stripesize = 0;
 FUNC_5(VAR_15, VAR_0, VAR_14, ((void*)0), 0, 0);


 for (VAR_20 = 0; VAR_20 < *VAR_19; VAR_20++) {
  FUNC_6(VAR_17, sizeof(VAR_17), "drive%d", VAR_20);
  VAR_16 = FUNC_2(VAR_10, VAR_17, ((void*)0));
  VAR_11 = FUNC_4(VAR_15, VAR_16);
  if (VAR_11 == ((void*)0)) {
   FUNC_1(VAR_10, "No such drive '%s'", VAR_16);
   continue;
  }
  VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_7 | VAR_8);
  FUNC_6(VAR_12->name, sizeof(VAR_12->name), "%s.s%d", VAR_14->name, VAR_20);
  FUNC_7(VAR_12->plex, VAR_14->name, sizeof(VAR_12->plex));
  FUNC_7(VAR_12->drive, VAR_16, sizeof(VAR_12->drive));
  VAR_12->plex_offset = -1;
  VAR_12->drive_offset = -1;
  VAR_12->size = -1;
  FUNC_5(VAR_15, VAR_1, VAR_12, ((void*)0), 0, 0);
 }
 FUNC_5(VAR_15, VAR_4, VAR_15, ((void*)0), 0, 0);
 FUNC_5(VAR_15, VAR_3, VAR_15, ((void*)0), 0, 0);
}
