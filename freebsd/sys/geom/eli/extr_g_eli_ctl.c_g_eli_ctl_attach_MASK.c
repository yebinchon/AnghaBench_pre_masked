
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_eli_metadata {int md_keys; int md_flags; } ;
typedef struct g_eli_metadata u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {char const* name; } ;
struct g_class {int dummy; } ;
typedef int mkey ;
typedef int md ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct g_eli_metadata*,int) ;
 int FUNC_2 (struct gctl_req*,struct g_class*,struct g_provider*,struct g_eli_metadata*,struct g_eli_metadata*,int) ;
 int FUNC_3 (struct g_eli_metadata*,struct g_eli_metadata*,struct g_eli_metadata*,int) ;
 int FUNC_4 (struct g_eli_metadata*,struct g_eli_metadata*,struct g_eli_metadata*,int*) ;
 int FUNC_5 (struct g_class*,struct g_provider*,struct g_eli_metadata*) ;
 struct g_provider* FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct gctl_req*,char*,...) ;
 char* FUNC_9 (struct gctl_req*,char*) ;
 void* FUNC_10 (struct gctl_req*,char*,int*) ;
 void* FUNC_11 (struct gctl_req*,char*,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_14(struct gctl_req *VAR_5, struct g_class *VAR_6)
{
 struct g_eli_metadata VAR_7;
 struct g_provider *VAR_8;
 const char *VAR_9;
 u_char *VAR_10, VAR_11[VAR_0];
 int *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 intmax_t *VAR_21;

 FUNC_7();

 VAR_12 = FUNC_11(VAR_5, "nargs", sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_8(VAR_5, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_12 != 1) {
  FUNC_8(VAR_5, "Invalid number of arguments.");
  return;
 }

 VAR_13 = FUNC_11(VAR_5, "detach", sizeof(*VAR_13));
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_5, "No '%s' argument.", "detach");
  return;
 }


 VAR_18 = -1;
 VAR_21 = FUNC_10(VAR_5, "keyno", &VAR_20);
 if (VAR_21 != ((void*)0)) {
  VAR_21 = FUNC_11(VAR_5, "keyno", sizeof(*VAR_21));
  if (VAR_21 != ((void*)0))
   VAR_18 = *VAR_21;
 }
 if (VAR_18 < -1 || VAR_18 >= VAR_3) {
  FUNC_8(VAR_5, "Invalid '%s' argument.", "keyno");
  return;
 }

 VAR_14 = FUNC_11(VAR_5, "readonly", sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_8(VAR_5, "No '%s' argument.", "readonly");
  return;
 }


 VAR_19 = 0;
 VAR_15 = FUNC_10(VAR_5, "dryrun", &VAR_20);
 if (VAR_15 != ((void*)0)) {
  VAR_15 = FUNC_11(VAR_5, "dryrun", sizeof(*VAR_15));
  if (VAR_15 != ((void*)0))
   VAR_19 = *VAR_15;
 }

 if (*VAR_13 && *VAR_14) {
  FUNC_8(VAR_5, "Options -d and -r are mutually exclusive.");
  return;
 }

 VAR_9 = FUNC_9(VAR_5, "arg0");
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_5, "No 'arg%u' argument.", 0);
  return;
 }
 if (FUNC_13(VAR_9, "/dev/", FUNC_12("/dev/")) == 0)
  VAR_9 += FUNC_12("/dev/");
 VAR_8 = FUNC_6(VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_8(VAR_5, "Provider %s is invalid.", VAR_9);
  return;
 }
 VAR_17 = FUNC_5(VAR_6, VAR_8, &VAR_7);
 if (VAR_17 != 0) {
  FUNC_8(VAR_5, "Cannot read metadata from %s (error=%d).",
      VAR_9, VAR_17);
  return;
 }
 if (VAR_7.md_keys == 0x00) {
  FUNC_1(&VAR_7, sizeof(VAR_7));
  FUNC_8(VAR_5, "No valid keys on %s.", VAR_8->name);
  return;
 }

 VAR_10 = FUNC_10(VAR_5, "key", &VAR_16);
 if (VAR_10 == ((void*)0) || VAR_16 != VAR_4) {
  FUNC_1(&VAR_7, sizeof(VAR_7));
  FUNC_8(VAR_5, "No '%s' argument.", "key");
  return;
 }

 if (VAR_18 == -1)
  VAR_17 = FUNC_4(&VAR_7, VAR_10, VAR_11, &VAR_18);
 else
  VAR_17 = FUNC_3(&VAR_7, VAR_10, VAR_11, VAR_18);
 FUNC_1(VAR_10, VAR_16);
 if (VAR_17 == -1) {
  FUNC_1(&VAR_7, sizeof(VAR_7));
  FUNC_8(VAR_5, "Wrong key for %s.", VAR_8->name);
  return;
 } else if (VAR_17 > 0) {
  FUNC_1(&VAR_7, sizeof(VAR_7));
  FUNC_8(VAR_5, "Cannot decrypt Master Key for %s (error=%d).",
      VAR_8->name, VAR_17);
  return;
 }
 FUNC_0(1, "Using Master Key %u for %s.", VAR_18, VAR_8->name);

 if (*VAR_13)
  VAR_7.md_flags |= VAR_2;
 if (*VAR_14)
  VAR_7.md_flags |= VAR_1;
 if (!VAR_19)
  FUNC_2(VAR_5, VAR_6, VAR_8, &VAR_7, VAR_11, VAR_18);
 FUNC_1(VAR_11, sizeof(VAR_11));
 FUNC_1(&VAR_7, sizeof(VAR_7));
}
