
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

int
FUNC_1(void *VAR_2, socklen_t VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 > 0 ? (1 + ((VAR_4 - 1) | 7)) : 0;

 if (VAR_2) {
  u_int8_t *VAR_6;
  int VAR_7 = VAR_5 - VAR_4;

  if (VAR_5 > VAR_3)
   return(-1);

  VAR_6 = (u_int8_t *)VAR_2 + VAR_4;
  if (VAR_7 == 1)
   *VAR_6 = VAR_0;
  else if (VAR_7 > 0) {
   *VAR_6++ = VAR_1;
   *VAR_6++ = (VAR_7 - 2);
   FUNC_0(VAR_6, 0, VAR_7 - 2);
  }
 }

 return(VAR_5);
}
