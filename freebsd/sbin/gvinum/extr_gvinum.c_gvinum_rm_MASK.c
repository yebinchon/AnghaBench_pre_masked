
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,...) ;
 int FUNC_4 (int,char* const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, char * const *VAR_5)
{
 struct gctl_req *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 const char *VAR_10;
 char VAR_11[20];

 VAR_7 = 0;
 VAR_3 = 1;
 VAR_2 = 1;
 while ((VAR_9 = FUNC_4(VAR_4, VAR_5, "rf")) != -1) {
  switch (VAR_9) {
  case 'f':
   VAR_7 |= VAR_0;
   break;
  case 'r':
   VAR_7 |= VAR_1;
   break;
  default:
   return;
  }
 }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 VAR_6 = FUNC_1();
 FUNC_3(VAR_6, "class", -1, "VINUM");
 FUNC_3(VAR_6, "verb", -1, "remove");
 FUNC_3(VAR_6, "argc", sizeof(int), &VAR_4);
 FUNC_3(VAR_6, "flags", sizeof(int), &VAR_7);
 if (VAR_4) {
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   FUNC_5(VAR_11, sizeof(VAR_11), "argv%d", VAR_8);
   FUNC_3(VAR_6, VAR_11, -1, VAR_5[VAR_8]);
  }
 }
 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 != ((void*)0)) {
  FUNC_6("can't remove: %s", VAR_10);
  FUNC_0(VAR_6);
  return;
 }
 FUNC_0(VAR_6);
}
