
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const di_int ;


 int VAR_0 ;
 int FUNC_0 () ;

di_int FUNC_1(di_int VAR_1) {
  const int VAR_2 = (int)(sizeof(di_int) * VAR_0);
  if (VAR_1 == ((di_int)1 << (VAR_2 - 1)))
    FUNC_0();
  const di_int VAR_3 = VAR_1 >> (VAR_2 - 1);
  return (VAR_1 ^ VAR_3) - VAR_3;
}
