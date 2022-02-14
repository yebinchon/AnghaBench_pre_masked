
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_eli_metadata {scalar_t__ md_ealgo; scalar_t__ md_aalgo; scalar_t__ md_keylen; int md_keys; int md_sectorsize; struct g_eli_metadata* md_hash; struct g_eli_metadata* md_salt; scalar_t__ md_provsize; int md_flags; int md_version; int md_magic; } ;
typedef struct g_eli_metadata u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {int sectorsize; } ;
struct g_class {int dummy; } ;
typedef int mkey ;
typedef int md ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct g_eli_metadata*,int,int ) ;
 int FUNC_1 (struct g_eli_metadata*,int) ;
 int FUNC_2 (struct g_eli_metadata*,int) ;
 int FUNC_3 (struct gctl_req*,struct g_class*,struct g_provider*,struct g_eli_metadata*,struct g_eli_metadata*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 void* FUNC_6 (char const*) ;
 struct g_provider* FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct gctl_req*,char*,...) ;
 char* FUNC_10 (struct gctl_req*,char*) ;
 void* FUNC_11 (struct gctl_req*,char*,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_15(struct gctl_req *VAR_11, struct g_class *VAR_12)
{
 struct g_eli_metadata VAR_13;
 struct g_provider *VAR_14;
 const char *VAR_15;
 intmax_t *VAR_16, *VAR_17;
 u_char VAR_18[VAR_2];
 int *VAR_19, *VAR_20, *VAR_21, *VAR_22;

 FUNC_8();
 FUNC_1(&VAR_13, sizeof(VAR_13));

 VAR_19 = FUNC_11(VAR_11, "nargs", sizeof(*VAR_19));
 if (VAR_19 == ((void*)0)) {
  FUNC_9(VAR_11, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_19 != 1) {
  FUNC_9(VAR_11, "Invalid number of arguments.");
  return;
 }

 FUNC_12(VAR_13.md_magic, VAR_8, sizeof(VAR_13.md_magic));
 VAR_13.md_version = VAR_9;
 VAR_13.md_flags |= VAR_6;
 VAR_13.md_flags |= VAR_4;

 VAR_20 = FUNC_11(VAR_11, "detach", sizeof(*VAR_20));
 if (VAR_20 != ((void*)0) && *VAR_20)
  VAR_13.md_flags |= VAR_7;
 VAR_21 = FUNC_11(VAR_11, "noautoresize",
     sizeof(*VAR_21));
 if (VAR_21 != ((void*)0) && *VAR_21)
  VAR_13.md_flags &= ~VAR_4;
 VAR_22 = FUNC_11(VAR_11, "notrim", sizeof(*VAR_22));
 if (VAR_22 != ((void*)0) && *VAR_22)
  VAR_13.md_flags |= VAR_5;

 VAR_13.md_ealgo = VAR_1 - 1;
 VAR_15 = FUNC_10(VAR_11, "aalgo");
 if (VAR_15 == ((void*)0)) {
  FUNC_9(VAR_11, "No '%s' argument.", "aalgo");
  return;
 }
 if (*VAR_15 != '\0') {
  VAR_13.md_aalgo = FUNC_5(VAR_15);
  if (VAR_13.md_aalgo >= VAR_1 &&
      VAR_13.md_aalgo <= VAR_0) {
   VAR_13.md_flags |= VAR_3;
  } else {




   VAR_13.md_ealgo = FUNC_6(VAR_15);
   if (VAR_13.md_ealgo < VAR_1 ||
       VAR_13.md_ealgo > VAR_0) {
    FUNC_9(VAR_11,
        "Invalid authentication algorithm.");
    return;
   } else {
    FUNC_9(VAR_11, "warning: The -e option, not "
        "the -a option is now used to specify "
        "encryption algorithm to use.");
   }
  }
 }

 if (VAR_13.md_ealgo < VAR_1 ||
     VAR_13.md_ealgo > VAR_0) {
  VAR_15 = FUNC_10(VAR_11, "ealgo");
  if (VAR_15 == ((void*)0)) {
   FUNC_9(VAR_11, "No '%s' argument.", "ealgo");
   return;
  }
  VAR_13.md_ealgo = FUNC_6(VAR_15);
  if (VAR_13.md_ealgo < VAR_1 ||
      VAR_13.md_ealgo > VAR_0) {
   FUNC_9(VAR_11, "Invalid encryption algorithm.");
   return;
  }
 }

 VAR_16 = FUNC_11(VAR_11, "keylen", sizeof(*VAR_16));
 if (VAR_16 == ((void*)0)) {
  FUNC_9(VAR_11, "No '%s' argument.", "keylen");
  return;
 }
 VAR_13.md_keylen = FUNC_4(VAR_13.md_ealgo, *VAR_16);
 if (VAR_13.md_keylen == 0) {
  FUNC_9(VAR_11, "Invalid '%s' argument.", "keylen");
  return;
 }


 VAR_13.md_provsize = 0;

 FUNC_1(VAR_13.md_salt, sizeof(VAR_13.md_salt));

 VAR_13.md_keys = 0x01;
 FUNC_0(VAR_18, sizeof(VAR_18), 0);


 FUNC_1(VAR_13.md_hash, sizeof(VAR_13.md_hash));

 VAR_15 = FUNC_10(VAR_11, "arg0");
 if (VAR_15 == ((void*)0)) {
  FUNC_9(VAR_11, "No 'arg%u' argument.", 0);
  return;
 }
 if (FUNC_14(VAR_15, "/dev/", FUNC_13("/dev/")) == 0)
  VAR_15 += FUNC_13("/dev/");
 VAR_14 = FUNC_7(VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_9(VAR_11, "Provider %s is invalid.", VAR_15);
  return;
 }

 VAR_17 = FUNC_11(VAR_11, "sectorsize", sizeof(*VAR_17));
 if (VAR_17 == ((void*)0)) {
  FUNC_9(VAR_11, "No '%s' argument.", "sectorsize");
  return;
 }
 if (*VAR_17 == 0)
  VAR_13.md_sectorsize = VAR_14->sectorsize;
 else {
  if (*VAR_17 < 0 || (*VAR_17 % VAR_14->sectorsize) != 0) {
   FUNC_9(VAR_11, "Invalid sector size.");
   return;
  }
  if (*VAR_17 > VAR_10) {
   FUNC_9(VAR_11, "warning: Using sectorsize bigger than "
       "the page size!");
  }
  VAR_13.md_sectorsize = *VAR_17;
 }

 FUNC_3(VAR_11, VAR_12, VAR_14, &VAR_13, VAR_18, -1);
 FUNC_2(VAR_18, sizeof(VAR_18));
 FUNC_2(&VAR_13, sizeof(VAR_13));
}
