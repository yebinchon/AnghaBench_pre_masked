
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_cache {int ec_type; scalar_t__ ec_blk; scalar_t__ ec_len; int ec_start; } ;
struct inode {struct ext4_extent_cache i_ext_cache; } ;
struct ext4_extent {scalar_t__ e_blk; int e_start_lo; int e_start_hi; scalar_t__ e_len; } ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;

int
FUNC_0(struct inode *VAR_1, daddr_t VAR_2, struct ext4_extent *VAR_3)
{
 struct ext4_extent_cache *VAR_4;
 int VAR_5 = VAR_0;

 VAR_4 = &VAR_1->i_ext_cache;
 if (VAR_4->ec_type == VAR_0)
  return (VAR_5);

 if (VAR_2 >= VAR_4->ec_blk && VAR_2 < VAR_4->ec_blk + VAR_4->ec_len) {
  VAR_3->e_blk = VAR_4->ec_blk;
  VAR_3->e_start_lo = VAR_4->ec_start & 0xffffffff;
  VAR_3->e_start_hi = VAR_4->ec_start >> 32 & 0xffff;
  VAR_3->e_len = VAR_4->ec_len;
  VAR_5 = VAR_4->ec_type;
 }
 return (VAR_5);
}
