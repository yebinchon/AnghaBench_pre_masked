
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct gctl_req {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_class {int dummy; } ;
typedef int param ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (struct gctl_req*,struct g_class*,struct g_provider*,int,int,int,int,int,int,int,int ,int ,int,int ,int ,char const*) ;
 struct g_provider* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int* FUNC_7 (struct gctl_req*,char*,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_11(struct gctl_req *VAR_1, struct g_class *VAR_2)
{
 struct g_provider *VAR_3;
 intmax_t *VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
     VAR_15, VAR_16;
 const char *VAR_17, *VAR_18;
 char VAR_19[16];
 int VAR_20, *VAR_21;

 FUNC_3();

 VAR_5 = -1;
 VAR_6 = -1;
 VAR_7 = -1;
 VAR_8 = -1;
 VAR_9 = 0;
 VAR_10 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = -1;
 VAR_15 = -1;
 VAR_16 = -1;

 VAR_21 = FUNC_6(VAR_1, "nargs", sizeof(*VAR_21));
 if (VAR_21 == ((void*)0)) {
  FUNC_4(VAR_1, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_21 <= 0) {
  FUNC_4(VAR_1, "Missing device(s).");
  return;
 }
 VAR_4 = FUNC_7(VAR_1, "error", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_5 = *VAR_4;
 }
 VAR_4 = FUNC_7(VAR_1, "rfailprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_6 = *VAR_4;
  if (VAR_6 < -1 || VAR_6 > 100) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "rfailprob");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "wfailprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_7 = *VAR_4;
  if (VAR_7 < -1 || VAR_7 > 100) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "wfailprob");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "delaymsec", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_14 = *VAR_4;
  if (VAR_14 < 1 && VAR_14 != -1) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "delaymsec");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "rdelayprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_15 = *VAR_4;
  if (VAR_15 < -1 || VAR_15 > 100) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "rdelayprob");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "wdelayprob", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_16 = *VAR_4;
  if (VAR_16 < -1 || VAR_16 > 100) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "wdelayprob");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "count_until_fail", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_8 = *VAR_4;
  if (VAR_8 < -1) {
   FUNC_4(VAR_1, "Invalid '%s' argument",
       "count_until_fail");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "offset", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_9 = *VAR_4;
  if (VAR_9 < 0) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "offset");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "size", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_11 = *VAR_4;
  if (VAR_11 < 0) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "size");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "secsize", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_10 = *VAR_4;
  if (VAR_10 < 0) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "secsize");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "stripesize", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_12 = *VAR_4;
  if (VAR_12 < 0) {
   FUNC_4(VAR_1, "Invalid '%s' argument", "stripesize");
   return;
  }
 }
 VAR_4 = FUNC_7(VAR_1, "stripeoffset", sizeof(*VAR_4));
 if (VAR_4 != ((void*)0)) {
  VAR_13 = *VAR_4;
  if (VAR_13 < 0) {
   FUNC_4(VAR_1, "Invalid '%s' argument",
       "stripeoffset");
   return;
  }
 }
 VAR_18 = FUNC_5(VAR_1, "physpath");

 for (VAR_20 = 0; VAR_20 < *VAR_21; VAR_20++) {
  FUNC_8(VAR_19, sizeof(VAR_19), "arg%d", VAR_20);
  VAR_17 = FUNC_5(VAR_1, VAR_19);
  if (VAR_17 == ((void*)0)) {
   FUNC_4(VAR_1, "No 'arg%d' argument", VAR_20);
   return;
  }
  if (FUNC_10(VAR_17, "/dev/", FUNC_9("/dev/")) == 0)
   VAR_17 += FUNC_9("/dev/");
  VAR_3 = FUNC_2(VAR_17);
  if (VAR_3 == ((void*)0)) {
   FUNC_0(1, "Provider %s is invalid.", VAR_17);
   FUNC_4(VAR_1, "Provider %s is invalid.", VAR_17);
   return;
  }
  if (FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_5 == -1 ? VAR_0 : (int)VAR_5,
      VAR_8 == -1 ? 0 : (u_int)VAR_8,
      VAR_6 == -1 ? 0 : (u_int)VAR_6,
      VAR_7 == -1 ? 0 : (u_int)VAR_7,
      VAR_14 == -1 ? 1 : (u_int)VAR_14,
      VAR_15 == -1 ? 0 : (u_int)VAR_15,
      VAR_16 == -1 ? 0 : (u_int)VAR_16,
      (off_t)VAR_9, (off_t)VAR_11, (u_int)VAR_10,
      (off_t)VAR_12, (off_t)VAR_13,
      VAR_18) != 0) {
   return;
  }
 }
}
