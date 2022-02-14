
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int VAR_1 ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct gctl_req *VAR_2)
{
 const char *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_2, "nargs");
 if (VAR_6 < 1) {
  FUNC_2(VAR_2, "Too few arguments.");
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_3 = FUNC_3(VAR_2, "arg%d", VAR_5);
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (VAR_4 != 0) {
   FUNC_0(VAR_1, "Can't clear metadata on %s: %s.\n",
       VAR_3, FUNC_5(VAR_4));
   FUNC_2(VAR_2, "Not fully done.");
   continue;
  }
 }
}
