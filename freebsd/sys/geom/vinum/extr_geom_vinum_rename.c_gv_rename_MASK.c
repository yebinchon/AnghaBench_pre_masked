
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int dummy; } ;
struct gv_softc {int dummy; } ;
typedef struct gv_volume gv_sd ;
typedef struct gv_volume gv_plex ;
typedef struct gv_volume gv_drive ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_softc* softc; } ;


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
 char* FUNC_0 (int ,int) ;
 int FUNC_1 (struct gctl_req*,char*,...) ;
 char* FUNC_2 (struct gctl_req*,char*,int *) ;
 int* FUNC_3 (struct gctl_req*,char*,int) ;
 struct gv_volume* FUNC_4 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_5 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_6 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_7 (struct gv_softc*,char*) ;
 int FUNC_8 (struct gv_softc*,char*) ;
 int FUNC_9 (struct gv_softc*,int ,struct gv_volume*,char*,int,int ) ;
 int FUNC_10 (char*,char*,int ) ;

void
FUNC_11(struct g_geom *VAR_10, struct gctl_req *VAR_11)
{
 struct gv_softc *VAR_12;
 struct gv_volume *VAR_13;
 struct gv_plex *VAR_14;
 struct gv_sd *VAR_15;
 struct gv_drive *VAR_16;
 char *VAR_17, *VAR_18, *VAR_19;
 int *VAR_20, VAR_21;

 VAR_12 = VAR_10->softc;

 VAR_20 = FUNC_3(VAR_11, "flags", sizeof(*VAR_20));
 if (VAR_20 == ((void*)0)) {
  FUNC_1(VAR_11, "no flags given");
  return;
 }

 VAR_17 = FUNC_2(VAR_11, "newname", ((void*)0));
 if (VAR_17 == ((void*)0)) {
  FUNC_1(VAR_11, "no new name given");
  return;
 }

 VAR_18 = FUNC_2(VAR_11, "object", ((void*)0));
 if (VAR_18 == ((void*)0)) {
  FUNC_1(VAR_11, "no object given");
  return;
 }

 VAR_21 = FUNC_8(VAR_12, VAR_18);
 switch (VAR_21) {
 case 128:
  VAR_13 = FUNC_7(VAR_12, VAR_18);
  if (VAR_13 == ((void*)0)) {
   FUNC_1(VAR_11, "unknown volume '%s'", VAR_18);
   return;
  }
  VAR_19 = FUNC_0(VAR_7, VAR_8 | VAR_9);
  FUNC_10(VAR_19, VAR_17, VAR_7);
  FUNC_9(VAR_12, VAR_3, VAR_13, VAR_19, *VAR_20, 0);
  break;
 case 130:
  VAR_14 = FUNC_5(VAR_12, VAR_18);
  if (VAR_14 == ((void*)0)) {
   FUNC_1(VAR_11, "unknown plex '%s'", VAR_18);
   return;
  }
  VAR_19 = FUNC_0(VAR_5, VAR_8 | VAR_9);
  FUNC_10(VAR_19, VAR_17, VAR_5);
  FUNC_9(VAR_12, VAR_1, VAR_14, VAR_19, *VAR_20, 0);
  break;
 case 129:
  VAR_15 = FUNC_6(VAR_12, VAR_18);
  if (VAR_15 == ((void*)0)) {
   FUNC_1(VAR_11, "unknown subdisk '%s'", VAR_18);
   return;
  }
  VAR_19 = FUNC_0(VAR_6, VAR_8 | VAR_9);
  FUNC_10(VAR_19, VAR_17, VAR_6);
  FUNC_9(VAR_12, VAR_2, VAR_15, VAR_19, *VAR_20, 0);
  break;
 case 131:
  VAR_16 = FUNC_4(VAR_12, VAR_18);
  if (VAR_16 == ((void*)0)) {
   FUNC_1(VAR_11, "unknown drive '%s'", VAR_18);
   return;
  }
  VAR_19 = FUNC_0(VAR_4, VAR_8 | VAR_9);
  FUNC_10(VAR_19, VAR_17, VAR_4);
  FUNC_9(VAR_12, VAR_0, VAR_16, VAR_19, *VAR_20, 0);
  break;
 default:
  FUNC_1(VAR_11, "unknown object '%s'", VAR_18);
  return;
 }
}
