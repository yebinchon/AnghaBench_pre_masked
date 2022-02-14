
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,...) ;
 int FUNC_4 (int,char* const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char* const,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(int VAR_3, char * const *VAR_4)
{
 struct gctl_req *VAR_5;
 int VAR_6, VAR_7;
 const char *VAR_8;

 VAR_6 = 0;

 VAR_2 = 1;
 VAR_1 = 1;

 while ((VAR_7 = FUNC_4(VAR_3, VAR_4, "f")) != -1) {
  switch (VAR_7) {
  case 'f':
   VAR_6 |= VAR_0;
   break;
  case '?':
  default:
   FUNC_6("invalid flag: %c", VAR_7);
   return;
  }
 }

 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;

 if (VAR_3 != 2) {
  FUNC_7("usage: setstate [-f] <state> <obj>");
  return;
 }





 if (FUNC_5(VAR_4[0], "up") && FUNC_5(VAR_4[0], "down") &&
     FUNC_5(VAR_4[0], "stale")) {
  FUNC_7("invalid state '%s'", VAR_4[0]);
  return;
 }

 VAR_5 = FUNC_1();
 FUNC_3(VAR_5, "class", -1, "VINUM");
 FUNC_3(VAR_5, "verb", -1, "setstate");
 FUNC_3(VAR_5, "state", -1, VAR_4[0]);
 FUNC_3(VAR_5, "object", -1, VAR_4[1]);
 FUNC_3(VAR_5, "flags", sizeof(int), &VAR_6);

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 != ((void*)0))
  FUNC_7("%s", VAR_8);
 FUNC_0(VAR_5);
}
