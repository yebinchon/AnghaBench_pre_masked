
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_raid_softc {int sc_lock; int * sc_md; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (int *,struct gctl_req*) ;
 struct g_raid_softc* FUNC_1 (struct g_class*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_raid_softc *VAR_2;
 const char *VAR_3;
 int *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(VAR_0, "nargs", sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_0, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_4 < 1) {
  FUNC_4(VAR_0, "Invalid number of arguments.");
  return;
 }
 VAR_3 = FUNC_5(VAR_0, "arg0");
 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_0, "No array name received.");
  return;
 }
 VAR_2 = FUNC_1(VAR_1, VAR_3);
 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_0, "Array '%s' not found.", VAR_3);
  return;
 }
 FUNC_3();
 FUNC_7(&VAR_2->sc_lock);
 if (VAR_2->sc_md != ((void*)0)) {
  VAR_5 = FUNC_0(VAR_2->sc_md, VAR_0);
  if (VAR_5 < 0)
   FUNC_4(VAR_0, "Command failed: %d.", VAR_5);
 }
 FUNC_8(&VAR_2->sc_lock);
 FUNC_2();
}
