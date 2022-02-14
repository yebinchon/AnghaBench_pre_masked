
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (struct gctl_req*,char*) ;
 char* FUNC_3 (struct gctl_req*,char*,int) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 int FUNC_5 (char*,char const*,...) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_1)
{
 const char *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = FUNC_4(VAR_1, "nargs");
 if (VAR_4 < 1) {
  FUNC_2(VAR_1, "Too few arguments.");
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = FUNC_3(VAR_1, "arg%d", VAR_3);
  VAR_5 = FUNC_1(VAR_2, 1);
  if (VAR_5 == -1) {
   FUNC_5("Can't refresh metadata from %s: %s.\n",
       VAR_2, FUNC_6(VAR_0));
  } else {
   FUNC_5("Metadata from %s refreshed.\n", VAR_2);
   (void)FUNC_0(VAR_5);
  }
 }
}
