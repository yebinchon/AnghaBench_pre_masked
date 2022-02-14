
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_raid_softc {int sc_lock; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_raid_softc*,int) ;
 struct g_raid_softc* FUNC_1 (struct g_class*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct gctl_req *VAR_2, struct g_class *VAR_3)
{
 struct g_raid_softc *VAR_4;
 const char *VAR_5;
 int *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_6(VAR_2, "nargs", sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_2, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_6 != 1) {
  FUNC_4(VAR_2, "Invalid number of arguments.");
  return;
 }
 VAR_5 = FUNC_5(VAR_2, "arg0");
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_2, "No array name received.");
  return;
 }
 VAR_4 = FUNC_1(VAR_3, VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_2, "Array '%s' not found.", VAR_5);
  return;
 }
 VAR_7 = FUNC_6(VAR_2, "force", sizeof(*VAR_7));
 if (VAR_7 != ((void*)0) && *VAR_7)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;
 FUNC_3();
 FUNC_7(&VAR_4->sc_lock);
 VAR_8 = FUNC_0(VAR_4, VAR_9);
 if (VAR_8 != 0)
  FUNC_4(VAR_2, "Array is busy.");
 FUNC_2();
}
