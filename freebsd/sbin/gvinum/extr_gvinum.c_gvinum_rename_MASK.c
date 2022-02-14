
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
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, char * const *VAR_4)
{
 struct gctl_req *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;

 if (VAR_3) {
  VAR_2 = 1;
  VAR_1 = 1;
  while ((VAR_8 = FUNC_4(VAR_3, VAR_4, "r")) != -1) {
   switch (VAR_8) {
   case 'r':
    VAR_7 |= VAR_0;
    break;
   default:
    return;
   }
  }
  VAR_3 -= VAR_1;
  VAR_4 += VAR_1;
 }

 switch (VAR_3) {
  case 0:
   FUNC_5("no object to rename specified");
   return;
  case 1:
   FUNC_5("no new name specified");
   return;
  case 2:
   break;
  default:
   FUNC_5("more than one new name specified");
   return;
 }

 VAR_5 = FUNC_1();
 FUNC_3(VAR_5, "class", -1, "VINUM");
 FUNC_3(VAR_5, "verb", -1, "rename");
 FUNC_3(VAR_5, "flags", sizeof(int), &VAR_7);
 FUNC_3(VAR_5, "object", -1, VAR_4[0]);
 FUNC_3(VAR_5, "newname", -1, VAR_4[1]);
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_5("can't rename object:  %s", VAR_6);
 FUNC_0(VAR_5);
}
