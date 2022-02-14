
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gctl_req {int dummy; } ;
struct g_virstor_softc {TYPE_1__* geom; } ;
struct g_class {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 int* FUNC_5 (struct gctl_req*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct g_virstor_softc*) ;
 struct g_virstor_softc* FUNC_8 (struct g_class*,char const*) ;
 int FUNC_9 (struct g_virstor_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 int *VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_3, "nargs", sizeof *VAR_6);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_3, "Error fetching argument '%s'", "nargs");
  return;
 }
 if (*VAR_6 < 1) {
  FUNC_3(VAR_3, "Invalid number of arguments");
  return;
 }
 VAR_5 = FUNC_5(VAR_3, "force", sizeof *VAR_5);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_3, "Error fetching argument '%s'", "force");
  return;
 }

 FUNC_1();
 for (VAR_7 = 0; VAR_7 < *VAR_6; VAR_7++) {
  char VAR_8[8];
  const char *VAR_9;
  struct g_virstor_softc *VAR_10;
  int VAR_11;

  FUNC_6(VAR_8, "arg%d", VAR_7);
  VAR_9 = FUNC_4(VAR_3, VAR_8);
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_3, "No 'arg%d' argument", VAR_7);
   FUNC_2();
   return;
  }
  VAR_10 = FUNC_8(VAR_4, VAR_9);
  if (VAR_10 == ((void*)0)) {
   FUNC_3(VAR_3, "Don't know anything about '%s'", VAR_9);
   FUNC_2();
   return;
  }

  FUNC_0(VAR_1, "Stopping %s by the userland command",
      VAR_10->geom->name);
  FUNC_7(VAR_10);
  if ((VAR_11 = FUNC_9(VAR_10, VAR_2, VAR_2)) != 0) {
   FUNC_0(VAR_0, "Cannot destroy %s: %d",
       VAR_10->geom->name, VAR_11);
  }
 }
 FUNC_2();
}
