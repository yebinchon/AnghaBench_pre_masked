
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;

u_int
FUNC_0(char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 u_int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 u_int VAR_11;






 if (VAR_2 > VAR_0) {
  VAR_4 = &(VAR_1[VAR_2 - VAR_0]);
  VAR_2 = VAR_0;
 } else
  VAR_4 = VAR_1;





 VAR_9 = VAR_2/sizeof(u_int);
 VAR_10 = VAR_2 % sizeof(u_int);






 for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7) {
  VAR_6 = VAR_4 + sizeof(u_int);
  VAR_5 = (char *)&VAR_11;
  while (VAR_4 < VAR_6)
   *VAR_5++ = *VAR_4++;
  VAR_8 += VAR_11;
 }




 if (VAR_10) {
  VAR_11 = 0;
  VAR_6 = VAR_4 + VAR_10;
  VAR_5 = (char *)&VAR_11;
  while (VAR_4 < VAR_6)
   *VAR_5++ = *VAR_4++;
  VAR_8 += VAR_11;
 }




 return(VAR_8 % VAR_3);
}
