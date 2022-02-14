
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct gctl_req {int dummy; } ;
struct g_class {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gctl_req*,struct g_class*) ;
 int FUNC_1 (struct gctl_req*,struct g_class*) ;
 int FUNC_2 (struct gctl_req*,struct g_class*) ;
 int FUNC_3 (struct gctl_req*,struct g_class*) ;
 int FUNC_4 (struct gctl_req*,struct g_class*) ;
 int FUNC_5 (struct gctl_req*,struct g_class*) ;
 int FUNC_6 (struct gctl_req*,struct g_class*) ;
 int FUNC_7 (struct gctl_req*,struct g_class*) ;
 int FUNC_8 (struct gctl_req*,struct g_class*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct gctl_req*,char*,...) ;
 scalar_t__* FUNC_11 (struct gctl_req*,char*,int) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

void
FUNC_13(struct gctl_req *VAR_4, struct g_class *VAR_5, const char *VAR_6)
{
 uint32_t *VAR_7;

 FUNC_9();

 VAR_7 = FUNC_11(VAR_4, "version", sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_10(VAR_4, "No '%s' argument.", "version");
  return;
 }
 while (*VAR_7 != VAR_0) {
  if (VAR_0 == VAR_2 &&
      *VAR_7 == VAR_1) {

   break;
  }
  if (VAR_0 == VAR_3 &&
      (*VAR_7 == VAR_1 ||
       *VAR_7 == VAR_2)) {

   break;
  }
  FUNC_10(VAR_4, "Userland and kernel parts are out of sync.");
  return;
 }

 if (FUNC_12(VAR_6, "attach") == 0)
  FUNC_0(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "detach") == 0 || FUNC_12(VAR_6, "stop") == 0)
  FUNC_3(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "onetime") == 0)
  FUNC_5(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "configure") == 0)
  FUNC_1(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "setkey") == 0)
  FUNC_7(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "delkey") == 0)
  FUNC_2(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "suspend") == 0)
  FUNC_8(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "resume") == 0)
  FUNC_6(VAR_4, VAR_5);
 else if (FUNC_12(VAR_6, "kill") == 0)
  FUNC_4(VAR_4, VAR_5);
 else
  FUNC_10(VAR_4, "Unknown verb.");
}
