
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ti_int ;


 int VAR_0 ;
 int FUNC_0 () ;

ti_int FUNC_1(ti_int VAR_1) {
  const int VAR_2 = (int)(sizeof(ti_int) * VAR_0);
  if (VAR_1 == ((ti_int)1 << (VAR_2 - 1)))
    FUNC_0();
  const ti_int VAR_3 = VAR_1 >> (VAR_2 - 1);
  return (VAR_1 ^ VAR_3) - VAR_3;
}
