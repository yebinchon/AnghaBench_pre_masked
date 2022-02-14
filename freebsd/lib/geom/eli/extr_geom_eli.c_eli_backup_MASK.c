
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*,char const*,char const*) ;
 int FUNC_1 (struct gctl_req*,char*) ;
 char* FUNC_2 (struct gctl_req*,char*) ;
 int FUNC_3 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_4(struct gctl_req *VAR_0)
{
 const char *VAR_1, *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, "nargs");
 if (VAR_3 != 2) {
  FUNC_1(VAR_0, "Invalid number of arguments.");
  return;
 }
 VAR_2 = FUNC_2(VAR_0, "arg0");
 VAR_1 = FUNC_2(VAR_0, "arg1");

 FUNC_0(VAR_0, VAR_2, VAR_1);
}
