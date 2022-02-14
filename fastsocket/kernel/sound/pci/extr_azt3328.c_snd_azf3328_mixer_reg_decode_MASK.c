
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azf3328_mixer_reg {unsigned long reg; unsigned long lchan_shift; unsigned long rchan_shift; unsigned long mask; unsigned long invert; unsigned long stereo; unsigned long enum_c; } ;



__attribute__((used)) static void FUNC_0(struct azf3328_mixer_reg *VAR_0, unsigned long VAR_1)
{
 VAR_0->reg = VAR_1 & 0xff;
 VAR_0->lchan_shift = (VAR_1 >> 8) & 0x0f;
 VAR_0->rchan_shift = (VAR_1 >> 12) & 0x0f;
 VAR_0->mask = (VAR_1 >> 16) & 0xff;
 VAR_0->invert = (VAR_1 >> 24) & 1;
 VAR_0->stereo = (VAR_1 >> 25) & 1;
 VAR_0->enum_c = (VAR_1 >> 26) & 0x0f;
}
