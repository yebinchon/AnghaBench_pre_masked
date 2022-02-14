
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int su_int ;
typedef int si_int ;



si_int FUNC_0(si_int VAR_0) {
  su_int VAR_1 = (su_int)VAR_0;
  si_int VAR_2 = ((VAR_1 & 0xFFFF0000) == 0) << 4;
  VAR_1 >>= 16 - VAR_2;
  su_int VAR_3 = VAR_2;

  VAR_2 = ((VAR_1 & 0xFF00) == 0) << 3;
  VAR_1 >>= 8 - VAR_2;
  VAR_3 += VAR_2;

  VAR_2 = ((VAR_1 & 0xF0) == 0) << 2;
  VAR_1 >>= 4 - VAR_2;
  VAR_3 += VAR_2;

  VAR_2 = ((VAR_1 & 0xC) == 0) << 1;
  VAR_1 >>= 2 - VAR_2;
  VAR_3 += VAR_2;
  return VAR_3 + ((2 - VAR_1) & -((VAR_1 & 2) == 0));
}
