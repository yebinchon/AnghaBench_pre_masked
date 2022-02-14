
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

int
FUNC_3(int VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;
 int VAR_6;







 VAR_6 = (VAR_3 + 1) % VAR_1;
 VAR_5 = VAR_6;

 for ( ; ; ) {
  VAR_4 = FUNC_2(VAR_2, FUNC_1(VAR_5));

  for ( ; ; ) {
   if ((VAR_4 & FUNC_0(VAR_5)) != 0)
    return (VAR_5);

   VAR_5 = (VAR_5 + 1) % VAR_1;

   if (VAR_5 == VAR_6)
    return (-1);

   if ((VAR_5 % VAR_0) == 0)
    break;
  }
 }
}
