
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct gctl_req*) ;
 struct gctl_req* FUNC_2 () ;
 char* FUNC_3 (struct gctl_req*) ;
 int FUNC_4 (struct gctl_req*,char*,int,char*) ;
 int FUNC_5 (int,char* const*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static void
FUNC_11(int VAR_3, char * const *VAR_4)
{
 struct gctl_req *VAR_5;
 const char *VAR_6;
 char VAR_7[32];
 int VAR_8, VAR_9;

 VAR_8 = 0;
 while ((VAR_9 = FUNC_5(VAR_3, VAR_4, "f")) != -1) {
  switch (VAR_9) {
  case 'f':
   VAR_8 |= VAR_0;
   break;
  default:
   FUNC_9("invalid flag: %c", VAR_9);
   return;
  }
 }
 if ((VAR_8 & VAR_0) == 0) {
  if (!FUNC_6(VAR_1)) {
   FUNC_9("Please enter this command from a tty device\n");
   return;
  }
  FUNC_7(" WARNING!  This command will completely wipe out"
      " your gvinum configuration.\n"
      " All data will be lost.  If you really want to do this,"
      " enter the text\n\n"
      " NO FUTURE\n"
      " Enter text -> ");
  FUNC_0(VAR_7, sizeof(VAR_7), VAR_2);
  if (FUNC_8(VAR_7, "NO FUTURE\n")) {
   FUNC_7("\n No change\n");
   return;
  }
 }
 VAR_5 = FUNC_2();
 FUNC_4(VAR_5, "class", -1, "VINUM");
 FUNC_4(VAR_5, "verb", -1, "resetconfig");
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 != ((void*)0)) {
  FUNC_10("can't reset config: %s", VAR_6);
  FUNC_1(VAR_5);
  return;
 }
 FUNC_1(VAR_5);
 FUNC_7("gvinum configuration obliterated\n");
}
