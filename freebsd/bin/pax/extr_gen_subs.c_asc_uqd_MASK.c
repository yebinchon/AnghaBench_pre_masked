
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_quad_t ;


 int VAR_0 ;

u_quad_t
FUNC_0(char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4;
 u_quad_t VAR_5 = 0;

 VAR_4 = VAR_1 + VAR_2;




 while ((VAR_1 < VAR_4) && ((*VAR_1 == ' ') || (*VAR_1 == '0')))
  ++VAR_1;





 if (VAR_3 == VAR_0) {
  while (VAR_1 < VAR_4) {
   if ((*VAR_1 >= '0') && (*VAR_1 <= '9'))
    VAR_5 = (VAR_5 << 4) + (*VAR_1++ - '0');
   else if ((*VAR_1 >= 'A') && (*VAR_1 <= 'F'))
    VAR_5 = (VAR_5 << 4) + 10 + (*VAR_1++ - 'A');
   else if ((*VAR_1 >= 'a') && (*VAR_1 <= 'f'))
    VAR_5 = (VAR_5 << 4) + 10 + (*VAR_1++ - 'a');
   else
    break;
  }
 } else {
   while ((VAR_1 < VAR_4) && (*VAR_1 >= '0') && (*VAR_1 <= '7'))
   VAR_5 = (VAR_5 << 3) + (*VAR_1++ - '0');
 }
 return(VAR_5);
}
