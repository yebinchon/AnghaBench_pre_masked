
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_provider {int mediasize; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct gctl_req*,struct g_class*,struct g_provider*,char const*,int ,int ) ;
 struct g_provider* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_1, struct g_class *VAR_2)
{
 struct g_provider *VAR_3;
 const char *VAR_4;
 int *VAR_5;

 FUNC_3();

 VAR_5 = FUNC_6(VAR_1, "nargs", sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_1, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_5 != 2) {
  FUNC_4(VAR_1, "Invalid number of arguments.");
  return;
 }



 VAR_4 = FUNC_5(VAR_1, "arg1");
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_1, "No 'arg%d' argument", 1);
  return;
 }
 if (FUNC_8(VAR_4, "/dev/", FUNC_7("/dev/")) == 0)
  VAR_4 += FUNC_7("/dev/");
 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(1, "Provider %s is invalid.", VAR_4);
  FUNC_4(VAR_1, "Provider %s is invalid.", VAR_4);
  return;
 }



 VAR_4 = FUNC_5(VAR_1, "arg0");
 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_1, "No 'arg%d' argument", 0);
  return;
 }
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, VAR_3->mediasize);
}
