
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,...) ;
 int FUNC_4 (int,char* const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_3, char * const *VAR_4)
{
 struct gctl_req *VAR_5;
 const char *VAR_6;
 char VAR_7[20];
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = 0;
 if (VAR_3) {
  VAR_2 = 1;
  VAR_1 = 1;
  while ((VAR_10 = FUNC_4(VAR_3, VAR_4, "f")) != -1) {
   switch (VAR_10) {
   case 'f':
    VAR_8 |= VAR_0;
    break;
   case '?':
   default:
    return;
   }
  }
  VAR_3 -= VAR_1;
  VAR_4 += VAR_1;
 }

 switch (VAR_3) {
  case 0:
   FUNC_6("no destination or object(s) to move specified");
   return;
  case 1:
   FUNC_6("no object(s) to move specified");
   return;
  default:
   break;
 }

 VAR_5 = FUNC_1();
 FUNC_3(VAR_5, "class", -1, "VINUM");
 FUNC_3(VAR_5, "verb", -1, "move");
 FUNC_3(VAR_5, "argc", sizeof(int), &VAR_3);
 FUNC_3(VAR_5, "flags", sizeof(int), &VAR_8);
 FUNC_3(VAR_5, "destination", -1, VAR_4[0]);
 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  FUNC_5(VAR_7, sizeof(VAR_7), "argv%d", VAR_9);
  FUNC_3(VAR_5, VAR_7, -1, VAR_4[VAR_9]);
 }
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_6("can't move object(s):  %s", VAR_6);
 FUNC_0(VAR_5);
}
