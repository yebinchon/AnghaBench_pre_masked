
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,...) ;
 int FUNC_4 (int,char* const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, char * const *VAR_5, int VAR_6)
{
 struct gctl_req *VAR_7;
 int VAR_8, VAR_9;
 const char *VAR_10;
 const char *VAR_11;

 if (VAR_6) {
  VAR_11 = "rebuildparity";
 } else {
  VAR_11 = "checkparity";
 }

 VAR_3 = 1;
 VAR_2 = 1;
 VAR_8 = 0;
 while ((VAR_9 = FUNC_4(VAR_4, VAR_5, "fv")) != -1) {
  switch (VAR_9) {
  case 'f':
   VAR_8 |= VAR_0;
   break;
  case 'v':
   VAR_8 |= VAR_1;
   break;
  default:
   FUNC_6("invalid flag '%c'", VAR_9);
   return;
  }
 }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 if (VAR_4 != 1) {
  FUNC_5("usage: %s [-f] [-v] <plex>", VAR_11);
  return;
 }

 VAR_7 = FUNC_1();
 FUNC_3(VAR_7, "class", -1, "VINUM");
 FUNC_3(VAR_7, "verb", -1, VAR_11);
 FUNC_3(VAR_7, "rebuild", sizeof(int), &VAR_6);
 FUNC_3(VAR_7, "flags", sizeof(int), &VAR_8);
 FUNC_3(VAR_7, "plex", -1, VAR_5[0]);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  FUNC_6("%s\n", VAR_10);
 FUNC_0(VAR_7);
}
