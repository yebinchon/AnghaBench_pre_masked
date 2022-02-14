
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct gctl_req {int dummy; } ;
struct g_class {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 scalar_t__* FUNC_4 (struct gctl_req*,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct gctl_req*,struct g_class*) ;
 int FUNC_7 (struct gctl_req*,struct g_class*) ;
 int FUNC_8 (struct gctl_req*,struct g_class*) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_1, struct g_class *VAR_2, char const *VAR_3)
{
 uint32_t *VAR_4;

 FUNC_0();

 VAR_4 = FUNC_4(VAR_1, "version", sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_1, "Failed to get 'version' argument");
  return;
 }
 if (*VAR_4 != VAR_0) {
  FUNC_3(VAR_1, "Userland and kernel versions out of sync");
  return;
 }

 FUNC_2();
 if (FUNC_5(VAR_3, "add") == 0)
  FUNC_6(VAR_1, VAR_2);
 else if (FUNC_5(VAR_3, "stop") == 0 || FUNC_5(VAR_3, "destroy") == 0)
  FUNC_8(VAR_1, VAR_2);
 else if (FUNC_5(VAR_3, "remove") == 0)
  FUNC_7(VAR_1, VAR_2);
 else
  FUNC_3(VAR_1, "unknown verb: '%s'", VAR_3);
 FUNC_1();
}
