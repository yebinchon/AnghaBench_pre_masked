
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_raid_softc {char* sc_name; int sc_lock; int sc_md; } ;
struct g_geom {scalar_t__ softc; } ;
struct g_class {int dummy; } ;
typedef int buf ;


 int FUNC_0 (int ,struct gctl_req*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,struct gctl_req*,struct g_geom**) ;
 int FUNC_2 (struct g_raid_softc*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct gctl_req*,char*,...) ;
 char* FUNC_6 (struct gctl_req*,char*) ;
 int* FUNC_7 (struct gctl_req*,char*,int) ;
 int FUNC_8 (struct gctl_req*,char*,char*,scalar_t__) ;
 int FUNC_9 (char*,int,char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct gctl_req *VAR_2, struct g_class *VAR_3)
{
 struct g_geom *VAR_4;
 struct g_raid_softc *VAR_5;
 const char *VAR_6;
 int *VAR_7;
 int VAR_8, VAR_9;
 char VAR_10[64];

 VAR_7 = FUNC_7(VAR_2, "nargs", sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_2, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_7 < 4) {
  FUNC_5(VAR_2, "Invalid number of arguments.");
  return;
 }
 VAR_6 = FUNC_6(VAR_2, "arg0");
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_2, "No format received.");
  return;
 }
 VAR_8 = FUNC_1(VAR_6, VAR_2, &VAR_4);
 if (VAR_8 == VAR_0) {
  FUNC_5(VAR_2, "Failed to create array with format '%s'.",
      VAR_6);
  return;
 }
 VAR_5 = (struct g_raid_softc *)VAR_4->softc;
 FUNC_4();
 FUNC_11(&VAR_5->sc_lock);
 VAR_9 = FUNC_0(VAR_5->sc_md, VAR_2);
 if (VAR_9 < 0) {
  FUNC_5(VAR_2, "Command failed: %d.", VAR_9);
  if (VAR_8 == VAR_1)
   FUNC_2(VAR_5, 0);
 } else {
  if (VAR_8 == VAR_1)
   FUNC_9(VAR_10, sizeof(VAR_10), "%s created\n", VAR_5->sc_name);
  else
   FUNC_9(VAR_10, sizeof(VAR_10), "%s reused\n", VAR_5->sc_name);
  FUNC_8(VAR_2, "output", VAR_10, FUNC_10(VAR_10) + 1);
 }
 FUNC_12(&VAR_5->sc_lock);
 FUNC_3();
}
