
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
 int FUNC_5 (char*,char const*) ;
 int VAR_1 ;
 char* FUNC_6 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_4(VAR_3, "nargs");
 if (VAR_7 < 1) {
  FUNC_2(VAR_3, "Too few arguments.");
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_4 = FUNC_3(VAR_3, "arg%d", VAR_6);
  VAR_5 = FUNC_1(VAR_4, VAR_0);
  if (VAR_5 != 0) {
   FUNC_0(VAR_1, "Can't clear metadata on %s: %s.\n",
       VAR_4, FUNC_6(VAR_5));
   FUNC_2(VAR_3, "Not fully done.");
   continue;
  }
  if (VAR_2)
   FUNC_5("Metadata cleared on %s.\n", VAR_4);
 }
}
