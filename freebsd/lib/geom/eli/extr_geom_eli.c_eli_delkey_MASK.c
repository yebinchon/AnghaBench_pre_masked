
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*,char const*) ;
 int FUNC_1 (struct gctl_req*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (struct gctl_req*,char*) ;
 char* FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_5(VAR_0, "nargs");
 if (VAR_2 != 1) {
  FUNC_3(VAR_0, "Invalid number of arguments.");
  return;
 }
 VAR_1 = FUNC_4(VAR_0, "arg0");

 if (FUNC_2(VAR_1))
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
