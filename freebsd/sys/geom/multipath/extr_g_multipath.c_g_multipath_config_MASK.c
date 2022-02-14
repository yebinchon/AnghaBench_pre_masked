
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
 int FUNC_4 (struct gctl_req*,struct g_class*,int) ;
 int FUNC_5 (struct gctl_req*,struct g_class*) ;
 int FUNC_6 (struct gctl_req*,struct g_class*) ;
 int FUNC_7 (struct gctl_req*,struct g_class*) ;
 int FUNC_8 (struct gctl_req*,struct g_class*) ;
 int FUNC_9 (struct gctl_req*,struct g_class*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct gctl_req*,char*,...) ;
 scalar_t__* FUNC_12 (struct gctl_req*,char*,int) ;
 scalar_t__ FUNC_13 (char const*,char*) ;

__attribute__((used)) static void
FUNC_14(struct gctl_req *VAR_1, struct g_class *VAR_2, const char *VAR_3)
{
 uint32_t *VAR_4;
 FUNC_10();
 VAR_4 = FUNC_12(VAR_1, "version", sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_11(VAR_1, "No 'version' argument");
 } else if (*VAR_4 != VAR_0) {
  FUNC_11(VAR_1, "Userland and kernel parts are out of sync");
 } else if (FUNC_13(VAR_3, "add") == 0) {
  FUNC_0(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "prefer") == 0) {
  FUNC_6(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "create") == 0) {
  FUNC_2(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "configure") == 0) {
  FUNC_1(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "stop") == 0) {
  FUNC_9(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "destroy") == 0) {
  FUNC_3(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "fail") == 0) {
  FUNC_4(VAR_1, VAR_2, 1);
 } else if (FUNC_13(VAR_3, "restore") == 0) {
  FUNC_4(VAR_1, VAR_2, 0);
 } else if (FUNC_13(VAR_3, "remove") == 0) {
  FUNC_7(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "rotate") == 0) {
  FUNC_8(VAR_1, VAR_2);
 } else if (FUNC_13(VAR_3, "getactive") == 0) {
  FUNC_5(VAR_1, VAR_2);
 } else {
  FUNC_11(VAR_1, "Unknown verb %s", VAR_3);
 }
}
