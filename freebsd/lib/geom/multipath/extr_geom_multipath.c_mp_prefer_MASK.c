
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (int ,char*,char const*,char const*,char const*) ;
 int FUNC_1 (struct gctl_req*,char*) ;
 char* FUNC_2 (struct gctl_req*,char*) ;
 int FUNC_3 (struct gctl_req*,char*) ;
 char* FUNC_4 (struct gctl_req*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct gctl_req *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, "nargs");
 if (VAR_5 != 2) {
  FUNC_1(VAR_1, "Usage: prefer GEOM PROVIDER");
  return;
 }
 VAR_2 = FUNC_2(VAR_1, "arg0");
 VAR_3 = FUNC_2(VAR_1, "arg1");
 VAR_4 = FUNC_4 (VAR_1);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_0, "Can't set %s preferred provider to %s: %s.\n",
      VAR_2, VAR_3, VAR_4);
 }
}
