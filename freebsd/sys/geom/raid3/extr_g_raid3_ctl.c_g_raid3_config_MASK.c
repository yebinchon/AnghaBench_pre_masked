
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
 int FUNC_2 (struct gctl_req*,struct g_class*) ;
 int FUNC_3 (struct gctl_req*,struct g_class*) ;
 int FUNC_4 (struct gctl_req*,struct g_class*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct gctl_req*,char*,...) ;
 scalar_t__* FUNC_9 (struct gctl_req*,char*,int) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

void
FUNC_11(struct gctl_req *VAR_1, struct g_class *VAR_2, const char *VAR_3)
{
 uint32_t *VAR_4;

 FUNC_5();

 VAR_4 = FUNC_9(VAR_1, "version", sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_8(VAR_1, "No '%s' argument.", "version");
  return;
 }
 if (*VAR_4 != VAR_0) {
  FUNC_8(VAR_1, "Userland and kernel parts are out of sync.");
  return;
 }

 FUNC_7();
 if (FUNC_10(VAR_3, "configure") == 0)
  FUNC_0(VAR_1, VAR_2);
 else if (FUNC_10(VAR_3, "insert") == 0)
  FUNC_1(VAR_1, VAR_2);
 else if (FUNC_10(VAR_3, "rebuild") == 0)
  FUNC_2(VAR_1, VAR_2);
 else if (FUNC_10(VAR_3, "remove") == 0)
  FUNC_3(VAR_1, VAR_2);
 else if (FUNC_10(VAR_3, "stop") == 0)
  FUNC_4(VAR_1, VAR_2);
 else
  FUNC_8(VAR_1, "Unknown verb.");
 FUNC_6();
}
