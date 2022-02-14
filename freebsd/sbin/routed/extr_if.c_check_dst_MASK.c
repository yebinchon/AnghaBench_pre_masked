
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int naddr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;

int
FUNC_4(naddr VAR_2)
{
 VAR_2 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_2)) {
  if (VAR_2 == 0)
   return 1;

  VAR_2 >>= VAR_0;
  return (VAR_2 != 0 && VAR_2 != VAR_1);
 }

 return (FUNC_1(VAR_2) || FUNC_2(VAR_2));
}
