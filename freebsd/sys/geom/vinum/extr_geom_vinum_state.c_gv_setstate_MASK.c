
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




 int FUNC_0 (struct gctl_req*,char*,...) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 int* FUNC_2 (struct gctl_req*,char*,int) ;
 int FUNC_3 (char*) ;
 struct gv_volume* FUNC_4 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_5 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_6 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_7 (struct gv_softc*,char*) ;
 int FUNC_8 (struct gv_softc*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct gv_softc*,int ,struct gv_volume*,int *,int ,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

void
FUNC_13(struct g_geom *VAR_6, struct gctl_req *VAR_7)
{
 struct gv_softc *VAR_8;
 struct gv_sd *VAR_9;
 struct gv_drive *VAR_10;
 struct gv_volume *VAR_11;
 struct gv_plex *VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15, *VAR_16, VAR_17;

 VAR_15 = 0;
 VAR_13 = FUNC_1(VAR_7, "object", ((void*)0));
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_7, "no object given");
  return;
 }

 VAR_14 = FUNC_1(VAR_7, "state", ((void*)0));
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_7, "no state given");
  return;
 }

 VAR_16 = FUNC_2(VAR_7, "flags", sizeof(*VAR_16));
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_7, "no flags given");
  return;
 }

 if (*VAR_16 & VAR_4)
  VAR_15 = VAR_5;

 VAR_8 = VAR_6->softc;
 VAR_17 = FUNC_8(VAR_8, VAR_13);
 switch (VAR_17) {
 case 128:
  if (FUNC_12(VAR_14) < 0) {
   FUNC_0(VAR_7, "invalid volume state '%s'", VAR_14);
   break;
  }
  VAR_11 = FUNC_7(VAR_8, VAR_13);
  FUNC_10(VAR_8, VAR_3, VAR_11, ((void*)0),
      FUNC_12(VAR_14), VAR_15);
  break;

 case 130:
  if (FUNC_9(VAR_14) < 0) {
   FUNC_0(VAR_7, "invalid plex state '%s'", VAR_14);
   break;
  }
  VAR_12 = FUNC_5(VAR_8, VAR_13);
  FUNC_10(VAR_8, VAR_1, VAR_12, ((void*)0),
      FUNC_9(VAR_14), VAR_15);
  break;

 case 129:
  if (FUNC_11(VAR_14) < 0) {
   FUNC_0(VAR_7, "invalid subdisk state '%s'", VAR_14);
   break;
  }
  VAR_9 = FUNC_6(VAR_8, VAR_13);
  FUNC_10(VAR_8, VAR_2, VAR_9, ((void*)0),
      FUNC_11(VAR_14), VAR_15);
  break;

 case 131:
  if (FUNC_3(VAR_14) < 0) {
   FUNC_0(VAR_7, "invalid drive state '%s'", VAR_14);
   break;
  }
  VAR_10 = FUNC_4(VAR_8, VAR_13);
  FUNC_10(VAR_8, VAR_0, VAR_10, ((void*)0),
      FUNC_3(VAR_14), VAR_15);
  break;

 default:
  FUNC_0(VAR_7, "unknown object '%s'", VAR_13);
  break;
 }
}
