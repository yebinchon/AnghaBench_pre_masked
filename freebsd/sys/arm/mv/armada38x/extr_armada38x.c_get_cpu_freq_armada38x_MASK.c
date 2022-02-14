
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;

uint32_t
FUNC_2(void)
{
 uint32_t VAR_3;

 static const uint32_t VAR_4[] = {
  0, 0, 0, 0,
  1066, 0, 0, 0,
  1332, 0, 0, 0,
  1600, 0, 0, 0,
  1866, 0, 0, 2000
 };

 VAR_3 = (uint32_t)FUNC_0();
 VAR_3 = (VAR_3 & VAR_0) >> VAR_1;
 if (VAR_3 >= FUNC_1(VAR_4))
  return (0);

 VAR_2 = VAR_4[VAR_3];

 return (VAR_2 * 1000 * 1000);
}
