
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct gctl_req {int dummy; } ;
struct g_class {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gctl_req*,struct g_class*) ;
 int FUNC_1 (struct gctl_req*,struct g_class*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 scalar_t__* FUNC_4 (struct gctl_req*,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_1, struct g_class *VAR_2, const char *VAR_3)
{
 uint32_t *VAR_4;

 FUNC_2();

 VAR_4 = FUNC_4(VAR_1, "version", sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_1, "No '%s' argument.", "version");
  return;
 }
 if (*VAR_4 != VAR_0) {
  FUNC_3(VAR_1, "Userland and kernel parts are out of sync.");
  return;
 }

 if (FUNC_5(VAR_3, "create") == 0) {
  FUNC_0(VAR_1, VAR_2);
  return;
 } else if (FUNC_5(VAR_3, "destroy") == 0) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }

 FUNC_3(VAR_1, "Unknown verb.");
}
