
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ext2_gd {int ext2bgd_nifree; scalar_t__ ext4bgd_nifree_hi; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct ext2_gd *VAR_0)
{

 return (((uint32_t)(VAR_0->ext4bgd_nifree_hi) << 16) |
     VAR_0->ext2bgd_nifree);
}
