
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, uint8_t *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 char *VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_0, "0x", 2) || !FUNC_3(VAR_0, "0X", 2))
  VAR_0 += 2;

 for (VAR_4 = VAR_0; *VAR_4; VAR_4++) {
  if (!FUNC_0(*VAR_4))
   return "invalid hex digit read";
  VAR_2++;
 }

 if (VAR_2 > 64)
  return "hex code too long";





 VAR_3 = 32 - ((VAR_2 - 1) / 2) - 1;

 for (VAR_5 = VAR_3; VAR_5 <= 31; VAR_5++) {
  char VAR_6[3] = { 0 };
  uint32_t VAR_7;
  char *VAR_8;




  if (VAR_5 == VAR_3 && VAR_2 % 2) {
   FUNC_1(VAR_6, VAR_0, 1);
   VAR_0++;
  }
  else {
   FUNC_1(VAR_6, VAR_0, 2);
   VAR_0 += 2;
  }

  if ((VAR_8 = FUNC_2(VAR_6, &VAR_7, 1)))
   return VAR_8;
  VAR_1[VAR_5] = VAR_7;
 }

 return ((void*)0);
}
