
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tu_int ;
typedef scalar_t__ ti_int ;
typedef int su_int ;
typedef int si_int ;
typedef int du_int ;



si_int FUNC_0(ti_int VAR_0) {
  tu_int VAR_1 = (tu_int)VAR_0;
  VAR_1 = VAR_1 - ((VAR_1 >> 1) &
             (((tu_int)0x5555555555555555uLL << 64) | 0x5555555555555555uLL));

  VAR_1 = ((VAR_1 >> 2) &
        (((tu_int)0x3333333333333333uLL << 64) | 0x3333333333333333uLL)) +
       (VAR_1 & (((tu_int)0x3333333333333333uLL << 64) | 0x3333333333333333uLL));

  VAR_1 = (VAR_1 + (VAR_1 >> 4)) &
       (((tu_int)0x0F0F0F0F0F0F0F0FuLL << 64) | 0x0F0F0F0F0F0F0F0FuLL);

  du_int VAR_2 = (du_int)(VAR_1 + (VAR_1 >> 64));

  su_int VAR_3 = (su_int)(VAR_2 + (VAR_2 >> 32));

  VAR_3 = VAR_3 + (VAR_3 >> 16);



  return (VAR_3 + (VAR_3 >> 8)) & 0xFF;
}
