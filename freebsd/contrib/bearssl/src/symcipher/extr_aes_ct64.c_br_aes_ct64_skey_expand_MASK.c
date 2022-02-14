
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



void
FUNC_0(uint64_t *VAR_0,
 unsigned VAR_1, const uint64_t *VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;

 VAR_5 = (VAR_1 + 1) << 1;
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_5; VAR_3 ++, VAR_4 += 4) {
  uint64_t VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_2[VAR_3];
  VAR_6 &= (uint64_t)0x1111111111111111;
  VAR_7 &= (uint64_t)0x2222222222222222;
  VAR_8 &= (uint64_t)0x4444444444444444;
  VAR_9 &= (uint64_t)0x8888888888888888;
  VAR_7 >>= 1;
  VAR_8 >>= 2;
  VAR_9 >>= 3;
  VAR_0[VAR_4 + 0] = (VAR_6 << 4) - VAR_6;
  VAR_0[VAR_4 + 1] = (VAR_7 << 4) - VAR_7;
  VAR_0[VAR_4 + 2] = (VAR_8 << 4) - VAR_8;
  VAR_0[VAR_4 + 3] = (VAR_9 << 4) - VAR_9;
 }
}
