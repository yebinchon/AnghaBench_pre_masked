
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int8_t ;
typedef size_t u_int ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*,char const) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(char VAR_0[], size_t VAR_1, const u_int8_t *VAR_2, size_t VAR_3)
{
 const u_int8_t *VAR_4;
 size_t VAR_5;
 u_int VAR_6;

 if (VAR_3 > VAR_1)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_3;

 for (VAR_6 = 0, VAR_4 = VAR_2; VAR_6 < VAR_5; VAR_6++, VAR_4++) {
  if (*VAR_4 < ' ' || *VAR_4 > 0x7e)
   break;
 }
 if (VAR_6 != VAR_5) {
  if (VAR_1 < 3)
   return 0;
  FUNC_2(VAR_0, "0x", VAR_1);
  VAR_1 -= 2;
  VAR_4 = VAR_2;
  for (VAR_6 = 0; VAR_6 < VAR_5 && VAR_1 >= 2; VAR_6++) {
   FUNC_1(&VAR_0[2+2*VAR_6], "%02x", VAR_4[VAR_6]);
   VAR_1 -= 2;
  }
  if (VAR_6 != VAR_3)
   FUNC_0(&VAR_0[2+2*VAR_6-3], "...", 3);
 } else {
  FUNC_0(VAR_0, VAR_2, VAR_5);
  if (VAR_5 != VAR_3)
   FUNC_0(&VAR_0[VAR_5-3], "...", 3);
 }
 return VAR_5;
}
