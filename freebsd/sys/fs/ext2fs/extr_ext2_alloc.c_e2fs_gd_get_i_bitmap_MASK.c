
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ext2_gd {int ext2bgd_i_bitmap; scalar_t__ ext4bgd_i_bitmap_hi; } ;



uint64_t
FUNC_0(struct ext2_gd *VAR_0)
{

 return (((uint64_t)(VAR_0->ext4bgd_i_bitmap_hi) << 32) |
     VAR_0->ext2bgd_i_bitmap);
}
