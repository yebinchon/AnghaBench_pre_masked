
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_class {int dummy; } ;
typedef int param ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (struct gctl_req*,struct g_class*,struct g_provider*) ;
 struct g_provider* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_provider *VAR_2;
 const char *VAR_3;
 char VAR_4[16];
 int VAR_5, *VAR_6;

 FUNC_3();

 VAR_6 = FUNC_6(VAR_0, "nargs", sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_0, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_6 <= 0) {
  FUNC_4(VAR_0, "Missing device(s).");
  return;
 }
 for (VAR_5 = 0; VAR_5 < *VAR_6; VAR_5++) {
  FUNC_7(VAR_4, sizeof(VAR_4), "arg%d", VAR_5);
  VAR_3 = FUNC_5(VAR_0, VAR_4);
  if (VAR_3 == ((void*)0)) {
   FUNC_4(VAR_0, "No 'arg%d' argument", VAR_5);
   return;
  }
  if (FUNC_9(VAR_3, "/dev/", FUNC_8("/dev/")) == 0)
   VAR_3 += FUNC_8("/dev/");
  VAR_2 = FUNC_2(VAR_3);
  if (VAR_2 == ((void*)0)) {
   FUNC_0(1, "Provider %s is invalid.", VAR_3);
   FUNC_4(VAR_0, "Provider %s is invalid.", VAR_3);
   return;
  }
  if (FUNC_1(VAR_0, VAR_1, VAR_2) != 0)
   return;
 }
}
