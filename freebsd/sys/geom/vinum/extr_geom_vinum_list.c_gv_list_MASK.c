
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct gv_volume {int dummy; } ;
struct gv_softc {int dummy; } ;
struct gv_sd {int dummy; } ;
struct gv_plex {int dummy; } ;
struct gv_drive {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_softc* softc; } ;
typedef int buf ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct gctl_req*,char*,...) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 int* FUNC_2 (struct gctl_req*,char*,int) ;
 int FUNC_3 (struct gctl_req*,char*,int ,scalar_t__) ;
 struct gv_drive* FUNC_4 (struct gv_softc*,char*) ;
 struct gv_plex* FUNC_5 (struct gv_softc*,char*) ;
 struct gv_sd* FUNC_6 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_7 (struct gv_softc*,char*) ;
 int FUNC_8 (struct g_geom*,struct gctl_req*,struct sbuf*) ;
 int FUNC_9 (struct gv_drive*,struct sbuf*,int) ;
 int FUNC_10 (struct g_geom*,struct gctl_req*,struct sbuf*) ;
 int FUNC_11 (struct gv_plex*,struct sbuf*,int) ;
 int FUNC_12 (struct g_geom*,struct gctl_req*,struct sbuf*) ;
 int FUNC_13 (struct gv_sd*,struct sbuf*,int) ;
 int FUNC_14 (struct g_geom*,struct gctl_req*,struct sbuf*) ;
 int FUNC_15 (struct gv_volume*,struct sbuf*,int) ;
 int FUNC_16 (struct gv_softc*,char*) ;
 int FUNC_17 (struct sbuf*) ;
 int FUNC_18 (struct sbuf*) ;
 int FUNC_19 (struct sbuf*) ;
 scalar_t__ FUNC_20 (struct sbuf*) ;
 struct sbuf* FUNC_21 (int *,int *,int ,int ) ;
 int FUNC_22 (struct sbuf*,char*) ;
 int FUNC_23 (char*,int,char*,int) ;
 int FUNC_24 (char*,char*) ;

