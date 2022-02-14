
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct printf_spec {int dummy; } ;


 char* FUNC_0 (char*,int const) ;
 char* FUNC_1 (char*,char*,char*,struct printf_spec) ;
 char FUNC_2 (char) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, char *VAR_1, const u8 *VAR_2,
    struct printf_spec VAR_3, const char *VAR_4)
{
 char VAR_5[sizeof("xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx")];
 char *VAR_6 = VAR_5;
 int VAR_7;
 static const u8 VAR_8[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 static const u8 VAR_9[16] = {3,2,1,0,5,4,7,6,8,9,10,11,12,13,14,15};
 const u8 *VAR_10 = VAR_8;
 bool VAR_11 = 0;

 switch (*(++VAR_4)) {
 case 'L':
  VAR_11 = 1;
 case 'l':
  VAR_10 = VAR_9;
  break;
 case 'B':
  VAR_11 = 1;
  break;
 }

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  VAR_6 = FUNC_0(VAR_6, VAR_2[VAR_10[VAR_7]]);
  switch (VAR_7) {
  case 3:
  case 5:
  case 7:
  case 9:
   *VAR_6++ = '-';
   break;
  }
 }

 *VAR_6 = 0;

 if (VAR_11) {
  VAR_6 = VAR_5;
  do {
   *VAR_6 = FUNC_2(*VAR_6);
  } while (*(++VAR_6));
 }

 return FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3);
}
