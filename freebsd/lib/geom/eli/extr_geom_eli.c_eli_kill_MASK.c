
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct gctl_req*,char const*) ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (struct gctl_req*) ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_0)
{
 const char *VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_3 = FUNC_4(VAR_0, "nargs");
 VAR_4 = FUNC_4(VAR_0, "all");
 if (!VAR_4 && VAR_3 == 0) {
  FUNC_2(VAR_0, "Too few arguments.");
  return;
 }
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_1 = FUNC_3(VAR_0, "arg%d", VAR_2);
  if (!FUNC_0(VAR_1))
   FUNC_1(VAR_0, VAR_1);
 }

 FUNC_5(VAR_0);
}