void
FUNC_25(struct g_geom *VAR_2, struct gctl_req *VAR_3)
{
 struct gv_softc *VAR_4;
 struct gv_drive *VAR_5;
 struct gv_plex *VAR_6;
 struct gv_sd *VAR_7;
 struct gv_volume *VAR_8;
 struct sbuf *VAR_9;
 int *VAR_10, VAR_11, *VAR_12, VAR_13;
 char *VAR_14, VAR_15[20], *VAR_16;

 VAR_10 = FUNC_2(VAR_3, "argc", sizeof(*VAR_10));

 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_3, "no arguments given");
  return;
 }

 VAR_12 = FUNC_2(VAR_3, "flags", sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_3, "no flags given");
  return;
 }

 VAR_4 = VAR_2->softc;

 VAR_9 = FUNC_21(((void*)0), ((void*)0), VAR_0, VAR_1);


 VAR_16 = FUNC_1(VAR_3, "cmd", ((void*)0));
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_3, "no command given");
  return;
 }


 if (!FUNC_24(VAR_16, "list") || !FUNC_24(VAR_16, "l")) {
  if (*VAR_10) {
   for (VAR_11 = 0; VAR_11 < *VAR_10; VAR_11++) {
    FUNC_23(VAR_15, sizeof(VAR_15), "argv%d", VAR_11);
    VAR_14 = FUNC_1(VAR_3, VAR_15, ((void*)0));
    if (VAR_14 == ((void*)0))
     continue;
    VAR_13 = FUNC_16(VAR_4, VAR_14);
    switch (VAR_13) {
    case 128:
     VAR_8 = FUNC_7(VAR_4, VAR_14);
     FUNC_15(VAR_8, VAR_9, *VAR_12);
     break;
    case 130:
     VAR_6 = FUNC_5(VAR_4, VAR_14);
     FUNC_11(VAR_6, VAR_9, *VAR_12);
     break;
    case 129:
     VAR_7 = FUNC_6(VAR_4, VAR_14);
     FUNC_13(VAR_7, VAR_9, *VAR_12);
     break;
    case 131:
     VAR_5 = FUNC_4(VAR_4, VAR_14);
     FUNC_9(VAR_5, VAR_9, *VAR_12);
     break;
    default:
     FUNC_0(VAR_3, "unknown object '%s'",
         VAR_14);
     break;
    }
   }
  } else {
   FUNC_8(VAR_2, VAR_3, VAR_9);
   FUNC_22(VAR_9, "\n");
   FUNC_14(VAR_2, VAR_3, VAR_9);
   FUNC_22(VAR_9, "\n");
   FUNC_10(VAR_2, VAR_3, VAR_9);
   FUNC_22(VAR_9, "\n");
   FUNC_12(VAR_2, VAR_3, VAR_9);
  }


 } else if (!FUNC_24(VAR_16, "ld")) {
  if (*VAR_10) {
   for (VAR_11 = 0; VAR_11 < *VAR_10; VAR_11++) {
    FUNC_23(VAR_15, sizeof(VAR_15), "argv%d", VAR_11);
    VAR_14 = FUNC_1(VAR_3, VAR_15, ((void*)0));
    if (VAR_14 == ((void*)0))
     continue;
    VAR_13 = FUNC_16(VAR_4, VAR_14);
    if (VAR_13 != 131) {
     FUNC_0(VAR_3, "'%s' is not a drive",
         VAR_14);
     continue;
    } else {
     VAR_5 = FUNC_4(VAR_4, VAR_14);
     FUNC_9(VAR_5, VAR_9, *VAR_12);
    }
   }
  } else
   FUNC_8(VAR_2, VAR_3, VAR_9);


 } else if (!FUNC_24(VAR_16, "lv")) {
  if (*VAR_10) {
   for (VAR_11 = 0; VAR_11 < *VAR_10; VAR_11++) {
    FUNC_23(VAR_15, sizeof(VAR_15), "argv%d", VAR_11);
    VAR_14 = FUNC_1(VAR_3, VAR_15, ((void*)0));
    if (VAR_14 == ((void*)0))
     continue;
    VAR_13 = FUNC_16(VAR_4, VAR_14);
    if (VAR_13 != 128) {
     FUNC_0(VAR_3, "'%s' is not a volume",
         VAR_14);
     continue;
    } else {
     VAR_8 = FUNC_7(VAR_4, VAR_14);
     FUNC_15(VAR_8, VAR_9, *VAR_12);
    }
   }
  } else
   FUNC_14(VAR_2, VAR_3, VAR_9);


 } else if (!FUNC_24(VAR_16, "lp")) {
  if (*VAR_10) {
   for (VAR_11 = 0; VAR_11 < *VAR_10; VAR_11++) {
    FUNC_23(VAR_15, sizeof(VAR_15), "argv%d", VAR_11);
    VAR_14 = FUNC_1(VAR_3, VAR_15, ((void*)0));
    if (VAR_14 == ((void*)0))
     continue;
    VAR_13 = FUNC_16(VAR_4, VAR_14);
    if (VAR_13 != 130) {
     FUNC_0(VAR_3, "'%s' is not a plex",
         VAR_14);
     continue;
    } else {
     VAR_6 = FUNC_5(VAR_4, VAR_14);
     FUNC_11(VAR_6, VAR_9, *VAR_12);
    }
   }
  } else
   FUNC_10(VAR_2, VAR_3, VAR_9);


 } else if (!FUNC_24(VAR_16, "ls")) {
  if (*VAR_10) {
   for (VAR_11 = 0; VAR_11 < *VAR_10; VAR_11++) {
    FUNC_23(VAR_15, sizeof(VAR_15), "argv%d", VAR_11);
    VAR_14 = FUNC_1(VAR_3, VAR_15, ((void*)0));
    if (VAR_14 == ((void*)0))
     continue;
    VAR_13 = FUNC_16(VAR_4, VAR_14);
    if (VAR_13 != 129) {
     FUNC_0(VAR_3, "'%s' is not a subdisk",
         VAR_14);
     continue;
    } else {
     VAR_7 = FUNC_6(VAR_4, VAR_14);
     FUNC_13(VAR_7, VAR_9, *VAR_12);
    }
   }
  } else
   FUNC_12(VAR_2, VAR_3, VAR_9);

 } else
  FUNC_0(VAR_3, "unknown command '%s'", VAR_16);

 FUNC_19(VAR_9);
 FUNC_3(VAR_3, "config", FUNC_17(VAR_9), FUNC_20(VAR_9) + 1);
 FUNC_18(VAR_9);
}
