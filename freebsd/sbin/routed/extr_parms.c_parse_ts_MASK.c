
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int tm ;
typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (struct tm*) ;
 scalar_t__ FUNC_2 (char**,char*,char*,char*,int) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,struct tm*) ;

__attribute__((used)) static char *
FUNC_6(time_t *VAR_0,
  char **VAR_1,
  char *VAR_2,
  char *VAR_3,
  char *VAR_4,
  u_int VAR_5)
{
 struct tm VAR_6;
 char *VAR_7;

 if (0 > FUNC_2(VAR_1, "| ,\n\r", VAR_3,
       VAR_4,VAR_5)
     || VAR_4[VAR_5-1] != '\0'
     || VAR_4[VAR_5-2] != '\0') {
  FUNC_3(VAR_4,"bad timestamp %.25s", VAR_2);
  return VAR_4;
 }
 FUNC_4(VAR_4,"\n");
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_7 = FUNC_5(VAR_4, "%y/%m/%d@%H:%M\n", &VAR_6);
 if (VAR_7 == ((void*)0) || *VAR_7 != '\0') {
  FUNC_3(VAR_4,"bad timestamp %.25s", VAR_2);
  return VAR_4;
 }

 if ((*VAR_0 = FUNC_1(&VAR_6)) == -1) {
  FUNC_3(VAR_4,"bad timestamp %.25s", VAR_2);
  return VAR_4;
 }

 return 0;
}
