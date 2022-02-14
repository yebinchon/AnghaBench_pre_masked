
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char*,int,...) ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_8(void *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5 = VAR_2, VAR_6[128];

 FUNC_2(VAR_1);

 FUNC_0(FUNC_4(VAR_5, 0777));
 while (! VAR_0) {
  for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
   FUNC_7(VAR_6, sizeof(VAR_6), "%s/d%d", VAR_5, VAR_3);
   FUNC_0(FUNC_4(VAR_6, 0777));
   for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
    FUNC_7(VAR_6, sizeof(VAR_6), "%s/d%d/f%d",
        VAR_5, VAR_3, VAR_4);
    FUNC_1(VAR_6);
   }
  }
  for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
   for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
    FUNC_7(VAR_6, sizeof(VAR_6), "%s/d%d/f%d",
        VAR_5, VAR_3, VAR_4);
    FUNC_0(FUNC_6(VAR_6));
   }
   FUNC_7(VAR_6, sizeof(VAR_6), "%s/d%d", VAR_5, VAR_3);
   FUNC_0(FUNC_5(VAR_6));
  }
 }
 FUNC_0(FUNC_5(VAR_5));

 FUNC_3();

 return ((void*)0);
}
