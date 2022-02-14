
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct gctl_req {int dummy; } ;
struct g_provider {TYPE_1__* geom; } ;
struct g_nop_softc {int sc_error; void* sc_count_until_fail; void* sc_delaymsec; void* sc_wdelayprob; void* sc_rdelayprob; void* sc_wfailprob; void* sc_rfailprob; } ;
struct g_class {int dummy; } ;
typedef int param ;
typedef int intmax_t ;
struct TYPE_2__ {struct g_nop_softc* softc; struct g_class* class; } ;


 int FUNC_0 (int,char*,char const*) ;
 struct g_provider* FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 int* FUNC_5 (struct gctl_req*,char*,int) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_nop_softc *VAR_2;
 struct g_provider *VAR_3;
 intmax_t *VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11;
 const char *VAR_12;
 char VAR_13[16];
 int VAR_14, *VAR_15;

 FUNC_2();

 VAR_11 = -1;
 VAR_5 = -1;
 VAR_6 = -1;
 VAR_7 = -1;
 VAR_8 = -1;
 VAR_9 = -1;
 VAR_10 = -1;

 VAR_15 = FUNC_5(VAR_0, "nargs", sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_0, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_15 <= 0) {
  FUNC_3(VAR_0, "Missing device(s).");
  return;
 }
 VAR_4 = FUNC_6(VAR_0, "error", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_6 = *VAR_4;
 }
 VAR_4 = FUNC_6(VAR_0, "count_until_fail", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_11 = *VAR_4;
 }
 VAR_4 = FUNC_6(VAR_0, "rfailprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_8 = *VAR_4;
  if (VAR_8 < -1 || VAR_8 > 100) {
   FUNC_3(VAR_0, "Invalid '%s' argument", "rfailprob");
   return;
  }
 }
 VAR_4 = FUNC_6(VAR_0, "wfailprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_10 = *VAR_4;
  if (VAR_10 < -1 || VAR_10 > 100) {
   FUNC_3(VAR_0, "Invalid '%s' argument", "wfailprob");
   return;
  }
 }
 VAR_4 = FUNC_6(VAR_0, "delaymsec", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_5 = *VAR_4;
  if (VAR_5 < 1 && VAR_5 != -1) {
   FUNC_3(VAR_0, "Invalid '%s' argument", "delaymsec");
   return;
  }
 }
 VAR_4 = FUNC_6(VAR_0, "rdelayprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_7 = *VAR_4;
  if (VAR_7 < -1 || VAR_7 > 100) {
   FUNC_3(VAR_0, "Invalid '%s' argument", "rdelayprob");
   return;
  }
 }
 VAR_4 = FUNC_6(VAR_0, "wdelayprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_9 = *VAR_4;
  if (VAR_9 < -1 || VAR_9 > 100) {
   FUNC_3(VAR_0, "Invalid '%s' argument", "wdelayprob");
   return;
  }
 }

 for (VAR_14 = 0; VAR_14 < *VAR_15; VAR_14++) {
  FUNC_7(VAR_13, sizeof(VAR_13), "arg%d", VAR_14);
  VAR_12 = FUNC_4(VAR_0, VAR_13);
  if (VAR_12 == ((void*)0)) {
   FUNC_3(VAR_0, "No 'arg%d' argument", VAR_14);
   return;
  }
  if (FUNC_9(VAR_12, "/dev/", FUNC_8("/dev/")) == 0)
   VAR_12 += FUNC_8("/dev/");
  VAR_3 = FUNC_1(VAR_12);
  if (VAR_3 == ((void*)0) || VAR_3->geom->class != VAR_1) {
   FUNC_0(1, "Provider %s is invalid.", VAR_12);
   FUNC_3(VAR_0, "Provider %s is invalid.", VAR_12);
   return;
  }
  VAR_2 = VAR_3->geom->softc;
  if (VAR_6 != -1)
   VAR_2->sc_error = (int)VAR_6;
  if (VAR_8 != -1)
   VAR_2->sc_rfailprob = (u_int)VAR_8;
  if (VAR_10 != -1)
   VAR_2->sc_wfailprob = (u_int)VAR_10;
  if (VAR_7 != -1)
   VAR_2->sc_rdelayprob = (u_int)VAR_7;
  if (VAR_9 != -1)
   VAR_2->sc_wdelayprob = (u_int)VAR_9;
  if (VAR_5 != -1)
   VAR_2->sc_delaymsec = (u_int)VAR_5;
  if (VAR_11 != -1)
   VAR_2->sc_count_until_fail = (u_int)VAR_11;
 }
}
