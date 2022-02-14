
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sbuf {int dummy; } ;
struct gctl_req {int dummy; } ;
struct g_provider {int name; } ;
struct g_geom {struct g_concat_softc* softc; int name; } ;
struct g_concat_softc {int dummy; } ;
struct g_concat_metadata {int md_magic; int md_name; int md_all; scalar_t__ md_provsize; int md_provider; scalar_t__ md_no; int md_id; int md_version; } ;
struct g_class {int dummy; } ;
typedef int param ;


 int FUNC_0 (int,char*,...) ;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct g_concat_softc*,struct g_provider*,int) ;
 struct g_geom* FUNC_5 (struct g_class*,struct g_concat_metadata*,int ) ;
 int FUNC_6 (struct g_concat_softc*,int) ;
 struct g_provider* FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct gctl_req*,char*,...) ;
 char* FUNC_10 (struct gctl_req*,char*) ;
 int* FUNC_11 (struct gctl_req*,char*,int) ;
 int FUNC_12 (struct sbuf*) ;
 int FUNC_13 (struct sbuf*) ;
 int FUNC_14 (struct sbuf*) ;
 struct sbuf* FUNC_15 () ;
 int FUNC_16 (struct sbuf*,char*,int ) ;
 int FUNC_17 (char*,int,char*,int) ;
 int FUNC_18 (int,char const*,int) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_21(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 u_int VAR_5, VAR_6;
 struct g_concat_metadata VAR_7;
 struct g_provider *VAR_8;
 struct g_concat_softc *VAR_9;
 struct g_geom *VAR_10;
 struct sbuf *VAR_11;
 const char *VAR_12;
 char VAR_13[16];
 int *VAR_14;

 FUNC_8();
 VAR_14 = FUNC_11(VAR_3, "nargs", sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_9(VAR_3, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_14 < 2) {
  FUNC_9(VAR_3, "Too few arguments.");
  return;
 }

 FUNC_18(VAR_7.md_magic, VAR_0, sizeof(VAR_7.md_magic));
 VAR_7.md_version = VAR_2;
 VAR_12 = FUNC_10(VAR_3, "arg0");
 if (VAR_12 == ((void*)0)) {
  FUNC_9(VAR_3, "No 'arg%u' argument.", 0);
  return;
 }
 FUNC_18(VAR_7.md_name, VAR_12, sizeof(VAR_7.md_name));
 VAR_7.md_id = FUNC_2();
 VAR_7.md_no = 0;
 VAR_7.md_all = *VAR_14 - 1;
 FUNC_3(VAR_7.md_provider, sizeof(VAR_7.md_provider));

 VAR_7.md_provsize = 0;


 for (VAR_6 = 1; VAR_6 < *VAR_14; VAR_6++) {
  FUNC_17(VAR_13, sizeof(VAR_13), "arg%u", VAR_6);
  VAR_12 = FUNC_10(VAR_3, VAR_13);
  if (VAR_12 == ((void*)0)) {
   FUNC_9(VAR_3, "No 'arg%u' argument.", VAR_6);
   return;
  }
  if (FUNC_20(VAR_12, "/dev/", FUNC_19("/dev/")) == 0)
   VAR_12 += FUNC_19("/dev/");
  VAR_8 = FUNC_7(VAR_12);
  if (VAR_8 == ((void*)0)) {
   FUNC_0(1, "Disk %s is invalid.", VAR_12);
   FUNC_9(VAR_3, "Disk %s is invalid.", VAR_12);
   return;
  }
 }

 VAR_10 = FUNC_5(VAR_4, &VAR_7, VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_9(VAR_3, "Can't configure %s.", VAR_7.md_name);
  return;
 }

 VAR_9 = VAR_10->softc;
 VAR_11 = FUNC_15();
 FUNC_16(VAR_11, "Can't attach disk(s) to %s:", VAR_10->name);
 for (VAR_5 = 0, VAR_6 = 1; VAR_6 < *VAR_14; VAR_6++) {
  FUNC_17(VAR_13, sizeof(VAR_13), "arg%u", VAR_6);
  VAR_12 = FUNC_10(VAR_3, VAR_13);
  if (VAR_12 == ((void*)0)) {
   FUNC_9(VAR_3, "No 'arg%d' argument.", VAR_6);
   return;
  }
  if (FUNC_20(VAR_12, "/dev/", FUNC_19("/dev/")) == 0)
   VAR_12 += FUNC_19("/dev/");
  VAR_8 = FUNC_7(VAR_12);
  FUNC_1(VAR_8 != ((void*)0), ("Provider %s disappear?!", VAR_12));
  if (FUNC_4(VAR_9, VAR_8, VAR_6 - 1) != 0) {
   FUNC_0(1, "Disk %u (%s) not attached to %s.",
       VAR_6, VAR_8->name, VAR_10->name);
   FUNC_16(VAR_11, " %s", VAR_8->name);
   continue;
  }
  VAR_5++;
 }
 FUNC_14(VAR_11);
 if (VAR_7.md_all != VAR_5) {
  FUNC_6(VAR_10->softc, 1);
  FUNC_9(VAR_3, "%s", FUNC_12(VAR_11));
 }
 FUNC_13(VAR_11);
}
