
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct gctl_req {int dummy; } ;
struct g_eli_metadata {scalar_t__ md_provsize; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_1 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (struct gctl_req*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_1)
{
 struct g_eli_metadata VAR_2;
 const char *VAR_3, *VAR_4;
 off_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_1, "nargs");
 if (VAR_6 != 2) {
  FUNC_3(VAR_1, "Invalid number of arguments.");
  return;
 }
 VAR_3 = FUNC_4(VAR_1, "arg0");
 VAR_4 = FUNC_4(VAR_1, "arg1");


 if (FUNC_0(VAR_1, VAR_3, &VAR_2) == -1)
  return;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == 0) {
  FUNC_3(VAR_1, "Cannot get informations about %s: %s.", VAR_4,
      FUNC_6(VAR_0));
  return;
 }

 if (VAR_2.md_provsize != (uint64_t)VAR_5) {
  if (FUNC_5(VAR_1, "force")) {
   VAR_2.md_provsize = VAR_5;
  } else {
   FUNC_3(VAR_1, "Provider size mismatch: "
       "wrong backup file?");
   return;
  }
 }

 (void)FUNC_1(VAR_1, VAR_4, &VAR_2);
}
