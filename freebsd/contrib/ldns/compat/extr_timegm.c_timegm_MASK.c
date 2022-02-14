
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int buf ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 () ;

time_t
FUNC_5 (struct tm *VAR_0) {
 time_t VAR_1;
 char *VAR_2;

 VAR_2 = FUNC_0("TZ");
 FUNC_2((char*)"TZ=");
 FUNC_4();
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_2) {
  char VAR_3[256];
  FUNC_3(VAR_3, sizeof(VAR_3), "TZ=%s", VAR_2);
  FUNC_2(VAR_2);
 }
 else
  FUNC_2((char*)"TZ");
 FUNC_4();
 return VAR_1;
}
