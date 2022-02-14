
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned VAR_0, unsigned *VAR_1,
                                 unsigned *VAR_2) {
  *VAR_1 = (VAR_0 >> 8) & 0xf;
  *VAR_2 = (VAR_0 >> 4) & 0xf;
  if (*VAR_1 == 6 || *VAR_1 == 0xf) {
    if (*VAR_1 == 0xf)

      *VAR_1 += (VAR_0 >> 20) & 0xff;

    *VAR_2 += ((VAR_0 >> 16) & 0xf) << 4;
  }
}
