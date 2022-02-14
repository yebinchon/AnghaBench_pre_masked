
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;






 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static const char *
FUNC_3(char *VAR_0, size_t VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[128];

 switch (VAR_3) {
 case 128:
  return "";
 case 129:
  if (FUNC_1(VAR_0, "=") == 0)
   return "";
  else {
   FUNC_2(VAR_0, "/=", VAR_1);
   return VAR_0;
  }
 default:
  break;
 }

 switch (VAR_2) {
 case 131:
  if (VAR_3 == 32)
   return "";
  break;
 case 130:
  if (VAR_3 == 128)
   return "";
  break;
 default:
  break;
 }

 FUNC_0(VAR_4, sizeof(VAR_4), "/%d", VAR_3);
 FUNC_2(VAR_0, VAR_4, VAR_1);
 return VAR_0;
}
