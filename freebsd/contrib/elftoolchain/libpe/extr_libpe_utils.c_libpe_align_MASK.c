
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int PE ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,size_t) ;

off_t
FUNC_3(PE *VAR_0, off_t VAR_1, size_t VAR_2)
{
 off_t VAR_3;

 FUNC_0(VAR_2 > 0 && (VAR_2 & (VAR_2 - 1)) == 0);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 > VAR_1) {
  if (FUNC_1(VAR_0, VAR_3 - VAR_1) < 0)
   return (-1);
 }

 return (VAR_3);
}
