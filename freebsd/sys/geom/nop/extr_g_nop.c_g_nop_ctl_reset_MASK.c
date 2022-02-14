
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gctl_req {int dummy; } ;
struct g_provider {TYPE_1__* geom; } ;
struct g_nop_softc {scalar_t__ sc_wrotebytes; scalar_t__ sc_readbytes; scalar_t__ sc_cmd2s; scalar_t__ sc_cmd1s; scalar_t__ sc_cmd0s; scalar_t__ sc_flushes; scalar_t__ sc_getattrs; scalar_t__ sc_deletes; scalar_t__ sc_writes; scalar_t__ sc_reads; } ;
struct g_class {int dummy; } ;
typedef int param ;
struct TYPE_2__ {struct g_nop_softc* softc; struct g_class* class; } ;


 int FUNC_0 (int,char*,char const*) ;
 struct g_provider* FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 int* FUNC_5 (struct gctl_req*,char*,int) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_nop_softc *VAR_2;
 struct g_provider *VAR_3;
 const char *VAR_4;
 char VAR_5[16];
 int VAR_6, *VAR_7;

 FUNC_2();

 VAR_7 = FUNC_5(VAR_0, "nargs", sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_0, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_7 <= 0) {
  FUNC_3(VAR_0, "Missing device(s).");
  return;
 }

 for (VAR_6 = 0; VAR_6 < *VAR_7; VAR_6++) {
  FUNC_6(VAR_5, sizeof(VAR_5), "arg%d", VAR_6);
  VAR_4 = FUNC_4(VAR_0, VAR_5);
  if (VAR_4 == ((void*)0)) {
   FUNC_3(VAR_0, "No 'arg%d' argument", VAR_6);
   return;
  }
  if (FUNC_8(VAR_4, "/dev/", FUNC_7("/dev/")) == 0)
   VAR_4 += FUNC_7("/dev/");
  VAR_3 = FUNC_1(VAR_4);
  if (VAR_3 == ((void*)0) || VAR_3->geom->class != VAR_1) {
   FUNC_0(1, "Provider %s is invalid.", VAR_4);
   FUNC_3(VAR_0, "Provider %s is invalid.", VAR_4);
   return;
  }
  VAR_2 = VAR_3->geom->softc;
  VAR_2->sc_reads = 0;
  VAR_2->sc_writes = 0;
  VAR_2->sc_deletes = 0;
  VAR_2->sc_getattrs = 0;
  VAR_2->sc_flushes = 0;
  VAR_2->sc_cmd0s = 0;
  VAR_2->sc_cmd1s = 0;
  VAR_2->sc_cmd2s = 0;
  VAR_2->sc_readbytes = 0;
  VAR_2->sc_wrotebytes = 0;
 }
}
