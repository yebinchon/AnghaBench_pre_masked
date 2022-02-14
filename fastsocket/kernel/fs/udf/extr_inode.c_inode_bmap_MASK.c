
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct udf_inode_info {unsigned char i_lenExtents; int i_location; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct extent_position {int * bh; int block; scalar_t__ offset; } ;
typedef unsigned char sector_t ;
typedef unsigned char loff_t ;
typedef int int8_t ;
struct TYPE_2__ {unsigned char s_blocksize_bits; } ;


 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct extent_position*,struct kernel_lb_addr*,unsigned char*,int) ;

int8_t FUNC_2(struct inode *VAR_0, sector_t VAR_1,
    struct extent_position *VAR_2, struct kernel_lb_addr *VAR_3,
    uint32_t *VAR_4, sector_t *VAR_5)
{
 unsigned char VAR_6 = VAR_0->i_sb->s_blocksize_bits;
 loff_t VAR_7 = 0, VAR_8 =
     (loff_t) VAR_1 << VAR_6;
 int8_t VAR_9;
 struct udf_inode_info *VAR_10;

 VAR_10 = FUNC_0(VAR_0);
 VAR_2->offset = 0;
 VAR_2->block = VAR_10->i_location;
 VAR_2->bh = ((void*)0);
 *VAR_4 = 0;

 do {
  VAR_9 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, 1);
  if (VAR_9 == -1) {
   *VAR_5 = (VAR_8 - VAR_7) >> VAR_6;
   VAR_10->i_lenExtents = VAR_7;
   return -1;
  }
  VAR_7 += *VAR_4;
 } while (VAR_7 <= VAR_8);

 *VAR_5 = (VAR_8 + *VAR_4 - VAR_7) >> VAR_6;

 return VAR_9;
}
