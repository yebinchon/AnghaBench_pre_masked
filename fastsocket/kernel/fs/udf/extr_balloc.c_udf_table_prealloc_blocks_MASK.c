
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct unallocSpaceEntry {int dummy; } ;
struct udf_sb_info {int s_alloc_mutex; TYPE_1__* s_partmaps; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_location; } ;
struct super_block {int s_blocksize_bits; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int logicalBlockNum; } ;
struct inode {int dummy; } ;
struct extent_position {int offset; int * bh; int block; } ;
typedef int int8_t ;
struct TYPE_2__ {int s_partition_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,size_t,int) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (struct inode*,struct extent_position,struct kernel_lb_addr,int) ;
 int FUNC_8 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int) ;
 int FUNC_9 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 scalar_t__ FUNC_10 (struct inode*,int) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_2,
         struct inode *VAR_3,
         struct inode *VAR_4, uint16_t VAR_5,
         uint32_t VAR_6, uint32_t VAR_7)
{
 struct udf_sb_info *VAR_8 = FUNC_1(VAR_2);
 int VAR_9 = 0;
 uint32_t VAR_10, VAR_11;
 struct kernel_lb_addr VAR_12;
 struct extent_position VAR_13;
 int8_t VAR_14 = -1;
 struct udf_inode_info *VAR_15;

 if (VAR_6 >= VAR_8->s_partmaps[VAR_5].s_partition_len)
  return 0;

 VAR_15 = FUNC_0(VAR_4);
 if (VAR_15->i_alloc_type == VAR_1)
  VAR_11 = sizeof(struct short_ad);
 else if (VAR_15->i_alloc_type == VAR_0)
  VAR_11 = sizeof(struct long_ad);
 else
  return 0;

 FUNC_3(&VAR_8->s_alloc_mutex);
 VAR_13.offset = sizeof(struct unallocSpaceEntry);
 VAR_13.block = VAR_15->i_location;
 VAR_13.bh = ((void*)0);
 VAR_12.logicalBlockNum = 0xFFFFFFFF;

 while (VAR_6 != VAR_12.logicalBlockNum &&
        (VAR_14 = FUNC_8(VAR_4, &VAR_13, &VAR_12, &VAR_10, 1)) != -1) {
  FUNC_6("eloc=%d, elen=%d, first_block=%d\n",
     VAR_12.logicalBlockNum, VAR_10, VAR_6);
  ;
 }

 if (VAR_6 == VAR_12.logicalBlockNum) {
  VAR_13.offset -= VAR_11;

  VAR_9 = (VAR_10 >> VAR_2->s_blocksize_bits);
  if (VAR_3 && FUNC_10(VAR_3,
   VAR_9 > VAR_7 ? VAR_7 : VAR_9))
   VAR_9 = 0;
  else if (VAR_9 > VAR_7) {
   VAR_9 = VAR_7;
   VAR_12.logicalBlockNum += VAR_9;
   VAR_10 -= (VAR_9 << VAR_2->s_blocksize_bits);
   FUNC_9(VAR_4, &VAR_13, &VAR_12,
     (VAR_14 << 30) | VAR_10, 1);
  } else
   FUNC_7(VAR_4, VAR_13, VAR_12,
     (VAR_14 << 30) | VAR_10);
 } else {
  VAR_9 = 0;
 }

 FUNC_2(VAR_13.bh);

 if (VAR_9)
  FUNC_5(VAR_2, VAR_5, -VAR_9);
 FUNC_4(&VAR_8->s_alloc_mutex);
 return VAR_9;
}
