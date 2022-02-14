
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci_sb_reg {unsigned long left_reg; unsigned long right_reg; unsigned long left_shift; unsigned long right_shift; unsigned long invert; unsigned long stereo; unsigned long mask; } ;



__attribute__((used)) static void FUNC_0(struct cmipci_sb_reg *VAR_0, unsigned long VAR_1)
{
 VAR_0->left_reg = VAR_1 & 0xff;
 VAR_0->right_reg = (VAR_1 >> 8) & 0xff;
 VAR_0->left_shift = (VAR_1 >> 16) & 0x07;
 VAR_0->right_shift = (VAR_1 >> 19) & 0x07;
 VAR_0->invert = (VAR_1 >> 22) & 1;
 VAR_0->stereo = (VAR_1 >> 23) & 1;
 VAR_0->mask = (VAR_1 >> 24) & 0xff;
}
