
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct gv_softc {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_softc* softc; } ;
struct g_class {int geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_geom* FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int *) ;
 int FUNC_4 (struct gctl_req*,char*,int ,scalar_t__) ;
 int FUNC_5 (struct gv_softc*,struct gctl_req*) ;
 int FUNC_6 (struct g_geom*,struct gctl_req*) ;
 int FUNC_7 (struct g_geom*,struct gctl_req*) ;
 int FUNC_8 (struct gv_softc*,struct gctl_req*) ;
 int FUNC_9 (struct gv_softc*,struct sbuf*,int ,char*) ;
 int FUNC_10 (struct g_geom*,struct gctl_req*) ;
 int FUNC_11 (struct g_geom*,struct gctl_req*) ;
 int FUNC_12 (struct g_geom*,struct gctl_req*) ;
 int FUNC_13 (struct gv_softc*,struct gctl_req*) ;
 int FUNC_14 (struct gv_softc*,int ,struct gv_softc*,int *,int ,int ) ;
 int FUNC_15 (struct g_geom*,struct gctl_req*) ;
 int FUNC_16 (struct g_geom*,struct gctl_req*) ;
 int FUNC_17 (struct g_geom*,struct gctl_req*) ;
 int FUNC_18 (struct g_geom*,struct gctl_req*) ;
 int FUNC_19 (struct g_geom*,struct gctl_req*) ;
 int FUNC_20 (struct g_geom*,struct gctl_req*) ;
 int FUNC_21 (struct sbuf*) ;
 int FUNC_22 (struct sbuf*) ;
 int FUNC_23 (struct sbuf*) ;
 scalar_t__ FUNC_24 (struct sbuf*) ;
 struct sbuf* FUNC_25 (int *,int *,int ,int ) ;
 int FUNC_26 (char const*,char*) ;

__attribute__((used)) static void
FUNC_27(struct gctl_req *VAR_4, struct g_class *VAR_5, char const *VAR_6)
{
 struct g_geom *VAR_7;
 struct gv_softc *VAR_8;
 struct sbuf *VAR_9;
 char *VAR_10;

 FUNC_1();

 VAR_7 = FUNC_0(&VAR_5->geom);
 VAR_8 = VAR_7->softc;

 if (!FUNC_26(VAR_6, "attach")) {
  FUNC_5(VAR_8, VAR_4);

 } else if (!FUNC_26(VAR_6, "concat")) {
  FUNC_6(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "detach")) {
  FUNC_8(VAR_8, VAR_4);

 } else if (!FUNC_26(VAR_6, "list")) {
  FUNC_10(VAR_7, VAR_4);


 } else if (!FUNC_26(VAR_6, "saveconfig")) {
  FUNC_14(VAR_8, VAR_2, VAR_8, ((void*)0), 0, 0);


 } else if (!FUNC_26(VAR_6, "getconfig")) {
  VAR_10 = FUNC_3(VAR_4, "comment", ((void*)0));
  if (VAR_10 == ((void*)0)) {
   FUNC_2(VAR_4, "no comment parameter given");
   return;
  }
  VAR_9 = FUNC_25(((void*)0), ((void*)0), VAR_0, VAR_3);
  FUNC_9(VAR_8, VAR_9, 0, VAR_10);
  FUNC_23(VAR_9);
  FUNC_4(VAR_4, "config", FUNC_21(VAR_9), FUNC_24(VAR_9) + 1);
  FUNC_22(VAR_9);

 } else if (!FUNC_26(VAR_6, "create")) {
  FUNC_7(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "mirror")) {
  FUNC_11(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "move")) {
  FUNC_12(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "raid5")) {
  FUNC_15(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "rebuildparity") ||
     !FUNC_26(VAR_6, "checkparity")) {
  FUNC_13(VAR_8, VAR_4);

 } else if (!FUNC_26(VAR_6, "remove")) {
  FUNC_16(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "rename")) {
  FUNC_17(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "resetconfig")) {
  FUNC_14(VAR_8, VAR_1, VAR_8, ((void*)0), 0, 0);

 } else if (!FUNC_26(VAR_6, "start")) {
  FUNC_19(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "stripe")) {
  FUNC_20(VAR_7, VAR_4);

 } else if (!FUNC_26(VAR_6, "setstate")) {
  FUNC_18(VAR_7, VAR_4);
 } else
  FUNC_2(VAR_4, "Unknown verb parameter");
}
