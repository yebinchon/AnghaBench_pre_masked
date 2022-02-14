
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(u_int VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6;

 if (VAR_3 > VAR_1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 VAR_3 *= 2;
 VAR_6 = FUNC_0();
 VAR_6 &= ~(3 << VAR_3);
 if (!VAR_4)
  VAR_6 |= 1 << VAR_3;
 if (!VAR_5)
  VAR_6 |= 2 << VAR_3;
 FUNC_1(VAR_6);
 return (0);
}
