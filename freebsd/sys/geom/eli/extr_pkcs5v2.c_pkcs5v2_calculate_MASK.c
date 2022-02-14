
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 int FUNC_0 (int) ;

int
FUNC_1(int VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 1; ; VAR_1 <<= 1) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 > 2000000)
   break;
 }
 return (((intmax_t)VAR_1 * (intmax_t)VAR_0) / VAR_2);
}
