
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct gctl_req {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;
struct g_cache_metadata {char const* md_magic; char const* md_name; int md_size; int md_bsize; scalar_t__ md_provsize; int md_version; } ;
typedef scalar_t__ intmax_t ;


 int FUNC_0 (int,char*,char const*) ;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_geom* FUNC_1 (struct g_class*,struct g_provider*,struct g_cache_metadata*,int ) ;
 struct g_provider* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 void* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (char const*,char const*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 struct g_cache_metadata VAR_5;
 struct g_provider *VAR_6;
 struct g_geom *VAR_7;
 intmax_t *VAR_8, *VAR_9;
 const char *VAR_10;
 int *VAR_11;

 FUNC_3();

 VAR_11 = FUNC_6(VAR_3, "nargs", sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_3, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_11 != 2) {
  FUNC_4(VAR_3, "Invalid number of arguments.");
  return;
 }

 FUNC_7(VAR_5.md_magic, VAR_0, sizeof(VAR_5.md_magic));
 VAR_5.md_version = VAR_2;
 VAR_10 = FUNC_5(VAR_3, "arg0");
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_3, "No 'arg0' argument");
  return;
 }
 FUNC_7(VAR_5.md_name, VAR_10, sizeof(VAR_5.md_name));

 VAR_9 = FUNC_6(VAR_3, "size", sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_3, "No '%s' argument", "size");
  return;
 }
 if ((u_int)*VAR_9 < 100) {
  FUNC_4(VAR_3, "Invalid '%s' argument", "size");
  return;
 }
 VAR_5.md_size = (u_int)*VAR_9;

 VAR_8 = FUNC_6(VAR_3, "blocksize", sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_3, "No '%s' argument", "blocksize");
  return;
 }
 if (*VAR_8 < 0) {
  FUNC_4(VAR_3, "Invalid '%s' argument", "blocksize");
  return;
 }
 VAR_5.md_bsize = (u_int)*VAR_8;


 VAR_5.md_provsize = 0;

 VAR_10 = FUNC_5(VAR_3, "arg1");
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_3, "No 'arg1' argument");
  return;
 }
 if (FUNC_9(VAR_10, "/dev/", FUNC_8("/dev/")) == 0)
  VAR_10 += FUNC_8("/dev/");
 VAR_6 = FUNC_2(VAR_10);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(1, "Provider %s is invalid.", VAR_10);
  FUNC_4(VAR_3, "Provider %s is invalid.", VAR_10);
  return;
 }
 VAR_7 = FUNC_1(VAR_4, VAR_6, &VAR_5, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_3, "Can't create %s.", VAR_5.md_name);
  return;
 }
}
