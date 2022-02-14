
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int const*) ;

int
FUNC_1(const u_char **VAR_2, const u_char *VAR_3)
{
 const u_char *VAR_4;
 u_int VAR_5;
 int VAR_6 = 0;

 VAR_4 = *VAR_2;
 while (VAR_4 < VAR_3 && (VAR_5 = *VAR_4++) != 0) {

  switch (VAR_5 & 129) {
  case 0:
   VAR_4 += VAR_5;
   continue;
  case 128:
   if (VAR_4 < VAR_3 && (VAR_6 = FUNC_0(VAR_4 - 1)) < 0) {
    VAR_1 = VAR_0;
    return (-1);
   }
   VAR_4 += VAR_6;
   continue;
  case 129:
   VAR_4++;
   break;
  default:
   VAR_1 = VAR_0;
   return (-1);
  }
  break;
 }
 if (VAR_4 > VAR_3) {
  VAR_1 = VAR_0;
  return (-1);
 }
 *VAR_2 = VAR_4;
 return (0);
}
