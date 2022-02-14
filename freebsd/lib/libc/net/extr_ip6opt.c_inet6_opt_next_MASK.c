
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ip6_hbh {int dummy; } ;
typedef int socklen_t ;




 int FUNC_0 (int*,int*) ;

int
FUNC_1(void *VAR_0, socklen_t VAR_1, int VAR_2, u_int8_t *VAR_3,
        socklen_t *VAR_4, void **VAR_5)
{
 u_int8_t *VAR_6, *VAR_7;
 int VAR_8;


 if (VAR_1 == 0 || (VAR_1 % 8))
  return(-1);
 VAR_7 = (u_int8_t *)VAR_0 + VAR_1;






 if (VAR_2 == 0) {
  VAR_6 = (u_int8_t *)((struct ip6_hbh *)VAR_0 + 1);
 }
 else
  VAR_6 = (u_int8_t *)VAR_0 + VAR_2;


 while(VAR_6 < VAR_7) {
  switch(*VAR_6) {
  case 129:
   VAR_6++;
   break;
  case 128:
   if ((VAR_8 = FUNC_0(VAR_6, VAR_7)) == 0)
    goto optend;
   VAR_6 += VAR_8;
   break;
  default:
   if ((VAR_8 = FUNC_0(VAR_6, VAR_7)) == 0)
    goto optend;
   *VAR_3 = *VAR_6;
   *VAR_4 = VAR_8 - 2;
   *VAR_5 = VAR_6 + 2;
   return(VAR_6 + VAR_8 - (u_int8_t *)VAR_0);
  }
 }

  optend:
 *VAR_5 = ((void*)0);
 return(-1);
}
