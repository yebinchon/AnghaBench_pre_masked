
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gctl_req*) ;
 struct gctl_req* FUNC_2 () ;
 char* FUNC_3 (struct gctl_req*) ;
 int FUNC_4 (struct gctl_req*,char*,int,...) ;
 int FUNC_5 (int,char* const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static void
FUNC_8(int VAR_3, char * const *VAR_4)
{
 struct gctl_req *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 const char *VAR_9;
 char VAR_10[20];


 if (VAR_3 == 1)
  return;

 VAR_7 = 0;

 VAR_2 = 1;
 VAR_1 = 1;
 while ((VAR_8 = FUNC_5(VAR_3, VAR_4, "S")) != -1) {
  switch (VAR_8) {
  case 'S':
   VAR_7 = FUNC_0(VAR_0);
   break;
  default:
   return;
  }
 }
 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;

 if (!VAR_7)
  VAR_7 = 512;

 VAR_5 = FUNC_2();
 FUNC_4(VAR_5, "class", -1, "VINUM");
 FUNC_4(VAR_5, "verb", -1, "start");
 FUNC_4(VAR_5, "argc", sizeof(int), &VAR_3);
 FUNC_4(VAR_5, "initsize", sizeof(int), &VAR_7);
 if (VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   FUNC_6(VAR_10, sizeof(VAR_10), "argv%d", VAR_6);
   FUNC_4(VAR_5, VAR_10, -1, VAR_4[VAR_6]);
  }
 }
 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9 != ((void*)0)) {
  FUNC_7("can't start: %s", VAR_9);
  FUNC_1(VAR_5);
  return;
 }

 FUNC_1(VAR_5);
}
