
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;

int
FUNC_1(void *VAR_2, socklen_t VAR_3, int VAR_4, u_int8_t VAR_5,
   socklen_t VAR_6, u_int8_t VAR_7, void **VAR_8)
{
 int VAR_9 = VAR_4, VAR_10 = 0;





 if (VAR_5 < 2)
  return(-1);





 if (VAR_6 > 255 || VAR_6 < 0 )
  return(-1);





 if (VAR_7 != 1 && VAR_7 != 2 && VAR_7 != 4 && VAR_7 != 8)
  return(-1);
 if (VAR_7 > VAR_6)
  return(-1);


 VAR_9 += 2 + VAR_6;
 if (VAR_9 % VAR_7)
  VAR_10 = VAR_7 - (VAR_9 % VAR_7);


 VAR_9 += VAR_10;
 if (VAR_3 &&
     VAR_9 > VAR_3)
  return(-1);

 if (VAR_2) {
  u_int8_t *VAR_11 = (u_int8_t *)VAR_2 + VAR_4;

  if (VAR_10 == 1) {

   *VAR_11 = VAR_0;
   VAR_11++;
  }
  else if (VAR_10 > 0) {

   *VAR_11++ = VAR_1;
   *VAR_11++ = VAR_10 - 2;
   FUNC_0(VAR_11, 0, VAR_10 - 2);
   VAR_11 += (VAR_10 - 2);
  }

  *VAR_11++ = VAR_5;
  *VAR_11++ = VAR_6;

  *VAR_8 = VAR_11;
 }

 return(VAR_9);
}
