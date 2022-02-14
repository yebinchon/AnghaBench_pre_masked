
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2_gd {int ext4bgd_i_unused; int ext4bgd_i_unused_hi; } ;



__attribute__((used)) static void
FUNC_0(struct ext2_gd *VAR_0, uint32_t VAR_1)
{

 VAR_0->ext4bgd_i_unused = VAR_1 & 0xffff;
 VAR_0->ext4bgd_i_unused_hi = VAR_1 >> 16;
}
