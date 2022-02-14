
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
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_3, char * const *VAR_4)
{
 const char *VAR_5;
 struct gctl_req *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_2 = 1;
 VAR_1 = 1;
 while ((VAR_8 = FUNC_4(VAR_3, VAR_4, "f")) != -1) {
  switch (VAR_8) {
  case 'f':
   VAR_7 |= VAR_0;
   break;
  default:
   FUNC_5("invalid flag: %c", VAR_8);
   return;
  }
 }
 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;
 if (VAR_3 != 1) {
  FUNC_6("usage: detach [-f] <subdisk> | <plex>");
  return;
 }

 VAR_6 = FUNC_1();
 FUNC_3(VAR_6, "class", -1, "VINUM");
 FUNC_3(VAR_6, "verb", -1, "detach");
 FUNC_3(VAR_6, "object", -1, VAR_4[0]);
 FUNC_3(VAR_6, "flags", sizeof(int), &VAR_7);

 VAR_5 = FUNC_2(VAR_6);
 if (VAR_5 != ((void*)0))
  FUNC_6("detach failed: %s", VAR_5);
 FUNC_0(VAR_6);
}
