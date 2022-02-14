
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int*,size_t*) ;

int
FUNC_7(const char *VAR_2)
{
 int VAR_3[5];
 size_t VAR_4;
 char *VAR_5;
 int VAR_6;

 if (VAR_2 != ((void*)0)) {
  if (VAR_2[FUNC_4(VAR_2, ".=")] != '\0') {
   VAR_1 = VAR_0;
   return (-1);
  }
  VAR_5 = FUNC_1(sizeof("security.mac.") - 1 +
      FUNC_5(VAR_2) + sizeof(".enabled"));
  if (VAR_5 == ((void*)0))
   return (-1);
  FUNC_3(VAR_5, "security.mac.");
  FUNC_2(VAR_5, VAR_2);
  FUNC_2(VAR_5, ".enabled");
  VAR_4 = 5;
  VAR_6 = FUNC_6(VAR_5, VAR_3, &VAR_4);
  FUNC_0(VAR_5);
 } else {
  VAR_4 = 3;
  VAR_6 = FUNC_6("security.mac", VAR_3, &VAR_4);
 }
 if (VAR_6 == -1) {
  switch (VAR_1) {
  case 128:
  case 129:
   return (0);
  default:
   return (VAR_6);
  }
 }
 return (1);
}
