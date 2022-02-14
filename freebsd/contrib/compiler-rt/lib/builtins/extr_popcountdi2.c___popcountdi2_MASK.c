
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int su_int ;
typedef int si_int ;
typedef int du_int ;
typedef int di_int ;



si_int FUNC_0(di_int VAR_0) {
  du_int VAR_1 = (du_int)VAR_0;
  VAR_1 = VAR_1 - ((VAR_1 >> 1) & 0x5555555555555555uLL);

  VAR_1 = ((VAR_1 >> 2) & 0x3333333333333333uLL) + (VAR_1 & 0x3333333333333333uLL);

  VAR_1 = (VAR_1 + (VAR_1 >> 4)) & 0x0F0F0F0F0F0F0F0FuLL;

  su_int VAR_2 = (su_int)(VAR_1 + (VAR_1 >> 32));


  VAR_2 = VAR_2 + (VAR_2 >> 16);


  return (VAR_2 + (VAR_2 >> 8)) & 0x0000007F;
}
