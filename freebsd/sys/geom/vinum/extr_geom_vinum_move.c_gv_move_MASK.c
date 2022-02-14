
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_sd {int dummy; } ;
struct gv_drive {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_softc* softc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gctl_req*,char*,...) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 int* FUNC_2 (struct gctl_req*,char*,int) ;
 struct gv_drive* FUNC_3 (struct gv_softc*,char*) ;
 struct gv_sd* FUNC_4 (struct gv_softc*,char*) ;
 int FUNC_5 (struct gv_softc*,char*) ;
 int FUNC_6 (struct gv_softc*,int ,struct gv_sd*,struct gv_drive*,int,int ) ;
 int FUNC_7 (char*,int,char*,int) ;

void
FUNC_8(struct g_geom *VAR_3, struct gctl_req *VAR_4)
{
 struct gv_softc *VAR_5;
 struct gv_sd *VAR_6;
 struct gv_drive *VAR_7;
 char VAR_8[20], *VAR_9, *VAR_10;
 int *VAR_11, *VAR_12, VAR_13, VAR_14;

 VAR_5 = VAR_3->softc;

 VAR_11 = FUNC_2(VAR_4, "argc", sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_4, "no arguments given");
  return;
 }
 VAR_12 = FUNC_2(VAR_4, "flags", sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_4, "no flags given");
  return;
 }
 VAR_9 = FUNC_1(VAR_4, "destination", ((void*)0));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_4, "no destination given");
  return;
 }
 if (FUNC_5(VAR_5, VAR_9) != VAR_1) {
  FUNC_0(VAR_4, "destination '%s' is not a drive", VAR_9);
  return;
 }
 VAR_7 = FUNC_3(VAR_5, VAR_9);





 for (VAR_13 = 1; VAR_13 < *VAR_11; VAR_13++) {
  FUNC_7(VAR_8, sizeof(VAR_8), "argv%d", VAR_13);
  VAR_10 = FUNC_1(VAR_4, VAR_8, ((void*)0));
  if (VAR_10 == ((void*)0))
   continue;

  VAR_14 = FUNC_5(VAR_5, VAR_10);
  if (VAR_14 != VAR_2) {
   FUNC_0(VAR_4, "you can only move subdisks; "
       "'%s' is not a subdisk", VAR_10);
   return;
  }

  VAR_6 = FUNC_4(VAR_5, VAR_10);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_4, "unknown subdisk '%s'", VAR_10);
   return;
  }
  FUNC_6(VAR_5, VAR_0, VAR_6, VAR_7, *VAR_12, 0);
 }
}
