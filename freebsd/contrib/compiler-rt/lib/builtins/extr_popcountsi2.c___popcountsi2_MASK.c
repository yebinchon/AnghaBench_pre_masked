
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int su_int ;
typedef int si_int ;



si_int FUNC_0(si_int VAR_0) {
  su_int VAR_1 = (su_int)VAR_0;
  VAR_1 = VAR_1 - ((VAR_1 >> 1) & 0x55555555);

  VAR_1 = ((VAR_1 >> 2) & 0x33333333) + (VAR_1 & 0x33333333);

  VAR_1 = (VAR_1 + (VAR_1 >> 4)) & 0x0F0F0F0F;

  VAR_1 = (VAR_1 + (VAR_1 >> 16));


  return (VAR_1 + (VAR_1 >> 8)) & 0x0000003F;
}
