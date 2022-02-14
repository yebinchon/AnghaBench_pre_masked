
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_class {int dummy; } ;
struct g_cache_softc {scalar_t__ sc_wrotebytes; scalar_t__ sc_writes; scalar_t__ sc_cachefull; scalar_t__ sc_cachemisses; scalar_t__ sc_cachehits; scalar_t__ sc_cachereadbytes; scalar_t__ sc_cachereads; scalar_t__ sc_readbytes; scalar_t__ sc_reads; } ;
typedef int param ;


 int FUNC_0 (int,char*,char const*) ;
 struct g_cache_softc* FUNC_1 (struct g_class*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 int* FUNC_5 (struct gctl_req*,char*,int) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_cache_softc *VAR_2;
 const char *VAR_3;
 char VAR_4[16];
 int VAR_5, *VAR_6;

 FUNC_2();

 VAR_6 = FUNC_5(VAR_0, "nargs", sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_6 <= 0) {
  FUNC_3(VAR_0, "Missing device(s).");
  return;
 }

 for (VAR_5 = 0; VAR_5 < *VAR_6; VAR_5++) {
  FUNC_6(VAR_4, sizeof(VAR_4), "arg%d", VAR_5);
  VAR_3 = FUNC_4(VAR_0, VAR_4);
  if (VAR_3 == ((void*)0)) {
   FUNC_3(VAR_0, "No 'arg%d' argument", VAR_5);
   return;
  }
  VAR_2 = FUNC_1(VAR_1, VAR_3);
  if (VAR_2 == ((void*)0)) {
   FUNC_0(1, "Device %s is invalid.", VAR_3);
   FUNC_3(VAR_0, "Device %s is invalid.", VAR_3);
   return;
  }
  VAR_2->sc_reads = 0;
  VAR_2->sc_readbytes = 0;
  VAR_2->sc_cachereads = 0;
  VAR_2->sc_cachereadbytes = 0;
  VAR_2->sc_cachehits = 0;
  VAR_2->sc_cachemisses = 0;
  VAR_2->sc_cachefull = 0;
  VAR_2->sc_writes = 0;
  VAR_2->sc_wrotebytes = 0;
 }
}
